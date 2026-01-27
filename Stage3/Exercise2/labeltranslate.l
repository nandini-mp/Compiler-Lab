%{
    #include <stdio.h>
    #include <string.h>
    #include "label/label.h"

    int addr = 2056;
    int pass = 1;
    FILE *translatedFile;
%}

%option noinput
%option nounput

number [0-9]+
reg R{number}
label_value L{number}
label_header {label_value}:\n

%%

(0\n{number}\n0\n0\n0\n0\n0\n0\n) { 
    if(pass == 2) fprintf(translatedFile,"%s",yytext); 
}

{label_header} {
    if (pass == 1){
        char labelName[64];
        sscanf(yytext, "%[^:]", labelName); // Get everything before the colon
        addLabel(labelName, addr);
    }
}

JZ[ ]{reg},[ ]{label_value}\n {
    if (pass == 1) addr += 2;
    else {
        char r[10], l[64];
        sscanf(yytext, "JZ %[^,], %s", r, l); // Extracts register without the comma
        fprintf(translatedFile, "JZ %s, %d\n", r, addrForLabel(l));
    }
}

JNZ[ ]{reg},[ ]{label_value}\n {
    if (pass == 1) addr += 2;
    else {
        char r[10], l[64];
        sscanf(yytext, "JNZ %[^,], %s", r, l);
        fprintf(translatedFile, "JNZ %s, %d\n", r, addrForLabel(l));
    }
}

JMP[ ]{label_value}\n {
    if (pass == 1) addr += 2;
    else {
        char l[64];
        sscanf(yytext, "JMP %s", l);
        fprintf(translatedFile, "JMP %d\n", addrForLabel(l));
    }
}

CALL[ ]{label_value}\n {
    if (pass == 1) addr += 2;
    else {
        char l[64];
        sscanf(yytext, "CALL %s", l);
        fprintf(translatedFile, "CALL %d\n", addrForLabel(l));
    }
}

.*\n {
    if(pass == 2) fprintf(translatedFile, "%s", yytext);
    else addr += 2;
}

%%

int yywrap() {
    if (pass == 1) {
        rewind(yyin);
        pass++;
        addr = 2056; // RESET ADDRESS FOR PASS 2
        return 0;
    }
    return 1;
}

int main() {
    yyin = fopen("intermediate.xsm", "r"); // Make sure this matches your generator output
    translatedFile = fopen("translatedFile.xsm", "w");
    yylex();
    return 0;
}