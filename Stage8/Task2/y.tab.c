/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "control.y"

	#include <stdlib.h>
	#include <stdio.h>
	#include <limits.h>
	#include <string.h>
	#include <stdbool.h>
	#include "control.h"
	#include "symbolTable/symbolTable.h"
	#include "typeTable/typeTable.h"
    #include "label/label.h"
    int countLocals();
	int inLocalDecl = 0;
	extern int inParamList;
	Ttable* current_type  = NULL;
	Ctable* current_class = NULL;   // NEW — class being compiled right now
	tnode* ASTRoot = NULL;
	int yyerror(const char*);
	int yylex(void);
	extern FILE *yyin;

#line 92 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    STRINGG = 259,                 /* STRINGG  */
    ID = 260,                      /* ID  */
    PLUS = 261,                    /* PLUS  */
    MINUS = 262,                   /* MINUS  */
    MUL = 263,                     /* MUL  */
    DIV = 264,                     /* DIV  */
    BEGINN = 265,                  /* BEGINN  */
    ENDD = 266,                    /* ENDD  */
    READ = 267,                    /* READ  */
    WRITE = 268,                   /* WRITE  */
    ASSIGN = 269,                  /* ASSIGN  */
    SEMICOLON = 270,               /* SEMICOLON  */
    LT = 271,                      /* LT  */
    GT = 272,                      /* GT  */
    LE = 273,                      /* LE  */
    GE = 274,                      /* GE  */
    NE = 275,                      /* NE  */
    EQ = 276,                      /* EQ  */
    IF = 277,                      /* IF  */
    THEN = 278,                    /* THEN  */
    ELSE = 279,                    /* ELSE  */
    ENDIF = 280,                   /* ENDIF  */
    WHILE = 281,                   /* WHILE  */
    DO = 282,                      /* DO  */
    ENDWHILE = 283,                /* ENDWHILE  */
    BREAKK = 284,                  /* BREAKK  */
    CONTINUEE = 285,               /* CONTINUEE  */
    REPEATT = 286,                 /* REPEATT  */
    UNTILL = 287,                  /* UNTILL  */
    DECL = 288,                    /* DECL  */
    ENDDECL = 289,                 /* ENDDECL  */
    COMMA = 290,                   /* COMMA  */
    INT = 291,                     /* INT  */
    STR = 292,                     /* STR  */
    AMPERSAND = 293,               /* AMPERSAND  */
    MOD = 294,                     /* MOD  */
    RETURNN = 295,                 /* RETURNN  */
    TYPE = 296,                    /* TYPE  */
    ENDTYPE = 297,                 /* ENDTYPE  */
    ALLOC = 298,                   /* ALLOC  */
    FREE = 299,                    /* FREE  */
    NULLL = 300,                   /* NULLL  */
    MAIN = 301,                    /* MAIN  */
    INITIALIZE = 302,              /* INITIALIZE  */
    CLASS = 303,                   /* CLASS  */
    ENDCLASS = 304,                /* ENDCLASS  */
    EXTENDS = 305,                 /* EXTENDS  */
    NEW = 306,                     /* NEW  */
    DELETE = 307,                  /* DELETE  */
    SELF = 308,                    /* SELF  */
    AND = 309,                     /* AND  */
    OR = 310,                      /* OR  */
    UNARY = 311                    /* UNARY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define STRINGG 259
#define ID 260
#define PLUS 261
#define MINUS 262
#define MUL 263
#define DIV 264
#define BEGINN 265
#define ENDD 266
#define READ 267
#define WRITE 268
#define ASSIGN 269
#define SEMICOLON 270
#define LT 271
#define GT 272
#define LE 273
#define GE 274
#define NE 275
#define EQ 276
#define IF 277
#define THEN 278
#define ELSE 279
#define ENDIF 280
#define WHILE 281
#define DO 282
#define ENDWHILE 283
#define BREAKK 284
#define CONTINUEE 285
#define REPEATT 286
#define UNTILL 287
#define DECL 288
#define ENDDECL 289
#define COMMA 290
#define INT 291
#define STR 292
#define AMPERSAND 293
#define MOD 294
#define RETURNN 295
#define TYPE 296
#define ENDTYPE 297
#define ALLOC 298
#define FREE 299
#define NULLL 300
#define MAIN 301
#define INITIALIZE 302
#define CLASS 303
#define ENDCLASS 304
#define EXTENDS 305
#define NEW 306
#define DELETE 307
#define SELF 308
#define AND 309
#define OR 310
#define UNARY 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "control.y"

	struct tnode *no;
	char* str;

#line 262 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_STRINGG = 4,                    /* STRINGG  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_PLUS = 6,                       /* PLUS  */
  YYSYMBOL_MINUS = 7,                      /* MINUS  */
  YYSYMBOL_MUL = 8,                        /* MUL  */
  YYSYMBOL_DIV = 9,                        /* DIV  */
  YYSYMBOL_BEGINN = 10,                    /* BEGINN  */
  YYSYMBOL_ENDD = 11,                      /* ENDD  */
  YYSYMBOL_READ = 12,                      /* READ  */
  YYSYMBOL_WRITE = 13,                     /* WRITE  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 15,                 /* SEMICOLON  */
  YYSYMBOL_LT = 16,                        /* LT  */
  YYSYMBOL_GT = 17,                        /* GT  */
  YYSYMBOL_LE = 18,                        /* LE  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_EQ = 21,                        /* EQ  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_THEN = 23,                      /* THEN  */
  YYSYMBOL_ELSE = 24,                      /* ELSE  */
  YYSYMBOL_ENDIF = 25,                     /* ENDIF  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_DO = 27,                        /* DO  */
  YYSYMBOL_ENDWHILE = 28,                  /* ENDWHILE  */
  YYSYMBOL_BREAKK = 29,                    /* BREAKK  */
  YYSYMBOL_CONTINUEE = 30,                 /* CONTINUEE  */
  YYSYMBOL_REPEATT = 31,                   /* REPEATT  */
  YYSYMBOL_UNTILL = 32,                    /* UNTILL  */
  YYSYMBOL_DECL = 33,                      /* DECL  */
  YYSYMBOL_ENDDECL = 34,                   /* ENDDECL  */
  YYSYMBOL_COMMA = 35,                     /* COMMA  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_STR = 37,                       /* STR  */
  YYSYMBOL_AMPERSAND = 38,                 /* AMPERSAND  */
  YYSYMBOL_MOD = 39,                       /* MOD  */
  YYSYMBOL_RETURNN = 40,                   /* RETURNN  */
  YYSYMBOL_TYPE = 41,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 42,                   /* ENDTYPE  */
  YYSYMBOL_ALLOC = 43,                     /* ALLOC  */
  YYSYMBOL_FREE = 44,                      /* FREE  */
  YYSYMBOL_NULLL = 45,                     /* NULLL  */
  YYSYMBOL_MAIN = 46,                      /* MAIN  */
  YYSYMBOL_INITIALIZE = 47,                /* INITIALIZE  */
  YYSYMBOL_CLASS = 48,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 49,                  /* ENDCLASS  */
  YYSYMBOL_EXTENDS = 50,                   /* EXTENDS  */
  YYSYMBOL_NEW = 51,                       /* NEW  */
  YYSYMBOL_DELETE = 52,                    /* DELETE  */
  YYSYMBOL_SELF = 53,                      /* SELF  */
  YYSYMBOL_AND = 54,                       /* AND  */
  YYSYMBOL_OR = 55,                        /* OR  */
  YYSYMBOL_UNARY = 56,                     /* UNARY  */
  YYSYMBOL_57_ = 57,                       /* '{'  */
  YYSYMBOL_58_ = 58,                       /* '}'  */
  YYSYMBOL_59_ = 59,                       /* '('  */
  YYSYMBOL_60_ = 60,                       /* ')'  */
  YYSYMBOL_61_ = 61,                       /* '.'  */
  YYSYMBOL_62_ = 62,                       /* '['  */
  YYSYMBOL_63_ = 63,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program = 65,                   /* program  */
  YYSYMBOL_TypeDefBlock = 66,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 67,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 68,                   /* TypeDef  */
  YYSYMBOL_69_1 = 69,                      /* $@1  */
  YYSYMBOL_ClassDefBlock = 70,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 71,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 72,                  /* ClassDef  */
  YYSYMBOL_73_2 = 73,                      /* $@2  */
  YYSYMBOL_74_3 = 74,                      /* $@3  */
  YYSYMBOL_75_4 = 75,                      /* $@4  */
  YYSYMBOL_76_5 = 76,                      /* $@5  */
  YYSYMBOL_ClassDeclList = 77,             /* ClassDeclList  */
  YYSYMBOL_ClassDeclItem = 78,             /* ClassDeclItem  */
  YYSYMBOL_ClassMethodDecl = 79,           /* ClassMethodDecl  */
  YYSYMBOL_ClassMethodDefList = 80,        /* ClassMethodDefList  */
  YYSYMBOL_ClassMethodDef = 81,            /* ClassMethodDef  */
  YYSYMBOL_82_6 = 82,                      /* $@6  */
  YYSYMBOL_FieldDeclList = 83,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 84,                 /* FieldDecl  */
  YYSYMBOL_Field = 85,                     /* Field  */
  YYSYMBOL_TypeName = 86,                  /* TypeName  */
  YYSYMBOL_GDeclBlock = 87,                /* GDeclBlock  */
  YYSYMBOL_88_7 = 88,                      /* $@7  */
  YYSYMBOL_GdeclList = 89,                 /* GdeclList  */
  YYSYMBOL_GDecl = 90,                     /* GDecl  */
  YYSYMBOL_91_8 = 91,                      /* $@8  */
  YYSYMBOL_GidList = 92,                   /* GidList  */
  YYSYMBOL_Gid = 93,                       /* Gid  */
  YYSYMBOL_FDefBlock = 94,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 95,                      /* Fdef  */
  YYSYMBOL_ParamList = 96,                 /* ParamList  */
  YYSYMBOL_Param = 97,                     /* Param  */
  YYSYMBOL_LdeclBlock = 98,                /* LdeclBlock  */
  YYSYMBOL_99_9 = 99,                      /* $@9  */
  YYSYMBOL_LDeclList = 100,                /* LDeclList  */
  YYSYMBOL_LDecl = 101,                    /* LDecl  */
  YYSYMBOL_102_10 = 102,                   /* $@10  */
  YYSYMBOL_IdList = 103,                   /* IdList  */
  YYSYMBOL_Retstmt = 104,                  /* Retstmt  */
  YYSYMBOL_Body = 105,                     /* Body  */
  YYSYMBOL_ArgList = 106,                  /* ArgList  */
  YYSYMBOL_MainBlock = 107,                /* MainBlock  */
  YYSYMBOL_Slist = 108,                    /* Slist  */
  YYSYMBOL_Stmt = 109,                     /* Stmt  */
  YYSYMBOL_InputStmt = 110,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 111,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 112,                  /* AsgStmt  */
  YYSYMBOL_IfStmt = 113,                   /* IfStmt  */
  YYSYMBOL_WhileStmt = 114,                /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 115,               /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 116,              /* DoWhileStmt  */
  YYSYMBOL_expr = 117                      /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1100

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,    60,     2,     2,     2,     2,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    54,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    78,    79,    82,    83,    86,    86,
      93,   101,   105,   106,   111,   115,   110,   126,   130,   125,
     142,   143,   147,   148,   152,   165,   166,   167,   172,   171,
     204,   205,   208,   229,   232,   235,   237,   242,   243,   244,
     252,   252,   253,   254,   257,   258,   263,   262,   288,   289,
     292,   293,   294,   296,   297,   300,   303,   304,   305,   308,
     311,   311,   312,   313,   316,   317,   320,   320,   323,   324,
     327,   330,   331,   334,   335,   338,   344,   345,   346,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   360,
     362,   363,   364,   365,   366,   368,   385,   387,   389,   391,
     393,   395,   397,   399,   407,   408,   409,   410,   413,   416,
     432,   433,   434,   435,   438,   439,   442,   445,   448,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   478,   480,   482,   483,   485,
     487
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "STRINGG", "ID",
  "PLUS", "MINUS", "MUL", "DIV", "BEGINN", "ENDD", "READ", "WRITE",
  "ASSIGN", "SEMICOLON", "LT", "GT", "LE", "GE", "NE", "EQ", "IF", "THEN",
  "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAKK", "CONTINUEE",
  "REPEATT", "UNTILL", "DECL", "ENDDECL", "COMMA", "INT", "STR",
  "AMPERSAND", "MOD", "RETURNN", "TYPE", "ENDTYPE", "ALLOC", "FREE",
  "NULLL", "MAIN", "INITIALIZE", "CLASS", "ENDCLASS", "EXTENDS", "NEW",
  "DELETE", "SELF", "AND", "OR", "UNARY", "'{'", "'}'", "'('", "')'",
  "'.'", "'['", "']'", "$accept", "program", "TypeDefBlock", "TypeDefList",
  "TypeDef", "$@1", "ClassDefBlock", "ClassDefList", "ClassDef", "$@2",
  "$@3", "$@4", "$@5", "ClassDeclList", "ClassDeclItem", "ClassMethodDecl",
  "ClassMethodDefList", "ClassMethodDef", "$@6", "FieldDeclList",
  "FieldDecl", "Field", "TypeName", "GDeclBlock", "$@7", "GdeclList",
  "GDecl", "$@8", "GidList", "Gid", "FDefBlock", "Fdef", "ParamList",
  "Param", "LdeclBlock", "$@9", "LDeclList", "LDecl", "$@10", "IdList",
  "Retstmt", "Body", "ArgList", "MainBlock", "Slist", "Stmt", "InputStmt",
  "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt", "RepeatStmt",
  "DoWhileStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-196)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     351,   -23,   -24,    46,    93,    48,   319,   -18,    77,  -196,
    -196,   195,    49,  -196,     4,  -196,    90,    36,  -196,  -196,
     -18,    77,  -196,    77,  -196,  -196,   -24,  -196,   166,    77,
    -196,  -196,  -196,  -196,     8,  -196,   116,   125,  -196,  -196,
     187,   131,  -196,  -196,    77,  -196,    77,  -196,    77,  -196,
     138,  -196,  -196,   202,  -196,  -196,   153,   195,  -196,   194,
      77,  -196,  -196,  -196,   195,   -38,    -3,  -196,   200,   167,
    -196,   210,   192,   195,  -196,   251,   -21,  -196,   195,   263,
    -196,   202,   241,   260,  -196,  -196,   265,   255,   272,  -196,
    -196,  -196,   288,  -196,   195,   247,   -10,   253,  -196,  -196,
     195,   896,   264,  -196,   195,  -196,  -196,    32,  -196,   200,
    -196,  -196,  -196,   287,  -196,    38,   417,   266,   276,   280,
     284,   988,   341,   364,   988,   417,   321,   324,   328,    13,
     391,   896,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,   300,   195,   195,   260,   404,  -196,  -196,   426,    30,
     405,   417,  -196,  -196,   285,   417,   407,  -196,   354,   355,
     417,   356,   702,    11,   417,   417,   417,  1016,  -196,  -196,
     925,   719,    26,   414,   418,   453,   422,  -196,   425,  -196,
    -196,   172,  -196,   432,    72,   381,  -196,   159,   383,   385,
     393,   744,   439,    81,   845,   406,   130,    50,   435,   417,
     183,  -196,   458,   461,   501,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   386,
     411,   182,   518,   568,   585,   408,   415,  -196,   293,   325,
     420,    43,   416,   419,   761,  -196,  -196,   195,  -196,  -196,
     423,   466,  -196,  -196,   478,   424,   427,   481,  -196,  -196,
     417,   473,   175,    22,  -196,   126,   430,   136,   433,   212,
    -196,  1045,  1045,   147,   147,   786,   579,   579,   579,   579,
     579,   579,   147,   845,   845,   475,   487,   417,   489,   480,
     482,   476,   474,   417,   417,   485,   488,   490,   236,   497,
     451,   508,  -196,   209,   195,  -196,  -196,   499,   500,   456,
     845,  -196,   516,   152,   417,   417,  -196,   337,   470,  -196,
     373,   528,  -196,  -196,  -196,   244,   462,  -196,  -196,   988,
     988,   635,   652,  -196,  -196,  -196,   526,   163,   491,   529,
     486,  -196,   176,  -196,  -196,   532,  -196,   533,   803,   294,
    -196,   234,   417,  -196,   237,   493,   302,   544,   863,   953,
       2,   538,  -196,   539,   390,  -196,   543,  -196,  -196,  -196,
    -196,   545,  -196,   311,  -196,   400,   547,   417,  -196,   988,
     548,   549,  -196,  -196,  -196,   550,   291,  -196,   503,   417,
    -196,  -196,   303,  -196,   352,   982,  -196,  -196,  -196,   552,
     200,   828,  -196,   509,   556,  -196,   260,  -196,   564,  -196,
     523,  -196,  -196
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      15,    50,     0,     0,     0,     0,    21,    53,     0,    13,
      52,     0,     0,    18,     0,    17,    24,     0,    23,     1,
      53,     0,     7,     0,    10,    49,    47,    48,     0,     0,
      64,    12,    47,    56,     0,    55,     0,     0,    14,    16,
       0,     0,    20,    22,     0,     4,     0,     6,     0,     9,
       0,    63,    11,     0,    51,    54,     0,     0,    27,     0,
       0,     3,     5,     8,    68,    60,     0,    59,    73,     0,
      41,     0,     0,     0,     2,     0,     0,    67,    68,     0,
      57,     0,    70,     0,    19,    40,     0,     0,     0,    31,
      33,    32,     0,    69,     0,     0,     0,     0,    58,    72,
       0,     0,     0,    42,     0,    25,    30,     0,    66,    73,
      62,    61,    76,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,    87,    89,    90,    91,    92,    93,    97,    96,
      85,     0,    37,    68,     0,     0,    71,    74,     0,     0,
       0,     0,   135,   137,   136,     0,     0,   153,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,    82,     0,    86,
      28,     0,    36,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,    84,    43,     0,     0,     0,     0,
     149,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
       0,    45,     0,     0,     0,    44,    81,    37,    26,    35,
       0,     0,    65,    77,     0,     0,     0,     0,   119,    98,
       0,     0,     0,     0,   150,     0,    43,     0,     0,    45,
     134,   129,   130,   131,   132,     0,   138,   139,   140,   141,
     142,   143,   133,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,    68,    34,    78,     0,     0,     0,
      83,    99,     0,     0,     0,     0,   151,     0,   146,   160,
       0,     0,   122,   114,    43,     0,    45,   117,   118,    88,
      88,     0,     0,   102,   103,   106,     0,     0,    46,     0,
       0,    29,     0,   100,   104,   160,   109,     0,     0,     0,
     156,     0,     0,   154,     0,    46,     0,     0,     0,     0,
       0,     0,   107,     0,     0,   101,   160,    38,   105,   110,
     120,     0,   157,     0,   155,     0,     0,     0,    46,    88,
       0,     0,   128,   127,   108,     0,     0,   113,     0,     0,
     147,   158,     0,   115,     0,     0,   125,   126,   111,     0,
      73,     0,   159,     0,     0,   112,     0,   121,     0,   124,
       0,   116,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,  -196,   566,  -196,   577,  -196,   573,  -196,
    -196,  -196,  -196,   504,   -82,  -196,   372,  -162,  -196,  -196,
      37,  -101,    -8,   394,  -196,  -196,   576,  -196,  -196,   530,
     137,   230,   -70,   519,  -108,  -196,  -196,   502,  -196,  -196,
     483,  -139,  -195,   522,  -114,  -127,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,   -88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    14,    15,    37,     7,    17,    18,    41,
     142,    72,   237,    88,    89,    90,   181,   182,   378,    69,
      91,   161,    28,     8,    11,    34,    35,    53,    66,    67,
      29,    30,    76,    77,    83,   100,   113,   114,   145,   187,
     130,   102,   193,     9,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   194
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     129,   144,   255,    33,   179,   185,   106,   167,    96,    13,
     170,    10,    80,    25,    94,     1,   219,   372,     2,   239,
     129,    78,    12,   129,    79,    94,    33,   175,   162,   320,
     129,   228,    81,   152,   153,   154,   304,   171,   155,    95,
     179,    16,    54,   179,    32,    27,    38,   103,    19,    71,
     110,    13,   148,   152,   153,   154,    75,   303,   155,   106,
     191,    71,   221,   196,   220,    92,   129,   200,   156,   129,
      75,   229,   204,   184,   176,   157,   222,   223,   224,   220,
      92,   158,    25,   159,   305,    42,    75,   234,   156,   160,
     192,   143,   112,   327,    70,   157,    92,   149,    16,   150,
     151,   158,   288,   159,   289,   112,    85,    94,    36,   160,
     254,   257,   341,    26,    27,   344,   250,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   239,   241,    92,   183,    75,   205,   206,   207,   208,
      40,   251,   205,   206,   207,   208,   210,   211,   212,   213,
     214,   215,   210,   211,   212,   213,   214,   215,    46,   376,
      48,   250,   300,   210,   211,   212,   213,   214,   215,   216,
     382,    50,    25,   183,   243,   216,    56,    25,   152,   153,
     154,    60,    57,   155,   217,   218,   306,   250,    59,   315,
     217,   218,    58,   253,   244,   321,   322,    64,   250,   308,
      25,   217,   218,    32,    27,   348,   349,    65,    32,    27,
      68,    94,   337,   156,    25,    86,   338,   339,   129,   129,
     157,   179,   179,   353,   332,    84,   158,    73,   159,   183,
     238,    32,    27,    82,   160,   302,   357,   217,   218,   152,
     153,   154,   279,   176,   155,    32,    27,   129,   129,    87,
     205,   206,   207,   208,   363,   385,    93,   400,   179,    51,
     210,   211,   212,   213,   214,   215,    97,   331,   129,   250,
     101,   310,   250,   311,   156,    99,    51,    25,    51,   384,
     103,   157,   396,   216,   129,   183,    75,   158,   104,   159,
      51,   391,    25,   107,   362,   160,   326,   364,   217,   218,
     205,   206,   207,   208,   109,    25,   105,   346,    32,    27,
     210,   211,   212,   213,   214,   215,   111,   205,   206,   207,
     208,   146,   140,    32,    27,   163,   250,   210,   211,   212,
     213,   214,   215,   216,   180,   164,    32,    27,   250,   165,
     152,   153,   154,   166,   197,   155,   198,   199,   217,   218,
     216,   389,     1,   285,   276,     2,   168,   361,   205,   206,
     207,   208,   366,   392,   367,   217,   218,     4,   210,   211,
     212,   213,   214,   215,   380,   156,   152,   153,   154,   169,
     172,   155,   157,   173,     1,   286,   176,     2,   158,   174,
     159,   216,     3,   152,   153,   154,   160,   340,   155,     4,
      21,    23,   177,   152,   153,   154,   217,   218,   155,   186,
     195,   156,   201,   202,    44,   393,   203,   176,   157,   230,
     152,   153,   154,   231,   158,   155,   159,   235,   156,   152,
     153,   154,   160,   343,   155,   157,   236,   240,   156,   242,
     256,   158,   245,   159,   246,   157,   275,   276,   277,   160,
     375,   158,   247,   159,   249,   156,   152,   153,   154,   160,
     381,   155,   157,   258,   156,   252,   259,   283,   158,   188,
     159,   157,   278,   189,   284,   290,   160,   190,   291,   159,
     287,   295,   294,   296,   297,   160,   299,   298,   301,   307,
     313,   156,   314,   309,   316,   317,   232,   318,   157,   319,
     323,   320,   328,   324,   233,   325,   159,   205,   206,   207,
     208,   329,   160,   330,   333,   334,   335,   210,   211,   212,
     213,   214,   215,   347,   205,   206,   207,   208,    22,    24,
      31,   336,   342,   345,   210,   211,   212,   213,   214,   215,
     216,   352,    45,    47,   355,    49,   356,   358,   359,   368,
     354,    52,   365,   373,   374,   217,   218,   216,   377,   379,
     390,   260,   383,   386,   387,   388,    61,   395,    62,   398,
      63,   399,   217,   218,   205,   206,   207,   208,   280,   401,
      39,   402,    74,    20,   210,   211,   212,   213,   214,   215,
      43,   205,   206,   207,   208,    -1,    -1,    -1,    -1,    -1,
      -1,   210,   211,   212,   213,   214,   215,   216,   141,   293,
      55,    98,     0,   108,   178,   147,     0,     0,     0,     0,
       0,     0,   217,   218,   216,     0,     0,     0,   281,     0,
       0,     0,     0,   217,   218,     0,     0,     0,     0,   217,
     218,   205,   206,   207,   208,   282,     0,     0,     0,     0,
       0,   210,   211,   212,   213,   214,   215,     0,   205,   206,
     207,   208,     0,     0,     0,     0,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
     218,   216,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   218,   205,   206,
     207,   208,   351,     0,     0,     0,   209,     0,   210,   211,
     212,   213,   214,   215,     0,   205,   206,   207,   208,     0,
       0,     0,     0,     0,   227,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   206,   207,   208,     0,     0,   217,   218,   216,   248,
     210,   211,   212,   213,   214,   215,     0,   205,   206,   207,
     208,     0,     0,   217,   218,     0,   292,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,   208,     0,     0,   217,   218,
     216,   312,   210,   211,   212,   213,   214,   215,     0,   205,
     206,   207,   208,     0,     0,   217,   218,     0,   360,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   206,   207,   208,     0,     0,
     217,   218,   216,   397,   210,   211,   212,   213,   214,   215,
       0,   205,   206,   207,   208,     0,     0,   217,   218,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   115,     0,
       0,   116,     0,     0,     0,   117,   118,     0,     0,     0,
       0,     0,   217,   218,   216,   119,     0,   369,   370,   120,
     121,     0,   122,   123,   124,     0,     0,     0,     0,   217,
     218,   115,     0,     0,   116,     0,     0,   126,   117,   118,
       0,     0,     0,     0,     0,   127,   128,     0,   119,     0,
       0,     0,   120,   121,     0,   122,   123,   124,     0,     0,
     115,     0,     0,   116,     0,     0,   125,   117,   118,     0,
     126,     0,     0,     0,     0,     0,     0,   119,   127,   128,
       0,   120,   121,     0,   122,   123,   124,   226,   115,     0,
       0,   116,     0,     0,     0,   117,   118,     0,     0,   126,
       0,     0,     0,     0,     0,   119,     0,   127,   128,   120,
     121,   371,   122,   123,   124,     0,     0,   115,     0,     0,
     116,     0,     0,   115,   117,   118,   116,   126,     0,     0,
     117,   118,     0,     0,   119,   127,   128,   394,   120,   121,
     119,   122,   123,   124,   120,   121,     0,   122,   123,   124,
       0,   115,     0,     0,   116,     0,   126,     0,   117,   118,
       0,     0,   126,     0,   127,   128,     0,     0,   119,     0,
     127,   128,   225,   121,     0,   122,   123,   124,     0,     0,
       0,     0,     0,   207,   208,     0,     0,     0,     0,     0,
     126,   210,   211,   212,   213,   214,   215,     0,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
     218
};

