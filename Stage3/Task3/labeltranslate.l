%{
    #include <stdio.h>
    #include <string.h>
    #include "label/label.h"
    int addr = 2056;
    int passNum = 1;
    FILE *labelTranslatedFile;
%}

number [0-9]+
reg R{number}
labelVal L{number}
labelStmt {labelVal}:\n
jzInstr (JZ[ ]{reg},[ ]{labelVal}\n)
jnzInstr (JNZ[ ]{reg},[ ]{labelVal}\n)
jmpInstr (JMP[ ]{labelVal}\n)
callInstr (CALL[ ]{labelVal}\n)
header (0\n{number}\n0\n0\n0\n0\n0\n0\n)

%%

{header} {
    if (passNum==2) fprintf(labelTranslatedFile,"%s",yytext);
}

{labelStmt} {
    if (passNum==1)
    {
        char labelName[yyleng];
        sscanf(yytext,"%s:",labelName);
        labelName[strlen(labelName)-1]='\0';
        addLabel(labelName,addr);
    }
}

{jzInstr} {
    if (passNum == 1) addr+=2;
    else if (passNum == 2)
    {
        char reg[5],labelName[yyleng];
        sscanf(yytext,"JZ %s %s",reg,labelName);
        int memAddr = addrForLabel(labelName);
        fprintf(labelTranslatedFile, "JZ %s %d\n", reg, memAddr);
    }
}

{jnzInstr} {
    if (passNum == 1) addr+=2;
    else if (passNum == 2)
    {
        char reg[5],labelName[yyleng];
        sscanf(yytext,"JNZ %s %s",reg,labelName);
        int memAddr = addrForLabel(labelName);
        fprintf(labelTranslatedFile, "JNZ %s %d\n", reg, memAddr);
    }
}

{jmpInstr} {
    if (passNum == 1) addr+=2;
    else if (passNum == 2)
    {
        char labelName[yyleng];
        sscanf(yytext,"JMP %s",labelName);
        int memAddr = addrForLabel(labelName);
        fprintf(labelTranslatedFile, "JMP %d\n", memAddr);
    }
}

{callInstr} {
    if (passNum == 1) addr+=2;
    else if (passNum == 2)
    {
        char labelName[yyleng];
        sscanf(yytext,"CALL %s",labelName);
        int memAddr = addrForLabel(labelName);
        fprintf(labelTranslatedFile, "CALL %d\n", memAddr);
    }
}

.*\n {
    if(passNum == 2)
            fprintf(labelTranslatedFile,"%s",yytext);
    else addr+=2;
}

%%

int yywrap()
{
    if (passNum == 1)
    {
        rewind(yyin);
        passNum++;
        return 0;
    }
    else return 1;
}

int main()
{
    yyin = fopen("out.xsm", "r");
    labelTranslatedFile = fopen("translated.xsm", "w");
    yylex();
    return 0;
}