static const yytype_int16 yycheck[] =
{
     101,   109,   197,    11,   131,   144,    88,   121,    78,     5,
     124,    34,    15,     5,    35,    33,     5,    15,    36,   181,
     121,    59,    46,   124,    62,    35,    34,    14,   116,    27,
     131,     5,    35,     3,     4,     5,    14,   125,     8,    60,
     167,     5,    34,   170,    36,    37,    42,    15,     0,    57,
      60,     5,    14,     3,     4,     5,    64,   252,     8,   141,
     148,    69,   163,   151,    53,    73,   167,   155,    38,   170,
      78,   172,   160,   143,    61,    45,   164,   165,   166,    53,
      88,    51,     5,    53,    62,    49,    94,   175,    38,    59,
      60,    59,   100,   288,    57,    45,   104,    59,     5,    61,
      62,    51,    59,    53,    61,   113,    69,    35,    59,    59,
      60,   199,   307,    36,    37,   310,    35,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   293,    60,   141,   142,   143,     6,     7,     8,     9,
      50,    60,     6,     7,     8,     9,    16,    17,    18,    19,
      20,    21,    16,    17,    18,    19,    20,    21,    21,   354,
      23,    35,   250,    16,    17,    18,    19,    20,    21,    39,
     365,     5,     5,   181,    15,    39,    60,     5,     3,     4,
       5,    44,    57,     8,    54,    55,    60,    35,    57,   277,
      54,    55,     5,    63,    35,   283,   284,    59,    35,    63,
       5,    54,    55,    36,    37,   319,   320,     5,    36,    37,
      57,    35,    60,    38,     5,     5,   304,   305,   319,   320,
      45,   348,   349,    60,   294,    58,    51,    33,    53,   237,
      58,    36,    37,    33,    59,    60,    60,    54,    55,     3,
       4,     5,    60,    61,     8,    36,    37,   348,   349,    57,
       6,     7,     8,     9,   342,   369,     5,   396,   385,    29,
      16,    17,    18,    19,    20,    21,     3,    58,   369,    35,
      10,    59,    35,    61,    38,    34,    46,     5,    48,   367,
      15,    45,   390,    39,   385,   293,   294,    51,    33,    53,
      60,   379,     5,     5,    60,    59,    60,    60,    54,    55,
       6,     7,     8,     9,    57,     5,    34,    63,    36,    37,
      16,    17,    18,    19,    20,    21,    63,     6,     7,     8,
       9,    34,    58,    36,    37,    59,    35,    16,    17,    18,
      19,    20,    21,    39,    34,    59,    36,    37,    35,    59,
       3,     4,     5,    59,    59,     8,    61,    62,    54,    55,
      39,    60,    33,    60,    61,    36,    15,    63,     6,     7,
       8,     9,    60,    60,    62,    54,    55,    48,    16,    17,
      18,    19,    20,    21,    63,    38,     3,     4,     5,    15,
      59,     8,    45,    59,    33,    60,    61,    36,    51,    61,
      53,    39,    41,     3,     4,     5,    59,    60,     8,    48,
       6,     7,    11,     3,     4,     5,    54,    55,     8,     5,
       5,    38,     5,    59,    20,    63,    61,    61,    45,     5,
       3,     4,     5,     5,    51,     8,    53,     5,    38,     3,
       4,     5,    59,    60,     8,    45,    11,     5,    38,    58,
       5,    51,    59,    53,    59,    45,    60,    61,    62,    59,
      60,    51,    59,    53,    15,    38,     3,     4,     5,    59,
      60,     8,    45,     5,    38,    59,     5,    59,    51,    43,
      53,    45,    61,    47,    59,    59,    59,    51,    59,    53,
      60,    15,    59,     5,    60,    59,     5,    60,    15,    59,
      15,    38,     5,    60,     5,    15,    43,    15,    45,    23,
      15,    27,     5,    15,    51,    15,    53,     6,     7,     8,
       9,    60,    59,     5,    15,    15,    60,    16,    17,    18,
      19,    20,    21,    61,     6,     7,     8,     9,     6,     7,
       8,    15,    62,     5,    16,    17,    18,    19,    20,    21,
      39,    15,    20,    21,    15,    23,    60,    15,    15,     5,
      59,    29,    59,    15,    15,    54,    55,    39,    15,    14,
      57,    60,    15,    15,    15,    15,    44,    15,    46,    60,
      48,    15,    54,    55,     6,     7,     8,     9,    60,    15,
      14,    58,    60,     6,    16,    17,    18,    19,    20,    21,
      17,     6,     7,     8,     9,    16,    17,    18,    19,    20,
      21,    16,    17,    18,    19,    20,    21,    39,   104,   237,
      34,    81,    -1,    94,   131,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    39,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    54,
      55,     6,     7,     8,     9,    60,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    39,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,     6,     7,
       8,     9,    60,    -1,    -1,    -1,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    54,    55,    39,    15,
      16,    17,    18,    19,    20,    21,    -1,     6,     7,     8,
       9,    -1,    -1,    54,    55,    -1,    15,    16,    17,    18,
      19,    20,    21,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    54,    55,
      39,    15,    16,    17,    18,    19,    20,    21,    -1,     6,
       7,     8,     9,    -1,    -1,    54,    55,    -1,    15,    16,
      17,    18,    19,    20,    21,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      54,    55,    39,    15,    16,    17,    18,    19,    20,    21,
      -1,     6,     7,     8,     9,    -1,    -1,    54,    55,    -1,
      -1,    16,    17,    18,    19,    20,    21,    39,     5,    -1,
      -1,     8,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    54,    55,    39,    22,    -1,    24,    25,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,    54,
      55,     5,    -1,    -1,     8,    -1,    -1,    44,    12,    13,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    22,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,    -1,
       5,    -1,    -1,     8,    -1,    -1,    40,    12,    13,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    22,    52,    53,
      -1,    26,    27,    -1,    29,    30,    31,    32,     5,    -1,
      -1,     8,    -1,    -1,    -1,    12,    13,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    52,    53,    26,
      27,    28,    29,    30,    31,    -1,    -1,     5,    -1,    -1,
       8,    -1,    -1,     5,    12,    13,     8,    44,    -1,    -1,
      12,    13,    -1,    -1,    22,    52,    53,    25,    26,    27,
      22,    29,    30,    31,    26,    27,    -1,    29,    30,    31,
      -1,     5,    -1,    -1,     8,    -1,    44,    -1,    12,    13,
      -1,    -1,    44,    -1,    52,    53,    -1,    -1,    22,    -1,
      52,    53,    26,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      44,    16,    17,    18,    19,    20,    21,    -1,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    36,    41,    48,    65,    66,    70,    87,   107,
      34,    88,    46,     5,    67,    68,     5,    71,    72,     0,
      70,    87,   107,    87,   107,     5,    36,    37,    86,    94,
      95,   107,    36,    86,    89,    90,    59,    69,    42,    68,
      50,    73,    49,    72,    87,   107,    94,   107,    94,   107,
       5,    95,   107,    91,    34,    90,    60,    57,     5,    57,
      94,   107,   107,   107,    59,     5,    92,    93,    57,    83,
      84,    86,    75,    33,   107,    86,    96,    97,    59,    62,
      15,    35,    33,    98,    58,    84,     5,    57,    77,    78,
      79,    84,    86,     5,    35,    60,    96,     3,    93,    34,
      99,    10,   105,    15,    33,    34,    78,     5,    97,    57,
      60,    63,    86,   100,   101,     5,     8,    12,    13,    22,
      26,    27,    29,    30,    31,    40,    44,    52,    53,    85,
     104,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      58,    77,    74,    59,    98,   102,    34,   101,    14,    59,
      61,    62,     3,     4,     5,     8,    38,    45,    51,    53,
      59,    85,   117,    59,    59,    59,    59,   108,    15,    15,
     108,   117,    59,    59,    61,    14,    61,    11,   104,   109,
      34,    80,    81,    86,    96,   105,     5,   103,    43,    47,
      51,   117,    60,   106,   117,     5,   117,    59,    61,    62,
     117,     5,    59,    61,   117,     6,     7,     8,     9,    14,
      16,    17,    18,    19,    20,    21,    39,    54,    55,     5,
      53,    85,   117,   117,   117,    26,    32,    15,     5,    85,
       5,     5,    43,    51,   117,     5,    11,    76,    58,    81,
       5,    60,    58,    15,    35,    59,    59,    59,    15,    15,
      35,    60,    59,    63,    60,   106,     5,   117,     5,     5,
      60,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,    60,    61,    62,    61,    60,
      60,    60,    60,    59,    59,    60,    60,    60,    59,    61,
      59,    59,    15,    80,    59,    15,     5,    60,    60,     5,
     117,    15,    60,   106,    14,    62,    60,    59,    63,    60,
      59,    61,    15,    15,     5,   117,     5,    15,    15,    23,
      27,   117,   117,    15,    15,    15,    60,   106,     5,    60,
       5,    58,    96,    15,    15,    60,    15,    60,   117,   117,
      60,   106,    62,    60,   106,     5,    63,    61,   108,   108,
      60,    60,    15,    60,    59,    15,    60,    60,    15,    15,
      15,    63,    60,   117,    60,    59,    60,    62,     5,    24,
      25,    28,    15,    15,    15,    60,   106,    15,    82,    14,
      63,    60,   106,    15,   117,   108,    15,    15,    15,    60,
      57,   117,    60,    63,    25,    15,    98,    15,    60,    15,
     105,    15,    58
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    67,    67,    69,    68,
      70,    70,    71,    71,    73,    74,    72,    75,    76,    72,
      77,    77,    78,    78,    79,    80,    80,    80,    82,    81,
      83,    83,    84,    85,    85,    85,    85,    86,    86,    86,
      88,    87,    87,    87,    89,    89,    91,    90,    92,    92,
      93,    93,    93,    94,    94,    95,    96,    96,    96,    97,
      99,    98,    98,    98,   100,   100,   102,   101,   103,   103,
     104,   105,   105,   106,   106,   107,   108,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   110,   110,   111,   112,
     112,   112,   112,   112,   113,   113,   114,   115,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     4,     3,     2,     4,     3,
       2,     3,     2,     1,     3,     0,     2,     1,     0,     5,
       3,     0,     2,     1,     0,     0,     9,     0,     0,    11,
       2,     1,     1,     1,     6,     2,     1,     0,     0,    10,
       2,     1,     3,     3,     3,     3,     5,     1,     1,     1,
       0,     4,     2,     0,     2,     1,     0,     4,     3,     1,
       1,     4,     4,     2,     1,     9,     3,     1,     0,     2,
       0,     4,     2,     0,     2,     1,     0,     4,     3,     1,
       3,     4,     3,     3,     1,     8,     2,     1,     0,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     4,     5,
       6,     6,     5,     5,     6,     7,     5,     6,     7,     6,
       7,     8,     9,     7,     5,     8,    11,     5,     5,     4,
       7,    10,     5,     4,    10,     8,     8,     7,     7,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     7,     2,     2,
       3,     4,     1,     1,     5,     6,     5,     6,     7,     8,
       4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 53 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-4].no), makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))))); }
#line 1764 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock ClassDefBlock GDeclBlock MainBlock  */
#line 55 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1770 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock ClassDefBlock MainBlock  */
#line 57 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1776 "y.tab.c"
    break;

  case 5: /* program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 59 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1782 "y.tab.c"
    break;

  case 6: /* program: TypeDefBlock GDeclBlock MainBlock  */
#line 61 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1788 "y.tab.c"
    break;

  case 7: /* program: TypeDefBlock MainBlock  */
#line 63 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1794 "y.tab.c"
    break;

  case 8: /* program: ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 65 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1800 "y.tab.c"
    break;

  case 9: /* program: ClassDefBlock GDeclBlock MainBlock  */
#line 67 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1806 "y.tab.c"
    break;

  case 10: /* program: ClassDefBlock MainBlock  */
#line 69 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1812 "y.tab.c"
    break;

  case 11: /* program: GDeclBlock FDefBlock MainBlock  */
#line 71 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1818 "y.tab.c"
    break;

  case 12: /* program: GDeclBlock MainBlock  */
#line 73 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1824 "y.tab.c"
    break;

  case 13: /* program: MainBlock  */
#line 75 "control.y"
        { ASTRoot = (yyvsp[0].no); }
#line 1830 "y.tab.c"
    break;

  case 14: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 78 "control.y"
                                        { (yyval.no) = (yyvsp[-1].no); }
#line 1836 "y.tab.c"
    break;

  case 15: /* TypeDefBlock: %empty  */
#line 79 "control.y"
                                        { (yyval.no) = NULL; }
#line 1842 "y.tab.c"
    break;

  case 16: /* TypeDefList: TypeDefList TypeDef  */
#line 82 "control.y"
                                  { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1848 "y.tab.c"
    break;

  case 17: /* TypeDefList: TypeDef  */
#line 83 "control.y"
                                  { (yyval.no) = (yyvsp[0].no); }
#line 1854 "y.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 86 "control.y"
             {TInstallEmpty((yyvsp[0].str));}
#line 1860 "y.tab.c"
    break;

  case 19: /* TypeDef: ID $@1 '{' FieldDeclList '}'  */
#line 86 "control.y"
                                                        {
            (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-4].str)), (yyvsp[-1].no));
            TSetFields((yyvsp[-4].str), buildFieldList((yyvsp[-1].no)));
          }
#line 1869 "y.tab.c"
    break;

  case 20: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 94 "control.y"
      {
          // Reserve space for VFTs: 8 words per class
          extern int classCount;  // from classTable.c
          extern int stackVal;    // from symbolTable.c
          stackVal = 4096 + (classCount * 8);
          (yyval.no) = (yyvsp[-1].no);
      }
#line 1881 "y.tab.c"
    break;

  case 21: /* ClassDefBlock: %empty  */
#line 101 "control.y"
       { (yyval.no) = NULL; }
#line 1887 "y.tab.c"
    break;

  case 22: /* ClassDefList: ClassDefList ClassDef  */
#line 105 "control.y"
                            { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1893 "y.tab.c"
    break;

  case 23: /* ClassDefList: ClassDef  */
#line 106 "control.y"
                            { (yyval.no) = (yyvsp[0].no); }
#line 1899 "y.tab.c"
    break;

  case 24: /* $@2: %empty  */
#line 111 "control.y"
      {
          current_class = CInstall((yyvsp[0].str), NULL);
      }
#line 1907 "y.tab.c"
    break;

  case 25: /* $@3: %empty  */
#line 115 "control.y"
      {
          CSetFields(current_class->name, buildFieldList((yyvsp[-1].no)));
      }
#line 1915 "y.tab.c"
    break;

  case 26: /* ClassDef: ID $@2 '{' DECL ClassDeclList ENDDECL $@3 ClassMethodDefList '}'  */
#line 119 "control.y"
      {
          (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-8].str)),
                               makeConnectNode((yyvsp[-4].no), (yyvsp[-1].no)));
          current_class = NULL;
      }
#line 1925 "y.tab.c"
    break;

  case 27: /* $@4: %empty  */
#line 126 "control.y"
    {
        current_class = CInstall((yyvsp[-2].str), (yyvsp[0].str));
    }
#line 1933 "y.tab.c"
    break;

  case 28: /* $@5: %empty  */
#line 130 "control.y"
    {
        CSetFields(current_class->name, buildFieldList((yyvsp[-1].no)));
    }
#line 1941 "y.tab.c"
    break;

  case 29: /* ClassDef: ID EXTENDS ID $@4 '{' DECL ClassDeclList ENDDECL $@5 ClassMethodDefList '}'  */
#line 134 "control.y"
    {
        (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-10].str)),
                            makeConnectNode((yyvsp[-4].no), (yyvsp[-1].no)));
        current_class = NULL;
    }
#line 1951 "y.tab.c"
    break;

  case 30: /* ClassDeclList: ClassDeclList ClassDeclItem  */
#line 142 "control.y"
                                  { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1957 "y.tab.c"
    break;

  case 31: /* ClassDeclList: ClassDeclItem  */
#line 143 "control.y"
                                  { (yyval.no) = (yyvsp[0].no); }
#line 1963 "y.tab.c"
    break;

  case 32: /* ClassDeclItem: FieldDecl  */
#line 147 "control.y"
                       { (yyval.no) = (yyvsp[0].no); }
#line 1969 "y.tab.c"
    break;

  case 33: /* ClassDeclItem: ClassMethodDecl  */
#line 148 "control.y"
                       { (yyval.no) = (yyvsp[0].no); }
#line 1975 "y.tab.c"
    break;

  case 34: /* ClassMethodDecl: TypeName ID '(' ParamList ')' SEMICOLON  */
#line 153 "control.y"
      {
          int lbl = getFnLabel();
          Cmethod* m = createMethod((yyvsp[-4].str), (yyvsp[-5].no)->typeEntry,
                                    buildParamListFromTree((yyvsp[-2].no)), lbl);
          CAddMethod(current_class, m);
          ClearLST();   // ← must be here, resets paramBinding to -3
          (yyval.no) = makeVariableNode((yyvsp[-4].str));
          (yyval.no)->isFunction = 1;
      }
#line 1989 "y.tab.c"
    break;

  case 35: /* ClassMethodDefList: ClassMethodDefList ClassMethodDef  */
#line 165 "control.y"
                                        { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1995 "y.tab.c"
    break;

  case 36: /* ClassMethodDefList: ClassMethodDef  */
#line 166 "control.y"
                                        { (yyval.no) = (yyvsp[0].no); }
#line 2001 "y.tab.c"
    break;

  case 37: /* ClassMethodDefList: %empty  */
#line 167 "control.y"
                                        { (yyval.no) = NULL; }
#line 2007 "y.tab.c"
    break;

  case 38: /* $@6: %empty  */
#line 172 "control.y"
      {
          extern int inParamList;
          inParamList = 0;
      }
#line 2016 "y.tab.c"
    break;

  case 39: /* ClassMethodDef: TypeName ID '(' ParamList ')' $@6 '{' LdeclBlock Body '}'  */
#line 177 "control.y"
      {
          Cmethod* m = CMLookup(current_class, (yyvsp[-8].str));
          if (m == NULL) {
              printf("Semantic Error: Method %s not declared in class %s\n",
                     (yyvsp[-8].str), current_class->name);
              exit(1);
          }
          tnode* methodNode = (tnode*)malloc(sizeof(tnode));
          methodNode->nodetype              = Nfdef;
          methodNode->varname               = strdup((yyvsp[-8].str));
          methodNode->type                  = (yyvsp[-9].no)->type;
          methodNode->left                  = (yyvsp[-6].no);
          methodNode->right                 = NULL;
          methodNode->body                  = (yyvsp[-1].no);      /* Body is now $9 not $8 */
          methodNode->ldeclblock            = (yyvsp[-2].no);      /* LdeclBlock is now $8 not $7 */
          methodNode->val                   = countLocals();
          methodNode->symbolTableEntry      = NULL;
          methodNode->localSymbolTableEntry = NULL;
          methodNode->classEntry            = current_class;
          methodNode->isFunction            = 1;
          methodNode->paramlist             = buildParamListFromTree((yyvsp[-6].no));
          methodNode->typeEntry             = (yyvsp[-9].no)->typeEntry;
          ClearLST();
          (yyval.no) = methodNode;
      }
#line 2046 "y.tab.c"
    break;

  case 40: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 204 "control.y"
                                        { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 2052 "y.tab.c"
    break;

  case 41: /* FieldDeclList: FieldDecl  */
#line 205 "control.y"
                                        { (yyval.no) = (yyvsp[0].no); }
#line 2058 "y.tab.c"
    break;

  case 42: /* FieldDecl: TypeName ID SEMICOLON  */
#line 208 "control.y"
                                  {
              (yyval.no) = makeVariableNode((yyvsp[-1].str));
              if ((yyvsp[-2].no)->typeEntry != NULL) {
                  (yyval.no)->typeEntry = (yyvsp[-2].no)->typeEntry;
              } else {
                  /* might be a class type field */
                  /* for Stage 7 just store NULL — class fields handled later */
                  /* or look up in class table if needed */
                  Ctable* fc = (yyvsp[-2].no)->varname ? CLookup((yyvsp[-2].no)->varname) : NULL;
                  if (fc == NULL) {
                      printf("Semantic Error: Unknown type '%s' in field declaration\n",
                             (yyvsp[-2].no)->varname ? (yyvsp[-2].no)->varname : "?");
                      exit(1);
                  }
                  /* store as NULL typeEntry — field is a class type */
                  (yyval.no)->typeEntry = NULL;
                  (yyval.no)->classEntry = fc;
              }
            }
#line 2082 "y.tab.c"
    break;

  case 43: /* Field: ID '.' ID  */
#line 229 "control.y"
                  {
          (yyval.no) = makeFieldAccessNode(makeVariableUseNode((yyvsp[-2].str)), (yyvsp[0].str));
        }
#line 2090 "y.tab.c"
    break;

  case 44: /* Field: Field '.' ID  */
#line 232 "control.y"
                   {
          (yyval.no) = makeFieldAccessNode((yyvsp[-2].no), (yyvsp[0].str));
        }
#line 2098 "y.tab.c"
    break;

  case 45: /* Field: SELF '.' ID  */
#line 236 "control.y"
      { (yyval.no) = makeSelfFieldNode((yyvsp[0].str)); }
#line 2104 "y.tab.c"
    break;

  case 46: /* Field: SELF '.' ID '.' ID  */
#line 238 "control.y"
      { (yyval.no) = makeFieldAccessNode(makeSelfFieldNode((yyvsp[-2].str)), (yyvsp[0].str)); }
#line 2110 "y.tab.c"
    break;

  case 47: /* TypeName: INT  */
#line 242 "control.y"
          { (yyval.no) = makeTypeNode(0); }
#line 2116 "y.tab.c"
    break;

  case 48: /* TypeName: STR  */
#line 243 "control.y"
          { (yyval.no) = makeTypeNode(2); }
#line 2122 "y.tab.c"
    break;

  case 49: /* TypeName: ID  */
#line 244 "control.y"
          {
              (yyval.no) = makeTypeNode(0);
              (yyval.no)->typeEntry = TLookup((yyvsp[0].str));
              (yyval.no)->varname   = strdup((yyvsp[0].str));
              /* no error here — GDecl will check for class */
          }
#line 2133 "y.tab.c"
    break;

  case 50: /* $@7: %empty  */
#line 252 "control.y"
                  {inLocalDecl = 0;}
#line 2139 "y.tab.c"
    break;

  case 51: /* GDeclBlock: DECL $@7 GdeclList ENDDECL  */
#line 252 "control.y"
                                                       {(yyval.no) = (yyvsp[-1].no); print((yyval.no));}
#line 2145 "y.tab.c"
    break;

  case 52: /* GDeclBlock: DECL ENDDECL  */
#line 253 "control.y"
                       {(yyval.no) = NULL;}
#line 2151 "y.tab.c"
    break;

  case 53: /* GDeclBlock: %empty  */
#line 254 "control.y"
          {(yyval.no) = NULL;}
#line 2157 "y.tab.c"
    break;

  case 54: /* GdeclList: GdeclList GDecl  */
#line 257 "control.y"
                             {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2163 "y.tab.c"
    break;

  case 55: /* GdeclList: GDecl  */
#line 258 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 2169 "y.tab.c"
    break;

  case 56: /* $@8: %empty  */
#line 263 "control.y"
      {
          if ((yyvsp[0].no)->typeEntry != NULL) {
              current_type  = (yyvsp[0].no)->typeEntry;
              current_class = NULL;
          } else {
              current_class = (yyvsp[0].no)->varname ? CLookup((yyvsp[0].no)->varname) : NULL;
              if (current_class == NULL) {
                  printf("Semantic Error: Unknown type or class '%s'\n",
                         (yyvsp[0].no)->varname ? (yyvsp[0].no)->varname : "?");
                  exit(1);
              }
              current_type = NULL;
          }
      }
#line 2188 "y.tab.c"
    break;

  case 57: /* GDecl: TypeName $@8 GidList SEMICOLON  */
#line 278 "control.y"
      {
          if (current_class != NULL) {
              (yyval.no) = makeClassDeclNode((yyvsp[-1].no), current_class);
              current_class = NULL;
          } else {
              (yyval.no) = makeDeclNode((yyvsp[-3].no), (yyvsp[-1].no));
          }
      }
#line 2201 "y.tab.c"
    break;

  case 58: /* GidList: GidList COMMA Gid  */
#line 288 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 2207 "y.tab.c"
    break;

  case 59: /* GidList: Gid  */
#line 289 "control.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 2213 "y.tab.c"
    break;

  case 60: /* Gid: ID  */
#line 292 "control.y"
         {(yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 0;}
#line 2219 "y.tab.c"
    break;

  case 61: /* Gid: ID '[' NUM ']'  */
#line 293 "control.y"
                      {(yyval.no) = makeArrayNode(NULL,makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 2225 "y.tab.c"
    break;

  case 62: /* Gid: ID '(' ParamList ')'  */
#line 294 "control.y"
                           {(yyval.no) = makeFnDeclNode(makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no)); ClearLST();}
#line 2231 "y.tab.c"
    break;

  case 63: /* FDefBlock: FDefBlock Fdef  */
#line 296 "control.y"
                           {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2237 "y.tab.c"
    break;

  case 64: /* FDefBlock: Fdef  */
#line 297 "control.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 2243 "y.tab.c"
    break;

  case 65: /* Fdef: TypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 300 "control.y"
                                                         { (yyval.no) = makeFnDefNode((yyvsp[-8].no), makeVariableNode((yyvsp[-7].str)), (yyvsp[-5].no), (yyvsp[-2].no), (yyvsp[-1].no)); }
#line 2249 "y.tab.c"
    break;

  case 66: /* ParamList: ParamList COMMA Param  */
#line 303 "control.y"
                                  {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 2255 "y.tab.c"
    break;

  case 67: /* ParamList: Param  */
#line 304 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 2261 "y.tab.c"
    break;

  case 68: /* ParamList: %empty  */
#line 305 "control.y"
                        {(yyval.no) = NULL;}
#line 2267 "y.tab.c"
    break;

  case 69: /* Param: TypeName ID  */
#line 308 "control.y"
                    {(yyval.no) = makeParamNode((yyvsp[-1].no), makeVariableNode((yyvsp[0].str)));}
#line 2273 "y.tab.c"
    break;

  case 70: /* $@9: %empty  */
#line 311 "control.y"
                  {inLocalDecl = 1; inParamList = 0;}
#line 2279 "y.tab.c"
    break;

  case 71: /* LdeclBlock: DECL $@9 LDeclList ENDDECL  */
#line 311 "control.y"
                                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2285 "y.tab.c"
    break;

  case 72: /* LdeclBlock: DECL ENDDECL  */
#line 312 "control.y"
                       {(yyval.no) = NULL;}
#line 2291 "y.tab.c"
    break;

  case 73: /* LdeclBlock: %empty  */
#line 313 "control.y"
      {(yyval.no) = NULL;}
#line 2297 "y.tab.c"
    break;

  case 74: /* LDeclList: LDeclList LDecl  */
#line 316 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2303 "y.tab.c"
    break;

  case 75: /* LDeclList: LDecl  */
#line 317 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 2309 "y.tab.c"
    break;

  case 76: /* $@10: %empty  */
#line 320 "control.y"
                 {current_type = (yyvsp[0].no)->typeEntry;}
#line 2315 "y.tab.c"
    break;

  case 77: /* LDecl: TypeName $@10 IdList SEMICOLON  */
#line 320 "control.y"
                                                                  {(yyval.no) = makeDeclNode((yyvsp[-3].no),(yyvsp[-1].no));}
#line 2321 "y.tab.c"
    break;

  case 78: /* IdList: IdList COMMA ID  */
#line 323 "control.y"
                         {(yyval.no) = makeConnectNode((yyvsp[-2].no),makeVariableNode((yyvsp[0].str)));}
#line 2327 "y.tab.c"
    break;

  case 79: /* IdList: ID  */
#line 324 "control.y"
             {(yyval.no) = makeVariableNode((yyvsp[0].str));}
#line 2333 "y.tab.c"
    break;

  case 80: /* Retstmt: RETURNN expr SEMICOLON  */
#line 327 "control.y"
                                 { (yyval.no) = makeReturnNode((yyvsp[-1].no)); }
#line 2339 "y.tab.c"
    break;

  case 81: /* Body: BEGINN Slist Retstmt ENDD  */
#line 330 "control.y"
                                 { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[-1].no)); }
#line 2345 "y.tab.c"
    break;

  case 82: /* Body: BEGINN Retstmt ENDD  */
#line 331 "control.y"
                                 { (yyval.no) = (yyvsp[-1].no); }
#line 2351 "y.tab.c"
    break;

  case 83: /* ArgList: ArgList COMMA expr  */
#line 334 "control.y"
                             { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 2357 "y.tab.c"
    break;

  case 84: /* ArgList: expr  */
#line 335 "control.y"
               { (yyval.no) = (yyvsp[0].no); }
#line 2363 "y.tab.c"
    break;

  case 85: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 339 "control.y"
            {
                (yyval.no) = makeFnDefNode(makeTypeNode(0), makeVariableNode("main"), NULL, (yyvsp[-2].no), (yyvsp[-1].no));
            }
#line 2371 "y.tab.c"
    break;

  case 86: /* Slist: Slist Stmt  */
#line 344 "control.y"
                   {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2377 "y.tab.c"
    break;

  case 87: /* Slist: Stmt  */
#line 345 "control.y"
             {(yyval.no) = (yyvsp[0].no);}
#line 2383 "y.tab.c"
    break;

  case 88: /* Slist: %empty  */
#line 346 "control.y"
            {(yyval.no)=NULL;}
#line 2389 "y.tab.c"
    break;

  case 89: /* Stmt: InputStmt  */
#line 349 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 2395 "y.tab.c"
    break;

  case 90: /* Stmt: OutputStmt  */
#line 350 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 2401 "y.tab.c"
    break;

  case 91: /* Stmt: AsgStmt  */
#line 351 "control.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 2407 "y.tab.c"
    break;

  case 92: /* Stmt: IfStmt  */
#line 352 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 2413 "y.tab.c"
    break;

  case 93: /* Stmt: WhileStmt  */
#line 353 "control.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 2419 "y.tab.c"
    break;

  case 94: /* Stmt: BREAKK SEMICOLON  */
#line 354 "control.y"
                           {(yyval.no) = makeBreakNode();}
#line 2425 "y.tab.c"
    break;

  case 95: /* Stmt: CONTINUEE SEMICOLON  */
#line 355 "control.y"
                              {(yyval.no) = makeContinueNode();}
#line 2431 "y.tab.c"
    break;

  case 96: /* Stmt: DoWhileStmt  */
#line 356 "control.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 2437 "y.tab.c"
    break;

  case 97: /* Stmt: RepeatStmt  */
#line 357 "control.y"
                     {(yyval.no) = (yyvsp[0].no);}
#line 2443 "y.tab.c"
    break;

  case 98: /* Stmt: ID '(' ')' SEMICOLON  */
#line 359 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)), NULL); }
#line 2449 "y.tab.c"
    break;

  case 99: /* Stmt: ID '(' ArgList ')' SEMICOLON  */
#line 361 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-4].str)), (yyvsp[-2].no)); }
#line 2455 "y.tab.c"
    break;

  case 100: /* Stmt: ID ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 362 "control.y"
                                            { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-5].str)), makeAllocNode(NULL)); }
#line 2461 "y.tab.c"
    break;

  case 101: /* Stmt: Field ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 363 "control.y"
                                               { (yyval.no) = makeAssignNode((yyvsp[-5].no), makeAllocNode(NULL)); }
#line 2467 "y.tab.c"
    break;

  case 102: /* Stmt: FREE '(' ID ')' SEMICOLON  */
#line 364 "control.y"
                                    { (yyval.no) = makeFreeNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2473 "y.tab.c"
    break;

  case 103: /* Stmt: FREE '(' Field ')' SEMICOLON  */
#line 365 "control.y"
                                       { (yyval.no) = makeFreeNode((yyvsp[-2].no)); }
#line 2479 "y.tab.c"
    break;

  case 104: /* Stmt: ID ASSIGN INITIALIZE '(' ')' SEMICOLON  */
#line 367 "control.y"
    { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-5].str)), makeInitializeNode()); }
#line 2485 "y.tab.c"
    break;

  case 105: /* Stmt: ID ASSIGN NEW '(' ID ')' SEMICOLON  */
#line 369 "control.y"
    {
        tnode* lhs = makeVariableUseNode((yyvsp[-6].str));
        tnode* rhs = makeNewNode((yyvsp[-2].str));
        // Check: rhs class must be same or descendant of lhs class
        Ctable* lhsClass = lhs->symbolTableEntry ?
                            lhs->symbolTableEntry->ctype : NULL;
        Ctable* rhsClass = rhs->classEntry;
        if (lhsClass != NULL && rhsClass != NULL) {
            if (!isDescendant(rhsClass, lhsClass)) {
                printf("Semantic Error: %s is not a descendant of %s\n",
                        rhsClass->name, lhsClass->name);
                exit(1);
            }
        }
        (yyval.no) = makeAssignNode(lhs, rhs);
    }
#line 2506 "y.tab.c"
    break;

  case 106: /* Stmt: DELETE '(' ID ')' SEMICOLON  */
#line 386 "control.y"
        { (yyval.no) = makeDeleteNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2512 "y.tab.c"
    break;

  case 107: /* Stmt: SELF '.' ID '(' ')' SEMICOLON  */
#line 388 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-3].str), NULL); }
#line 2518 "y.tab.c"
    break;

  case 108: /* Stmt: SELF '.' ID '(' ArgList ')' SEMICOLON  */
#line 390 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-4].str), (yyvsp[-2].no)); }
#line 2524 "y.tab.c"
    break;

  case 109: /* Stmt: ID '.' ID '(' ')' SEMICOLON  */
#line 392 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-5].str)), (yyvsp[-3].str), NULL); }
#line 2530 "y.tab.c"
    break;

  case 110: /* Stmt: ID '.' ID '(' ArgList ')' SEMICOLON  */
#line 394 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].str), (yyvsp[-2].no)); }
#line 2536 "y.tab.c"
    break;

  case 111: /* Stmt: SELF '.' ID '.' ID '(' ')' SEMICOLON  */
#line 396 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeSelfFieldNode((yyvsp[-5].str)), (yyvsp[-3].str), NULL); }
#line 2542 "y.tab.c"
    break;

  case 112: /* Stmt: SELF '.' ID '.' ID '(' ArgList ')' SEMICOLON  */
#line 398 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeSelfFieldNode((yyvsp[-6].str)), (yyvsp[-4].str), (yyvsp[-2].no)); }
#line 2548 "y.tab.c"
    break;

  case 113: /* Stmt: Field ASSIGN NEW '(' ID ')' SEMICOLON  */
#line 400 "control.y"
    {
        tnode* lhs = (yyvsp[-6].no);
        tnode* rhs = makeNewNode((yyvsp[-2].str));
        (yyval.no) = makeAssignNode(lhs, rhs);
    }
#line 2558 "y.tab.c"
    break;

  case 114: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 407 "control.y"
                                   { (yyval.no) = makeReadNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2564 "y.tab.c"
    break;

  case 115: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 408 "control.y"
                                           { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-5].str)),(yyvsp[-3].no))); }
#line 2570 "y.tab.c"
    break;

  case 116: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 409 "control.y"
                                                     { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-8].str)),makeConnectNode((yyvsp[-6].no),(yyvsp[-3].no)))); }
#line 2576 "y.tab.c"
    break;

  case 117: /* InputStmt: READ '(' Field ')' SEMICOLON  */
#line 410 "control.y"
                                       { (yyval.no) = makeReadNode((yyvsp[-2].no)); }
#line 2582 "y.tab.c"
    break;

  case 118: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 413 "control.y"
                                       {(yyval.no) = makeWriteNode((yyvsp[-2].no));}
#line 2588 "y.tab.c"
    break;

  case 119: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 417 "control.y"
{
    tnode* lhs = makeVariableUseNode((yyvsp[-3].str));
    tnode* rhs = (yyvsp[-1].no);
    Ctable* lhsClass = lhs->symbolTableEntry ?
                       lhs->symbolTableEntry->ctype : NULL;
    Ctable* rhsClass = rhs->classEntry ? rhs->classEntry :
                       (rhs->symbolTableEntry ? rhs->symbolTableEntry->ctype : NULL);
    if (lhsClass != NULL && rhsClass != NULL) {
        if (!isDescendant(rhsClass, lhsClass)) {
            printf("Semantic Error: Incompatible class assignment\n");
            exit(1);
        }
    }
    (yyval.no) = makeAssignNode(lhs, rhs);
}
#line 2608 "y.tab.c"
    break;

  case 120: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 432 "control.y"
                                      { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].no)), (yyvsp[-1].no)); }
#line 2614 "y.tab.c"
    break;

  case 121: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 433 "control.y"
                                                { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-9].str)), makeConnectNode((yyvsp[-7].no),(yyvsp[-4].no))), (yyvsp[-1].no)); }
#line 2620 "y.tab.c"
    break;

  case 122: /* AsgStmt: MUL expr ASSIGN expr SEMICOLON  */
#line 434 "control.y"
                                 { (yyval.no) = makeAssignNode(makeDerefNode((yyvsp[-3].no)), (yyvsp[-1].no)); }
#line 2626 "y.tab.c"
    break;

  case 123: /* AsgStmt: Field ASSIGN expr SEMICOLON  */
#line 435 "control.y"
                              { (yyval.no) = makeAssignNode((yyvsp[-3].no), (yyvsp[-1].no)); }
#line 2632 "y.tab.c"
    break;

  case 124: /* IfStmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 438 "control.y"
                                                             {(yyval.no) = makeIfElseNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 2638 "y.tab.c"
    break;

  case 125: /* IfStmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 439 "control.y"
                                                   {(yyval.no) = makeIfNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2644 "y.tab.c"
    break;

  case 126: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 442 "control.y"
                                                         {(yyval.no) = makeWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2650 "y.tab.c"
    break;

  case 127: /* RepeatStmt: REPEATT Slist UNTILL '(' expr ')' SEMICOLON  */
#line 445 "control.y"
                                                            {(yyval.no)=makeRepeatNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2656 "y.tab.c"
    break;

  case 128: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 448 "control.y"
                                                        {(yyval.no)=makeDoWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2662 "y.tab.c"
    break;

  case 129: /* expr: expr PLUS expr  */
#line 451 "control.y"
                                        {(yyval.no) = makeOperatorNode('+',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2668 "y.tab.c"
    break;

  case 130: /* expr: expr MINUS expr  */
#line 452 "control.y"
                                        {(yyval.no) = makeOperatorNode('-',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2674 "y.tab.c"
    break;

  case 131: /* expr: expr MUL expr  */
#line 453 "control.y"
                                                {(yyval.no) = makeOperatorNode('*',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2680 "y.tab.c"
    break;

  case 132: /* expr: expr DIV expr  */
#line 454 "control.y"
                                                {(yyval.no) = makeOperatorNode('/',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2686 "y.tab.c"
    break;

  case 133: /* expr: expr MOD expr  */
#line 455 "control.y"
                                                {(yyval.no) = makeOperatorNode('%',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2692 "y.tab.c"
    break;

  case 134: /* expr: '(' expr ')'  */
#line 456 "control.y"
                                                {(yyval.no) = (yyvsp[-1].no);}
#line 2698 "y.tab.c"
    break;

  case 135: /* expr: NUM  */
#line 457 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2704 "y.tab.c"
    break;

  case 136: /* expr: ID  */
#line 458 "control.y"
                                                        {(yyval.no) = makeVariableUseNode((yyvsp[0].str));}
#line 2710 "y.tab.c"
    break;

  case 137: /* expr: STRINGG  */
#line 459 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2716 "y.tab.c"
    break;

  case 138: /* expr: expr LT expr  */
#line 460 "control.y"
                                                {(yyval.no) = makeCOperatorNode('<',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2722 "y.tab.c"
    break;

  case 139: /* expr: expr GT expr  */
#line 461 "control.y"
                                {(yyval.no) = makeCOperatorNode('>',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2728 "y.tab.c"
    break;

  case 140: /* expr: expr LE expr  */
#line 462 "control.y"
                                {(yyval.no) = makeCOperatorNode('L',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2734 "y.tab.c"
    break;

  case 141: /* expr: expr GE expr  */
#line 463 "control.y"
                                {(yyval.no) = makeCOperatorNode('G',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2740 "y.tab.c"
    break;

  case 142: /* expr: expr NE expr  */
#line 464 "control.y"
                                {(yyval.no) = makeCOperatorNode('N',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2746 "y.tab.c"
    break;

  case 143: /* expr: expr EQ expr  */
#line 465 "control.y"
                                {(yyval.no) = makeCOperatorNode('E',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2752 "y.tab.c"
    break;

  case 144: /* expr: expr AND expr  */
#line 466 "control.y"
                                {(yyval.no) = makeCOperatorNode('A', (yyvsp[-2].no), (yyvsp[0].no));}
#line 2758 "y.tab.c"
    break;

  case 145: /* expr: expr OR expr  */
#line 467 "control.y"
                                {(yyval.no) = makeCOperatorNode('O', (yyvsp[-2].no), (yyvsp[0].no));}
#line 2764 "y.tab.c"
    break;

  case 146: /* expr: ID '[' expr ']'  */
#line 468 "control.y"
                                                {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no));}
#line 2770 "y.tab.c"
    break;

  case 147: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 469 "control.y"
                                        {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no)));}
#line 2776 "y.tab.c"
    break;

  case 148: /* expr: AMPERSAND ID  */
#line 470 "control.y"
                                                {(yyval.no) = makeAddrNode((tnode*)makeVariableUseNode((yyvsp[0].str)));}
#line 2782 "y.tab.c"
    break;

  case 149: /* expr: MUL expr  */
#line 471 "control.y"
                                { (yyval.no) = makeDerefNode((yyvsp[0].no)); }
#line 2788 "y.tab.c"
    break;

  case 150: /* expr: ID '(' ')'  */
#line 472 "control.y"
                                                        {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-2].str)),NULL);}
#line 2794 "y.tab.c"
    break;

  case 151: /* expr: ID '(' ArgList ')'  */
#line 473 "control.y"
                                                {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 2800 "y.tab.c"
    break;

  case 152: /* expr: Field  */
#line 474 "control.y"
                  { (yyval.no) = (yyvsp[0].no); }
#line 2806 "y.tab.c"
    break;

  case 153: /* expr: NULLL  */
#line 475 "control.y"
                 { (yyval.no) = makeConstantNode(0); (yyval.no)->typeEntry = TLookup("null"); }
#line 2812 "y.tab.c"
    break;

  case 154: /* expr: SELF '.' ID '(' ')'  */
#line 477 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-2].str), NULL); }
#line 2818 "y.tab.c"
    break;

  case 155: /* expr: SELF '.' ID '(' ArgList ')'  */
#line 479 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-3].str), (yyvsp[-1].no)); }
#line 2824 "y.tab.c"
    break;

  case 156: /* expr: ID '.' ID '(' ')'  */
#line 481 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-4].str)), (yyvsp[-2].str), NULL); }
#line 2830 "y.tab.c"
    break;

  case 157: /* expr: ID '.' ID '(' ArgList ')'  */
#line 482 "control.y"
                                { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-5].str)), (yyvsp[-3].str), (yyvsp[-1].no));}
#line 2836 "y.tab.c"
    break;

  case 158: /* expr: SELF '.' ID '.' ID '(' ')'  */
#line 484 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeSelfFieldNode((yyvsp[-4].str)), (yyvsp[-2].str), NULL); }
#line 2842 "y.tab.c"
    break;

  case 159: /* expr: SELF '.' ID '.' ID '(' ArgList ')'  */
#line 486 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeSelfFieldNode((yyvsp[-5].str)), (yyvsp[-3].str), (yyvsp[-1].no)); }
#line 2848 "y.tab.c"
    break;

  case 160: /* expr: NEW '(' ID ')'  */
#line 488 "control.y"
    {
        tnode* rhs = makeNewNode((yyvsp[-1].str));
        (yyval.no) = rhs;
    }
#line 2857 "y.tab.c"
    break;


#line 2861 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 494 "control.y"


int yyerror(char const *s)
{
    printf("yyerror %s\n",s);
    return 0;
}

int main(void)
{
	initTypeTable();
	initClassTable();
    FILE *inputFile = fopen("input.txt","r");
    if (!inputFile)
	{
        printf("Could not open input.txt\n");
        return 1;
    }
    yyin = inputFile;

    if (yyparse() == 0)
	{
        if (ASTRoot != NULL)
		{
            print(ASTRoot);
            generate(ASTRoot);
        }
    }

    printSymbolTable();
	printClassTable();
    return 0;
}
