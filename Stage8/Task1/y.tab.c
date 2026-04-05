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
    UNARY = 309                    /* UNARY  */
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
#define UNARY 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "control.y"

	struct tnode *no;
	char* str;

#line 258 "y.tab.c"

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
  YYSYMBOL_UNARY = 54,                     /* UNARY  */
  YYSYMBOL_55_ = 55,                       /* '{'  */
  YYSYMBOL_56_ = 56,                       /* '}'  */
  YYSYMBOL_57_ = 57,                       /* '('  */
  YYSYMBOL_58_ = 58,                       /* ')'  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_60_ = 60,                       /* '['  */
  YYSYMBOL_61_ = 61,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_TypeDefBlock = 64,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 65,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 66,                   /* TypeDef  */
  YYSYMBOL_67_1 = 67,                      /* $@1  */
  YYSYMBOL_ClassDefBlock = 68,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 69,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 70,                  /* ClassDef  */
  YYSYMBOL_71_2 = 71,                      /* $@2  */
  YYSYMBOL_72_3 = 72,                      /* $@3  */
  YYSYMBOL_73_4 = 73,                      /* $@4  */
  YYSYMBOL_74_5 = 74,                      /* $@5  */
  YYSYMBOL_ClassDeclList = 75,             /* ClassDeclList  */
  YYSYMBOL_ClassDeclItem = 76,             /* ClassDeclItem  */
  YYSYMBOL_ClassMethodDecl = 77,           /* ClassMethodDecl  */
  YYSYMBOL_ClassMethodDefList = 78,        /* ClassMethodDefList  */
  YYSYMBOL_ClassMethodDef = 79,            /* ClassMethodDef  */
  YYSYMBOL_80_6 = 80,                      /* $@6  */
  YYSYMBOL_FieldDeclList = 81,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 82,                 /* FieldDecl  */
  YYSYMBOL_Field = 83,                     /* Field  */
  YYSYMBOL_TypeName = 84,                  /* TypeName  */
  YYSYMBOL_GDeclBlock = 85,                /* GDeclBlock  */
  YYSYMBOL_86_7 = 86,                      /* $@7  */
  YYSYMBOL_GdeclList = 87,                 /* GdeclList  */
  YYSYMBOL_GDecl = 88,                     /* GDecl  */
  YYSYMBOL_89_8 = 89,                      /* $@8  */
  YYSYMBOL_GidList = 90,                   /* GidList  */
  YYSYMBOL_Gid = 91,                       /* Gid  */
  YYSYMBOL_FDefBlock = 92,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 93,                      /* Fdef  */
  YYSYMBOL_ParamList = 94,                 /* ParamList  */
  YYSYMBOL_Param = 95,                     /* Param  */
  YYSYMBOL_LdeclBlock = 96,                /* LdeclBlock  */
  YYSYMBOL_97_9 = 97,                      /* $@9  */
  YYSYMBOL_LDeclList = 98,                 /* LDeclList  */
  YYSYMBOL_LDecl = 99,                     /* LDecl  */
  YYSYMBOL_100_10 = 100,                   /* $@10  */
  YYSYMBOL_IdList = 101,                   /* IdList  */
  YYSYMBOL_Retstmt = 102,                  /* Retstmt  */
  YYSYMBOL_Body = 103,                     /* Body  */
  YYSYMBOL_ArgList = 104,                  /* ArgList  */
  YYSYMBOL_MainBlock = 105,                /* MainBlock  */
  YYSYMBOL_Slist = 106,                    /* Slist  */
  YYSYMBOL_Stmt = 107,                     /* Stmt  */
  YYSYMBOL_InputStmt = 108,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 109,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 110,                  /* AsgStmt  */
  YYSYMBOL_IfStmt = 111,                   /* IfStmt  */
  YYSYMBOL_WhileStmt = 112,                /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 113,               /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 114,              /* DoWhileStmt  */
  YYSYMBOL_expr = 115                      /* expr  */
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
#define YYLAST   964

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  376

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


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
      57,    58,     2,     2,     2,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    54,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    78,    79,    82,    83,    86,    86,
      93,   101,   105,   106,   111,   115,   110,   126,   130,   125,
     142,   143,   147,   148,   152,   164,   165,   166,   171,   170,
     203,   204,   207,   227,   230,   233,   235,   240,   241,   242,
     250,   250,   251,   252,   255,   256,   261,   260,   286,   287,
     290,   291,   292,   294,   295,   298,   301,   302,   303,   306,
     309,   309,   310,   311,   314,   315,   318,   318,   321,   322,
     325,   328,   329,   332,   333,   336,   342,   343,   344,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   358,
     360,   361,   362,   363,   364,   366,   383,   385,   387,   389,
     391,   395,   396,   397,   398,   401,   404,   420,   421,   422,
     423,   426,   427,   430,   433,   436,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     464,   466,   468
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
  "DELETE", "SELF", "UNARY", "'{'", "'}'", "'('", "')'", "'.'", "'['",
  "']'", "$accept", "program", "TypeDefBlock", "TypeDefList", "TypeDef",
  "$@1", "ClassDefBlock", "ClassDefList", "ClassDef", "$@2", "$@3", "$@4",
  "$@5", "ClassDeclList", "ClassDeclItem", "ClassMethodDecl",
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

#define YYPACT_NINF (-184)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     207,    21,   -10,    39,    80,    92,    78,    -3,    83,  -184,
    -184,   157,    52,  -184,    10,  -184,   117,    26,  -184,  -184,
      -3,    83,  -184,    83,  -184,  -184,   -10,  -184,   170,    83,
    -184,  -184,  -184,  -184,    76,  -184,    75,   147,  -184,  -184,
     190,   159,  -184,  -184,    83,  -184,    83,  -184,    83,  -184,
     165,  -184,  -184,   211,  -184,  -184,   174,   157,  -184,   220,
      83,  -184,  -184,  -184,   157,    65,     2,  -184,   223,    24,
    -184,   239,   203,   157,  -184,   261,   -19,  -184,   157,   277,
    -184,   211,   245,   304,  -184,  -184,   301,   284,   116,  -184,
    -184,  -184,   313,  -184,   157,   264,   -17,   259,  -184,  -184,
     157,   629,   269,  -184,   157,  -184,  -184,    30,  -184,   223,
    -184,  -184,  -184,   194,  -184,    11,   460,   272,   273,   281,
     282,   721,   311,   337,   721,   460,   297,   298,   310,     7,
     345,   629,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,   205,   157,   157,   304,   365,  -184,  -184,   389,    46,
     368,   460,  -184,  -184,   218,   460,   369,  -184,   316,   460,
     320,   778,     4,   460,   460,   460,   749,  -184,  -184,   658,
     803,     6,   373,   375,   446,   377,  -184,   378,  -184,  -184,
      71,  -184,   381,   -16,   334,  -184,    13,   338,   339,   341,
     819,   376,    66,   925,   343,   140,   160,   394,   460,  -184,
    -184,   397,   502,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   128,   346,   119,   518,   545,
     561,   347,   349,  -184,   176,   193,   357,   -37,   350,   844,
    -184,  -184,   157,  -184,  -184,   360,   404,  -184,  -184,   417,
     366,   370,   418,  -184,  -184,   460,   411,   283,    18,  -184,
      93,   372,   164,    41,  -184,   251,   251,   286,   286,   860,
     393,   393,   393,   393,   393,   393,   286,   415,   426,   460,
     430,   424,   432,   425,   414,   460,   460,   438,   440,   441,
     319,   447,   401,  -184,   118,   157,  -184,  -184,   452,   454,
     403,   925,  -184,   455,   131,   460,   460,  -184,   363,   402,
     380,  -184,  -184,  -184,   276,   412,  -184,  -184,   721,   721,
     588,   604,  -184,  -184,  -184,   457,   161,  -184,   458,  -184,
     162,  -184,  -184,   459,  -184,   461,   885,   292,  -184,   188,
     460,  -184,   189,    58,   623,   686,   177,   462,  -184,   463,
    -184,  -184,  -184,  -184,  -184,   465,  -184,   326,  -184,   467,
     460,   721,   471,   472,  -184,  -184,  -184,   420,   460,  -184,
    -184,   342,   715,  -184,  -184,   223,   901,   422,   473,   304,
    -184,   475,  -184,   436,  -184,  -184
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
       0,     0,   132,   134,   133,     0,     0,   148,     0,     0,
     147,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    86,    28,
       0,    36,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,    84,    43,     0,     0,     0,     0,   144,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,    45,     0,     0,
      44,    81,    37,    26,    35,     0,     0,    65,    77,     0,
       0,     0,     0,   116,    98,     0,     0,     0,     0,   145,
       0,    43,     0,    45,   131,   126,   127,   128,   129,     0,
     135,   136,   137,   138,   139,   140,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,    68,    34,    78,     0,     0,
       0,    83,    99,     0,     0,     0,     0,   146,     0,   141,
       0,   119,   111,    43,     0,    45,   114,   115,    88,    88,
       0,     0,   102,   103,   106,     0,     0,    46,     0,    29,
       0,   100,   104,     0,   109,     0,     0,     0,   151,     0,
       0,   149,     0,     0,     0,     0,     0,     0,   107,     0,
     101,    38,   105,   110,   117,     0,   152,     0,   150,     0,
       0,    88,     0,     0,   125,   124,   108,     0,     0,   142,
     112,     0,     0,   122,   123,    73,     0,     0,     0,     0,
     118,     0,   121,     0,   113,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,  -184,  -184,   479,  -184,   488,  -184,   478,  -184,
    -184,  -184,  -184,   392,   -78,  -184,   268,  -178,  -184,  -184,
     -31,   -97,   -11,   243,  -184,  -184,   468,  -184,  -184,   423,
      -9,   216,   -70,   407,  -108,  -184,  -184,   399,  -184,  -184,
     383,  -137,  -183,   437,  -118,  -126,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,   -69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    14,    15,    37,     7,    17,    18,    41,
     142,    72,   232,    88,    89,    90,   180,   181,   357,    69,
      91,   160,    28,     8,    11,    34,    35,    53,    66,    67,
      29,    30,    76,    77,    83,   100,   113,   114,   145,   186,
     130,   102,   192,     9,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   193
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   144,   234,   166,   129,   178,   169,   184,    96,   215,
     106,   224,    46,   250,    48,    13,    94,    80,    94,    94,
     280,   174,   281,    33,   129,   148,    70,   129,   238,    25,
       1,    16,   295,     2,   129,    60,    12,    81,    85,    95,
     178,   110,   236,   178,    13,   103,    71,   161,   239,   152,
     153,   154,    38,    75,   155,    10,   170,   216,    71,   216,
      32,    27,    92,   106,   294,   217,   175,    75,   149,   129,
     150,   151,   129,   183,   225,    42,    25,    92,   296,   190,
      84,    25,   195,    75,   156,    16,   199,   143,    25,   112,
     202,   157,    19,    92,   218,   219,   220,   316,   300,   158,
     281,   245,   112,   159,   191,   229,   234,    32,    27,    36,
      54,     1,    32,    27,     2,   329,   349,   332,   350,    26,
      27,    25,    78,    25,   246,    79,     4,   233,   245,   252,
      92,   182,    75,    56,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   203,   204,   205,   206,
     105,   297,    32,    27,    32,    27,   208,   209,   210,   211,
     212,   213,    25,   152,   153,   154,   245,    40,   155,   182,
     203,   204,   205,   206,   319,    50,   291,   271,   175,   214,
     208,   209,   210,   211,   212,   213,   267,   268,   269,   325,
     334,   335,   354,    32,    27,    58,   245,    94,   156,    25,
     304,   248,    57,   214,   309,   157,   310,   311,   178,   178,
      25,   129,   129,   158,    59,   320,    65,   159,   249,   339,
     341,   182,    64,   245,   245,   299,   326,   327,   146,    68,
      32,    27,   373,   362,   277,   268,   178,   129,   129,   179,
       1,    32,    27,     2,    86,    51,   346,   348,     3,    21,
      23,   278,   175,    73,   129,     4,    82,   369,    87,   205,
     206,   347,    51,    44,    51,   129,    93,   208,   209,   210,
     211,   212,   213,   182,    75,   196,    51,   197,   198,    99,
      97,   361,   203,   204,   205,   206,   152,   153,   154,   366,
     214,   155,   208,   209,   210,   211,   212,   213,   203,   204,
     205,   206,   208,   209,   210,   211,   212,   213,   208,   209,
     210,   211,   212,   213,   101,   214,   103,   104,   107,   109,
     111,   156,   152,   153,   154,   140,   167,   155,   157,   162,
     163,   214,   203,   204,   205,   206,   158,   333,   164,   165,
     159,   293,   208,   209,   210,   211,   212,   213,   203,   204,
     205,   206,   168,   345,   171,   172,   176,   156,   208,   209,
     210,   211,   212,   213,   157,   214,   152,   153,   154,   173,
     185,   155,   158,   194,   200,   201,   159,   315,   226,   175,
     227,   214,   230,   152,   153,   154,   235,   359,   155,   231,
     237,   244,   152,   153,   154,   240,   241,   155,   242,   251,
     247,   156,   253,   367,   275,   270,   276,   282,   157,    -1,
      -1,    -1,    -1,    -1,    -1,   279,   158,   285,   156,   286,
     159,   328,   287,   290,   288,   157,   292,   156,   289,   298,
     302,   303,   187,   158,   157,   305,   188,   159,   331,   306,
     189,   309,   158,    22,    24,    31,   159,   307,   308,   152,
     153,   154,   317,   312,   155,   313,   314,    45,    47,   318,
      49,   323,   330,   152,   153,   154,    52,   321,   155,   322,
     324,   281,   338,   340,   342,   365,   343,   355,   356,   358,
     371,    61,   360,    62,   156,    63,   363,   364,   372,   228,
     374,   157,   375,    39,    20,    43,   141,    74,   156,   158,
     284,   108,    55,   159,    98,   157,     0,     0,   203,   204,
     205,   206,   147,   158,   177,     0,     0,   159,   208,   209,
     210,   211,   212,   213,   203,   204,   205,   206,     0,     0,
       0,     0,     0,     0,   208,   209,   210,   211,   212,   213,
       0,   214,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,   204,   205,   206,     0,     0,   214,     0,     0,
     254,   208,   209,   210,   211,   212,   213,   203,   204,   205,
     206,     0,     0,     0,     0,     0,   272,   208,   209,   210,
     211,   212,   213,     0,   214,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   203,   204,   205,   206,     0,     0,
     214,     0,     0,   273,   208,   209,   210,   211,   212,   213,
     203,   204,   205,   206,     0,     0,     0,     0,     0,   274,
     208,   209,   210,   211,   212,   213,     0,   214,   115,     0,
       0,   116,     0,     0,   115,   117,   118,   116,     0,     0,
       0,   117,   118,   214,     0,   119,   336,   351,   352,   120,
     121,   119,   122,   123,   124,   120,   121,     0,   122,   123,
     124,     0,   337,   115,     0,     0,   116,   126,     0,   125,
     117,   118,     0,   126,     0,   127,   128,     0,     0,     0,
     119,   127,   128,     0,   120,   121,     0,   122,   123,   124,
     222,   115,     0,     0,   116,     0,     0,     0,   117,   118,
       0,     0,   126,     0,     0,     0,     0,     0,   119,     0,
     127,   128,   120,   121,   353,   122,   123,   124,     0,     0,
     115,     0,     0,   116,     0,     0,   115,   117,   118,   116,
     126,     0,     0,   117,   118,     0,     0,   119,   127,   128,
     368,   120,   121,   119,   122,   123,   124,   120,   121,     0,
     122,   123,   124,     0,   115,     0,     0,   116,     0,   126,
       0,   117,   118,     0,     0,   126,     0,   127,   128,     0,
       0,   119,     0,   127,   128,   221,   121,     0,   122,   123,
     124,     0,     0,     0,   203,   204,   205,   206,     0,     0,
       0,     0,   207,   126,   208,   209,   210,   211,   212,   213,
       0,   127,   128,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,     0,     0,     0,   214,   223,   208,
     209,   210,   211,   212,   213,   203,   204,   205,   206,     0,
       0,     0,     0,     0,   243,   208,   209,   210,   211,   212,
     213,     0,   214,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,     0,     0,     0,     0,   214,   283,
     208,   209,   210,   211,   212,   213,   203,   204,   205,   206,
       0,     0,     0,     0,     0,   301,   208,   209,   210,   211,
     212,   213,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   203,   204,   205,   206,     0,     0,     0,     0,   214,
     344,   208,   209,   210,   211,   212,   213,   203,   204,   205,
     206,     0,     0,     0,     0,     0,   370,   208,   209,   210,
     211,   212,   213,     0,   214,     0,     0,     0,     0,     0,
       0,   203,   204,   205,   206,     0,     0,     0,     0,     0,
     214,   208,   209,   210,   211,   212,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   214
};

static const yytype_int16 yycheck[] =
{
      11,   109,   180,   121,   101,   131,   124,   144,    78,     5,
      88,     5,    21,   196,    23,     5,    35,    15,    35,    35,
      57,    14,    59,    34,   121,    14,    57,   124,    15,     5,
      33,     5,    14,    36,   131,    44,    46,    35,    69,    58,
     166,    58,    58,   169,     5,    15,    57,   116,    35,     3,
       4,     5,    42,    64,     8,    34,   125,    53,    69,    53,
      36,    37,    73,   141,   247,   162,    59,    78,    57,   166,
      59,    60,   169,   143,   171,    49,     5,    88,    60,   148,
      56,     5,   151,    94,    38,     5,   155,    57,     5,   100,
     159,    45,     0,   104,   163,   164,   165,   280,    57,    53,
      59,    35,   113,    57,    58,   174,   284,    36,    37,    57,
      34,    33,    36,    37,    36,   298,    58,   300,    60,    36,
      37,     5,    57,     5,    58,    60,    48,    56,    35,   198,
     141,   142,   143,    58,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,     6,     7,     8,     9,
      34,    58,    36,    37,    36,    37,    16,    17,    18,    19,
      20,    21,     5,     3,     4,     5,    35,    50,     8,   180,
       6,     7,     8,     9,    56,     5,   245,    58,    59,    39,
      16,    17,    18,    19,    20,    21,    58,    59,    60,    58,
     308,   309,    15,    36,    37,     5,    35,    35,    38,     5,
     269,    61,    55,    39,    27,    45,   275,   276,   334,   335,
       5,   308,   309,    53,    55,   285,     5,    57,    58,    58,
      58,   232,    57,    35,    35,    61,   295,   296,    34,    55,
      36,    37,   369,   351,    58,    59,   362,   334,   335,    34,
      33,    36,    37,    36,     5,    29,    58,    58,    41,     6,
       7,    58,    59,    33,   351,    48,    33,   365,    55,     8,
       9,   330,    46,    20,    48,   362,     5,    16,    17,    18,
      19,    20,    21,   284,   285,    57,    60,    59,    60,    34,
       3,   350,     6,     7,     8,     9,     3,     4,     5,   358,
      39,     8,    16,    17,    18,    19,    20,    21,     6,     7,
       8,     9,    16,    17,    18,    19,    20,    21,    16,    17,
      18,    19,    20,    21,    10,    39,    15,    33,     5,    55,
      61,    38,     3,     4,     5,    56,    15,     8,    45,    57,
      57,    39,     6,     7,     8,     9,    53,    61,    57,    57,
      57,    58,    16,    17,    18,    19,    20,    21,     6,     7,
       8,     9,    15,    61,    57,    57,    11,    38,    16,    17,
      18,    19,    20,    21,    45,    39,     3,     4,     5,    59,
       5,     8,    53,     5,     5,    59,    57,    58,     5,    59,
       5,    39,     5,     3,     4,     5,     5,    61,     8,    11,
      56,    15,     3,     4,     5,    57,    57,     8,    57,     5,
      57,    38,     5,    61,    57,    59,    57,    57,    45,    16,
      17,    18,    19,    20,    21,    58,    53,    57,    38,    15,
      57,    58,     5,     5,    58,    45,    15,    38,    58,    57,
      15,     5,    43,    53,    45,     5,    47,    57,    58,    15,
      51,    27,    53,     6,     7,     8,    57,    15,    23,     3,
       4,     5,     5,    15,     8,    15,    15,    20,    21,    58,
      23,    58,    60,     3,     4,     5,    29,    15,     8,    15,
      15,    59,    15,    15,    15,    55,    15,    15,    15,    14,
      58,    44,    15,    46,    38,    48,    15,    15,    15,    43,
      15,    45,    56,    14,     6,    17,   104,    60,    38,    53,
     232,    94,    34,    57,    81,    45,    -1,    -1,     6,     7,
       8,     9,   113,    53,   131,    -1,    -1,    57,    16,    17,
      18,    19,    20,    21,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    39,    -1,    -1,
      58,    16,    17,    18,    19,    20,    21,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    58,    16,    17,    18,
      19,    20,    21,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      39,    -1,    -1,    58,    16,    17,    18,    19,    20,    21,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    58,
      16,    17,    18,    19,    20,    21,    -1,    39,     5,    -1,
      -1,     8,    -1,    -1,     5,    12,    13,     8,    -1,    -1,
      -1,    12,    13,    39,    -1,    22,    58,    24,    25,    26,
      27,    22,    29,    30,    31,    26,    27,    -1,    29,    30,
      31,    -1,    58,     5,    -1,    -1,     8,    44,    -1,    40,
      12,    13,    -1,    44,    -1,    52,    53,    -1,    -1,    -1,
      22,    52,    53,    -1,    26,    27,    -1,    29,    30,    31,
      32,     5,    -1,    -1,     8,    -1,    -1,    -1,    12,    13,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      52,    53,    26,    27,    28,    29,    30,    31,    -1,    -1,
       5,    -1,    -1,     8,    -1,    -1,     5,    12,    13,     8,
      44,    -1,    -1,    12,    13,    -1,    -1,    22,    52,    53,
      25,    26,    27,    22,    29,    30,    31,    26,    27,    -1,
      29,    30,    31,    -1,     5,    -1,    -1,     8,    -1,    44,
      -1,    12,    13,    -1,    -1,    44,    -1,    52,    53,    -1,
      -1,    22,    -1,    52,    53,    26,    27,    -1,    29,    30,
      31,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    44,    16,    17,    18,    19,    20,    21,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    39,    15,    16,
      17,    18,    19,    20,    21,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    39,    15,
      16,    17,    18,    19,    20,    21,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    39,
      15,    16,    17,    18,    19,    20,    21,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      39,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    36,    41,    48,    63,    64,    68,    85,   105,
      34,    86,    46,     5,    65,    66,     5,    69,    70,     0,
      68,    85,   105,    85,   105,     5,    36,    37,    84,    92,
      93,   105,    36,    84,    87,    88,    57,    67,    42,    66,
      50,    71,    49,    70,    85,   105,    92,   105,    92,   105,
       5,    93,   105,    89,    34,    88,    58,    55,     5,    55,
      92,   105,   105,   105,    57,     5,    90,    91,    55,    81,
      82,    84,    73,    33,   105,    84,    94,    95,    57,    60,
      15,    35,    33,    96,    56,    82,     5,    55,    75,    76,
      77,    82,    84,     5,    35,    58,    94,     3,    91,    34,
      97,    10,   103,    15,    33,    34,    76,     5,    95,    55,
      58,    61,    84,    98,    99,     5,     8,    12,    13,    22,
      26,    27,    29,    30,    31,    40,    44,    52,    53,    83,
     102,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      56,    75,    72,    57,    96,   100,    34,    99,    14,    57,
      59,    60,     3,     4,     5,     8,    38,    45,    53,    57,
      83,   115,    57,    57,    57,    57,   106,    15,    15,   106,
     115,    57,    57,    59,    14,    59,    11,   102,   107,    34,
      78,    79,    84,    94,   103,     5,   101,    43,    47,    51,
     115,    58,   104,   115,     5,   115,    57,    59,    60,   115,
       5,    59,   115,     6,     7,     8,     9,    14,    16,    17,
      18,    19,    20,    21,    39,     5,    53,    83,   115,   115,
     115,    26,    32,    15,     5,    83,     5,     5,    43,   115,
       5,    11,    74,    56,    79,     5,    58,    56,    15,    35,
      57,    57,    57,    15,    15,    35,    58,    57,    61,    58,
     104,     5,   115,     5,    58,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,    58,    59,    60,
      59,    58,    58,    58,    58,    57,    57,    58,    58,    58,
      57,    59,    57,    15,    78,    57,    15,     5,    58,    58,
       5,   115,    15,    58,   104,    14,    60,    58,    57,    61,
      57,    15,    15,     5,   115,     5,    15,    15,    23,    27,
     115,   115,    15,    15,    15,    58,   104,     5,    58,    56,
      94,    15,    15,    58,    15,    58,   115,   115,    58,   104,
      60,    58,   104,    61,   106,   106,    58,    58,    15,    58,
      15,    58,    15,    15,    15,    61,    58,   115,    58,    58,
      60,    24,    25,    28,    15,    15,    15,    80,    14,    61,
      15,   115,   106,    15,    15,    55,   115,    61,    25,    96,
      15,    58,    15,   103,    15,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    67,    66,
      68,    68,    69,    69,    71,    72,    70,    73,    74,    70,
      75,    75,    76,    76,    77,    78,    78,    78,    80,    79,
      81,    81,    82,    83,    83,    83,    83,    84,    84,    84,
      86,    85,    85,    85,    87,    87,    89,    88,    90,    90,
      91,    91,    91,    92,    92,    93,    94,    94,    94,    95,
      97,    96,    96,    96,    98,    98,   100,    99,   101,   101,
     102,   103,   103,   104,   104,   105,   106,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   108,   108,   108,   109,   110,   110,   110,   110,
     110,   111,   111,   112,   113,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115
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
       7,     5,     8,    11,     5,     5,     4,     7,    10,     5,
       4,    10,     8,     8,     7,     7,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     4,     7,     2,     2,     3,     4,     1,     1,     5,
       6,     5,     6
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
#line 1717 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock ClassDefBlock GDeclBlock MainBlock  */
#line 55 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1723 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock ClassDefBlock MainBlock  */
#line 57 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1729 "y.tab.c"
    break;

  case 5: /* program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 59 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1735 "y.tab.c"
    break;

  case 6: /* program: TypeDefBlock GDeclBlock MainBlock  */
#line 61 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1741 "y.tab.c"
    break;

  case 7: /* program: TypeDefBlock MainBlock  */
#line 63 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1747 "y.tab.c"
    break;

  case 8: /* program: ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 65 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1753 "y.tab.c"
    break;

  case 9: /* program: ClassDefBlock GDeclBlock MainBlock  */
#line 67 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1759 "y.tab.c"
    break;

  case 10: /* program: ClassDefBlock MainBlock  */
#line 69 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1765 "y.tab.c"
    break;

  case 11: /* program: GDeclBlock FDefBlock MainBlock  */
#line 71 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1771 "y.tab.c"
    break;

  case 12: /* program: GDeclBlock MainBlock  */
#line 73 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1777 "y.tab.c"
    break;

  case 13: /* program: MainBlock  */
#line 75 "control.y"
        { ASTRoot = (yyvsp[0].no); }
#line 1783 "y.tab.c"
    break;

  case 14: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 78 "control.y"
                                        { (yyval.no) = (yyvsp[-1].no); }
#line 1789 "y.tab.c"
    break;

  case 15: /* TypeDefBlock: %empty  */
#line 79 "control.y"
                                        { (yyval.no) = NULL; }
#line 1795 "y.tab.c"
    break;

  case 16: /* TypeDefList: TypeDefList TypeDef  */
#line 82 "control.y"
                                  { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1801 "y.tab.c"
    break;

  case 17: /* TypeDefList: TypeDef  */
#line 83 "control.y"
                                  { (yyval.no) = (yyvsp[0].no); }
#line 1807 "y.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 86 "control.y"
             {TInstallEmpty((yyvsp[0].str));}
#line 1813 "y.tab.c"
    break;

  case 19: /* TypeDef: ID $@1 '{' FieldDeclList '}'  */
#line 86 "control.y"
                                                        {
            (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-4].str)), (yyvsp[-1].no));
            TSetFields((yyvsp[-4].str), buildFieldList((yyvsp[-1].no)));
          }
#line 1822 "y.tab.c"
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
#line 1834 "y.tab.c"
    break;

  case 21: /* ClassDefBlock: %empty  */
#line 101 "control.y"
       { (yyval.no) = NULL; }
#line 1840 "y.tab.c"
    break;

  case 22: /* ClassDefList: ClassDefList ClassDef  */
#line 105 "control.y"
                            { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1846 "y.tab.c"
    break;

  case 23: /* ClassDefList: ClassDef  */
#line 106 "control.y"
                            { (yyval.no) = (yyvsp[0].no); }
#line 1852 "y.tab.c"
    break;

  case 24: /* $@2: %empty  */
#line 111 "control.y"
      {
          current_class = CInstall((yyvsp[0].str), NULL);
      }
#line 1860 "y.tab.c"
    break;

  case 25: /* $@3: %empty  */
#line 115 "control.y"
      {
          CSetFields(current_class->name, buildFieldList((yyvsp[-1].no)));
      }
#line 1868 "y.tab.c"
    break;

  case 26: /* ClassDef: ID $@2 '{' DECL ClassDeclList ENDDECL $@3 ClassMethodDefList '}'  */
#line 119 "control.y"
      {
          (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-8].str)),
                               makeConnectNode((yyvsp[-4].no), (yyvsp[-1].no)));
          current_class = NULL;
      }
#line 1878 "y.tab.c"
    break;

  case 27: /* $@4: %empty  */
#line 126 "control.y"
    {
        current_class = CInstall((yyvsp[-2].str), (yyvsp[0].str));
    }
#line 1886 "y.tab.c"
    break;

  case 28: /* $@5: %empty  */
#line 130 "control.y"
    {
        CSetFields(current_class->name, buildFieldList((yyvsp[-1].no)));
    }
#line 1894 "y.tab.c"
    break;

  case 29: /* ClassDef: ID EXTENDS ID $@4 '{' DECL ClassDeclList ENDDECL $@5 ClassMethodDefList '}'  */
#line 134 "control.y"
    {
        (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-10].str)),
                            makeConnectNode((yyvsp[-4].no), (yyvsp[-1].no)));
        current_class = NULL;
    }
#line 1904 "y.tab.c"
    break;

  case 30: /* ClassDeclList: ClassDeclList ClassDeclItem  */
#line 142 "control.y"
                                  { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1910 "y.tab.c"
    break;

  case 31: /* ClassDeclList: ClassDeclItem  */
#line 143 "control.y"
                                  { (yyval.no) = (yyvsp[0].no); }
#line 1916 "y.tab.c"
    break;

  case 32: /* ClassDeclItem: FieldDecl  */
#line 147 "control.y"
                       { (yyval.no) = (yyvsp[0].no); }
#line 1922 "y.tab.c"
    break;

  case 33: /* ClassDeclItem: ClassMethodDecl  */
#line 148 "control.y"
                       { (yyval.no) = (yyvsp[0].no); }
#line 1928 "y.tab.c"
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
      }
#line 1941 "y.tab.c"
    break;

  case 35: /* ClassMethodDefList: ClassMethodDefList ClassMethodDef  */
#line 164 "control.y"
                                        { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1947 "y.tab.c"
    break;

  case 36: /* ClassMethodDefList: ClassMethodDef  */
#line 165 "control.y"
                                        { (yyval.no) = (yyvsp[0].no); }
#line 1953 "y.tab.c"
    break;

  case 37: /* ClassMethodDefList: %empty  */
#line 166 "control.y"
                                        { (yyval.no) = NULL; }
#line 1959 "y.tab.c"
    break;

  case 38: /* $@6: %empty  */
#line 171 "control.y"
      {
          extern int inParamList;
          inParamList = 0;
      }
#line 1968 "y.tab.c"
    break;

  case 39: /* ClassMethodDef: TypeName ID '(' ParamList ')' $@6 '{' LdeclBlock Body '}'  */
#line 176 "control.y"
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
#line 1998 "y.tab.c"
    break;

  case 40: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 203 "control.y"
                                        { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 2004 "y.tab.c"
    break;

  case 41: /* FieldDeclList: FieldDecl  */
#line 204 "control.y"
                                        { (yyval.no) = (yyvsp[0].no); }
#line 2010 "y.tab.c"
    break;

  case 42: /* FieldDecl: TypeName ID SEMICOLON  */
#line 207 "control.y"
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
              }
            }
#line 2033 "y.tab.c"
    break;

  case 43: /* Field: ID '.' ID  */
#line 227 "control.y"
                  {
          (yyval.no) = makeFieldAccessNode(makeVariableUseNode((yyvsp[-2].str)), (yyvsp[0].str));
        }
#line 2041 "y.tab.c"
    break;

  case 44: /* Field: Field '.' ID  */
#line 230 "control.y"
                   {
          (yyval.no) = makeFieldAccessNode((yyvsp[-2].no), (yyvsp[0].str));
        }
#line 2049 "y.tab.c"
    break;

  case 45: /* Field: SELF '.' ID  */
#line 234 "control.y"
      { (yyval.no) = makeSelfFieldNode((yyvsp[0].str)); }
#line 2055 "y.tab.c"
    break;

  case 46: /* Field: SELF '.' ID '.' ID  */
#line 236 "control.y"
      { (yyval.no) = makeFieldAccessNode(makeSelfFieldNode((yyvsp[-2].str)), (yyvsp[0].str)); }
#line 2061 "y.tab.c"
    break;

  case 47: /* TypeName: INT  */
#line 240 "control.y"
          { (yyval.no) = makeTypeNode(0); }
#line 2067 "y.tab.c"
    break;

  case 48: /* TypeName: STR  */
#line 241 "control.y"
          { (yyval.no) = makeTypeNode(2); }
#line 2073 "y.tab.c"
    break;

  case 49: /* TypeName: ID  */
#line 242 "control.y"
          {
              (yyval.no) = makeTypeNode(0);
              (yyval.no)->typeEntry = TLookup((yyvsp[0].str));
              (yyval.no)->varname   = strdup((yyvsp[0].str));
              /* no error here — GDecl will check for class */
          }
#line 2084 "y.tab.c"
    break;

  case 50: /* $@7: %empty  */
#line 250 "control.y"
                  {inLocalDecl = 0;}
#line 2090 "y.tab.c"
    break;

  case 51: /* GDeclBlock: DECL $@7 GdeclList ENDDECL  */
#line 250 "control.y"
                                                       {(yyval.no) = (yyvsp[-1].no); print((yyval.no));}
#line 2096 "y.tab.c"
    break;

  case 52: /* GDeclBlock: DECL ENDDECL  */
#line 251 "control.y"
                       {(yyval.no) = NULL;}
#line 2102 "y.tab.c"
    break;

  case 53: /* GDeclBlock: %empty  */
#line 252 "control.y"
          {(yyval.no) = NULL;}
#line 2108 "y.tab.c"
    break;

  case 54: /* GdeclList: GdeclList GDecl  */
#line 255 "control.y"
                             {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2114 "y.tab.c"
    break;

  case 55: /* GdeclList: GDecl  */
#line 256 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 2120 "y.tab.c"
    break;

  case 56: /* $@8: %empty  */
#line 261 "control.y"
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
#line 2139 "y.tab.c"
    break;

  case 57: /* GDecl: TypeName $@8 GidList SEMICOLON  */
#line 276 "control.y"
      {
          if (current_class != NULL) {
              (yyval.no) = makeClassDeclNode((yyvsp[-1].no), current_class);
              current_class = NULL;
          } else {
              (yyval.no) = makeDeclNode((yyvsp[-3].no), (yyvsp[-1].no));
          }
      }
#line 2152 "y.tab.c"
    break;

  case 58: /* GidList: GidList COMMA Gid  */
#line 286 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 2158 "y.tab.c"
    break;

  case 59: /* GidList: Gid  */
#line 287 "control.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 2164 "y.tab.c"
    break;

  case 60: /* Gid: ID  */
#line 290 "control.y"
         {(yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 0;}
#line 2170 "y.tab.c"
    break;

  case 61: /* Gid: ID '[' NUM ']'  */
#line 291 "control.y"
                      {(yyval.no) = makeArrayNode(NULL,makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 2176 "y.tab.c"
    break;

  case 62: /* Gid: ID '(' ParamList ')'  */
#line 292 "control.y"
                           {(yyval.no) = makeFnDeclNode(makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no)); ClearLST();}
#line 2182 "y.tab.c"
    break;

  case 63: /* FDefBlock: FDefBlock Fdef  */
#line 294 "control.y"
                           {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2188 "y.tab.c"
    break;

  case 64: /* FDefBlock: Fdef  */
#line 295 "control.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 2194 "y.tab.c"
    break;

  case 65: /* Fdef: TypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 298 "control.y"
                                                         { (yyval.no) = makeFnDefNode((yyvsp[-8].no), makeVariableNode((yyvsp[-7].str)), (yyvsp[-5].no), (yyvsp[-2].no), (yyvsp[-1].no)); }
#line 2200 "y.tab.c"
    break;

  case 66: /* ParamList: ParamList COMMA Param  */
#line 301 "control.y"
                                  {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 2206 "y.tab.c"
    break;

  case 67: /* ParamList: Param  */
#line 302 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 2212 "y.tab.c"
    break;

  case 68: /* ParamList: %empty  */
#line 303 "control.y"
                        {(yyval.no) = NULL;}
#line 2218 "y.tab.c"
    break;

  case 69: /* Param: TypeName ID  */
#line 306 "control.y"
                    {(yyval.no) = makeParamNode((yyvsp[-1].no), makeVariableNode((yyvsp[0].str)));}
#line 2224 "y.tab.c"
    break;

  case 70: /* $@9: %empty  */
#line 309 "control.y"
                  {inLocalDecl = 1; inParamList = 0;}
#line 2230 "y.tab.c"
    break;

  case 71: /* LdeclBlock: DECL $@9 LDeclList ENDDECL  */
#line 309 "control.y"
                                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2236 "y.tab.c"
    break;

  case 72: /* LdeclBlock: DECL ENDDECL  */
#line 310 "control.y"
                       {(yyval.no) = NULL;}
#line 2242 "y.tab.c"
    break;

  case 73: /* LdeclBlock: %empty  */
#line 311 "control.y"
      {(yyval.no) = NULL;}
#line 2248 "y.tab.c"
    break;

  case 74: /* LDeclList: LDeclList LDecl  */
#line 314 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2254 "y.tab.c"
    break;

  case 75: /* LDeclList: LDecl  */
#line 315 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 2260 "y.tab.c"
    break;

  case 76: /* $@10: %empty  */
#line 318 "control.y"
                 {current_type = (yyvsp[0].no)->typeEntry;}
#line 2266 "y.tab.c"
    break;

  case 77: /* LDecl: TypeName $@10 IdList SEMICOLON  */
#line 318 "control.y"
                                                                  {(yyval.no) = makeDeclNode((yyvsp[-3].no),(yyvsp[-1].no));}
#line 2272 "y.tab.c"
    break;

  case 78: /* IdList: IdList COMMA ID  */
#line 321 "control.y"
                         {(yyval.no) = makeConnectNode((yyvsp[-2].no),makeVariableNode((yyvsp[0].str)));}
#line 2278 "y.tab.c"
    break;

  case 79: /* IdList: ID  */
#line 322 "control.y"
             {(yyval.no) = makeVariableNode((yyvsp[0].str));}
#line 2284 "y.tab.c"
    break;

  case 80: /* Retstmt: RETURNN expr SEMICOLON  */
#line 325 "control.y"
                                 { (yyval.no) = makeReturnNode((yyvsp[-1].no)); }
#line 2290 "y.tab.c"
    break;

  case 81: /* Body: BEGINN Slist Retstmt ENDD  */
#line 328 "control.y"
                                 { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[-1].no)); }
#line 2296 "y.tab.c"
    break;

  case 82: /* Body: BEGINN Retstmt ENDD  */
#line 329 "control.y"
                                 { (yyval.no) = (yyvsp[-1].no); }
#line 2302 "y.tab.c"
    break;

  case 83: /* ArgList: ArgList COMMA expr  */
#line 332 "control.y"
                             { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 2308 "y.tab.c"
    break;

  case 84: /* ArgList: expr  */
#line 333 "control.y"
               { (yyval.no) = (yyvsp[0].no); }
#line 2314 "y.tab.c"
    break;

  case 85: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 337 "control.y"
            {
                (yyval.no) = makeFnDefNode(makeTypeNode(0), makeVariableNode("main"), NULL, (yyvsp[-2].no), (yyvsp[-1].no));
            }
#line 2322 "y.tab.c"
    break;

  case 86: /* Slist: Slist Stmt  */
#line 342 "control.y"
                   {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2328 "y.tab.c"
    break;

  case 87: /* Slist: Stmt  */
#line 343 "control.y"
             {(yyval.no) = (yyvsp[0].no);}
#line 2334 "y.tab.c"
    break;

  case 88: /* Slist: %empty  */
#line 344 "control.y"
            {(yyval.no)=NULL;}
#line 2340 "y.tab.c"
    break;

  case 89: /* Stmt: InputStmt  */
#line 347 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 2346 "y.tab.c"
    break;

  case 90: /* Stmt: OutputStmt  */
#line 348 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 2352 "y.tab.c"
    break;

  case 91: /* Stmt: AsgStmt  */
#line 349 "control.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 2358 "y.tab.c"
    break;

  case 92: /* Stmt: IfStmt  */
#line 350 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 2364 "y.tab.c"
    break;

  case 93: /* Stmt: WhileStmt  */
#line 351 "control.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 2370 "y.tab.c"
    break;

  case 94: /* Stmt: BREAKK SEMICOLON  */
#line 352 "control.y"
                           {(yyval.no) = makeBreakNode();}
#line 2376 "y.tab.c"
    break;

  case 95: /* Stmt: CONTINUEE SEMICOLON  */
#line 353 "control.y"
                              {(yyval.no) = makeContinueNode();}
#line 2382 "y.tab.c"
    break;

  case 96: /* Stmt: DoWhileStmt  */
#line 354 "control.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 2388 "y.tab.c"
    break;

  case 97: /* Stmt: RepeatStmt  */
#line 355 "control.y"
                     {(yyval.no) = (yyvsp[0].no);}
#line 2394 "y.tab.c"
    break;

  case 98: /* Stmt: ID '(' ')' SEMICOLON  */
#line 357 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)), NULL); }
#line 2400 "y.tab.c"
    break;

  case 99: /* Stmt: ID '(' ArgList ')' SEMICOLON  */
#line 359 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-4].str)), (yyvsp[-2].no)); }
#line 2406 "y.tab.c"
    break;

  case 100: /* Stmt: ID ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 360 "control.y"
                                            { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-5].str)), makeAllocNode(NULL)); }
#line 2412 "y.tab.c"
    break;

  case 101: /* Stmt: Field ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 361 "control.y"
                                               { (yyval.no) = makeAssignNode((yyvsp[-5].no), makeAllocNode(NULL)); }
#line 2418 "y.tab.c"
    break;

  case 102: /* Stmt: FREE '(' ID ')' SEMICOLON  */
#line 362 "control.y"
                                    { (yyval.no) = makeFreeNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2424 "y.tab.c"
    break;

  case 103: /* Stmt: FREE '(' Field ')' SEMICOLON  */
#line 363 "control.y"
                                       { (yyval.no) = makeFreeNode((yyvsp[-2].no)); }
#line 2430 "y.tab.c"
    break;

  case 104: /* Stmt: ID ASSIGN INITIALIZE '(' ')' SEMICOLON  */
#line 365 "control.y"
    { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-5].str)), makeInitializeNode()); }
#line 2436 "y.tab.c"
    break;

  case 105: /* Stmt: ID ASSIGN NEW '(' ID ')' SEMICOLON  */
#line 367 "control.y"
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
#line 2457 "y.tab.c"
    break;

  case 106: /* Stmt: DELETE '(' ID ')' SEMICOLON  */
#line 384 "control.y"
        { (yyval.no) = makeDeleteNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2463 "y.tab.c"
    break;

  case 107: /* Stmt: SELF '.' ID '(' ')' SEMICOLON  */
#line 386 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-3].str), NULL); }
#line 2469 "y.tab.c"
    break;

  case 108: /* Stmt: SELF '.' ID '(' ArgList ')' SEMICOLON  */
#line 388 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-4].str), (yyvsp[-2].no)); }
#line 2475 "y.tab.c"
    break;

  case 109: /* Stmt: ID '.' ID '(' ')' SEMICOLON  */
#line 390 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-5].str)), (yyvsp[-3].str), NULL); }
#line 2481 "y.tab.c"
    break;

  case 110: /* Stmt: ID '.' ID '(' ArgList ')' SEMICOLON  */
#line 392 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].str), (yyvsp[-2].no)); }
#line 2487 "y.tab.c"
    break;

  case 111: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 395 "control.y"
                                   { (yyval.no) = makeReadNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2493 "y.tab.c"
    break;

  case 112: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 396 "control.y"
                                           { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-5].str)),(yyvsp[-3].no))); }
#line 2499 "y.tab.c"
    break;

  case 113: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 397 "control.y"
                                                     { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-8].str)),makeConnectNode((yyvsp[-6].no),(yyvsp[-3].no)))); }
#line 2505 "y.tab.c"
    break;

  case 114: /* InputStmt: READ '(' Field ')' SEMICOLON  */
#line 398 "control.y"
                                       { (yyval.no) = makeReadNode((yyvsp[-2].no)); }
#line 2511 "y.tab.c"
    break;

  case 115: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 401 "control.y"
                                       {(yyval.no) = makeWriteNode((yyvsp[-2].no));}
#line 2517 "y.tab.c"
    break;

  case 116: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 405 "control.y"
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
#line 2537 "y.tab.c"
    break;

  case 117: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 420 "control.y"
                                      { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].no)), (yyvsp[-1].no)); }
#line 2543 "y.tab.c"
    break;

  case 118: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 421 "control.y"
                                                { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-9].str)), makeConnectNode((yyvsp[-7].no),(yyvsp[-4].no))), (yyvsp[-1].no)); }
#line 2549 "y.tab.c"
    break;

  case 119: /* AsgStmt: MUL expr ASSIGN expr SEMICOLON  */
#line 422 "control.y"
                                 { (yyval.no) = makeAssignNode(makeDerefNode((yyvsp[-3].no)), (yyvsp[-1].no)); }
#line 2555 "y.tab.c"
    break;

  case 120: /* AsgStmt: Field ASSIGN expr SEMICOLON  */
#line 423 "control.y"
                              { (yyval.no) = makeAssignNode((yyvsp[-3].no), (yyvsp[-1].no)); }
#line 2561 "y.tab.c"
    break;

  case 121: /* IfStmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 426 "control.y"
                                                             {(yyval.no) = makeIfElseNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 2567 "y.tab.c"
    break;

  case 122: /* IfStmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 427 "control.y"
                                                   {(yyval.no) = makeIfNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2573 "y.tab.c"
    break;

  case 123: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 430 "control.y"
                                                         {(yyval.no) = makeWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2579 "y.tab.c"
    break;

  case 124: /* RepeatStmt: REPEATT Slist UNTILL '(' expr ')' SEMICOLON  */
#line 433 "control.y"
                                                            {(yyval.no)=makeRepeatNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2585 "y.tab.c"
    break;

  case 125: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 436 "control.y"
                                                        {(yyval.no)=makeDoWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2591 "y.tab.c"
    break;

  case 126: /* expr: expr PLUS expr  */
#line 439 "control.y"
                                        {(yyval.no) = makeOperatorNode('+',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2597 "y.tab.c"
    break;

  case 127: /* expr: expr MINUS expr  */
#line 440 "control.y"
                                        {(yyval.no) = makeOperatorNode('-',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2603 "y.tab.c"
    break;

  case 128: /* expr: expr MUL expr  */
#line 441 "control.y"
                                                {(yyval.no) = makeOperatorNode('*',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2609 "y.tab.c"
    break;

  case 129: /* expr: expr DIV expr  */
#line 442 "control.y"
                                                {(yyval.no) = makeOperatorNode('/',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2615 "y.tab.c"
    break;

  case 130: /* expr: expr MOD expr  */
#line 443 "control.y"
                                                {(yyval.no) = makeOperatorNode('%',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2621 "y.tab.c"
    break;

  case 131: /* expr: '(' expr ')'  */
#line 444 "control.y"
                                                {(yyval.no) = (yyvsp[-1].no);}
#line 2627 "y.tab.c"
    break;

  case 132: /* expr: NUM  */
#line 445 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2633 "y.tab.c"
    break;

  case 133: /* expr: ID  */
#line 446 "control.y"
                                                        {(yyval.no) = makeVariableUseNode((yyvsp[0].str));}
#line 2639 "y.tab.c"
    break;

  case 134: /* expr: STRINGG  */
#line 447 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2645 "y.tab.c"
    break;

  case 135: /* expr: expr LT expr  */
#line 448 "control.y"
                                                {(yyval.no) = makeCOperatorNode('<',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2651 "y.tab.c"
    break;

  case 136: /* expr: expr GT expr  */
#line 449 "control.y"
                                {(yyval.no) = makeCOperatorNode('>',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2657 "y.tab.c"
    break;

  case 137: /* expr: expr LE expr  */
#line 450 "control.y"
                                {(yyval.no) = makeCOperatorNode('L',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2663 "y.tab.c"
    break;

  case 138: /* expr: expr GE expr  */
#line 451 "control.y"
                                {(yyval.no) = makeCOperatorNode('G',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2669 "y.tab.c"
    break;

  case 139: /* expr: expr NE expr  */
#line 452 "control.y"
                                {(yyval.no) = makeCOperatorNode('N',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2675 "y.tab.c"
    break;

  case 140: /* expr: expr EQ expr  */
#line 453 "control.y"
                                {(yyval.no) = makeCOperatorNode('E',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2681 "y.tab.c"
    break;

  case 141: /* expr: ID '[' expr ']'  */
#line 454 "control.y"
                                                {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no));}
#line 2687 "y.tab.c"
    break;

  case 142: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 455 "control.y"
                                        {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no)));}
#line 2693 "y.tab.c"
    break;

  case 143: /* expr: AMPERSAND ID  */
#line 456 "control.y"
                                                {(yyval.no) = makeAddrNode((tnode*)makeVariableUseNode((yyvsp[0].str)));}
#line 2699 "y.tab.c"
    break;

  case 144: /* expr: MUL expr  */
#line 457 "control.y"
                                { (yyval.no) = makeDerefNode((yyvsp[0].no)); }
#line 2705 "y.tab.c"
    break;

  case 145: /* expr: ID '(' ')'  */
#line 458 "control.y"
                                                        {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-2].str)),NULL);}
#line 2711 "y.tab.c"
    break;

  case 146: /* expr: ID '(' ArgList ')'  */
#line 459 "control.y"
                                                {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 2717 "y.tab.c"
    break;

  case 147: /* expr: Field  */
#line 460 "control.y"
                  { (yyval.no) = (yyvsp[0].no); }
#line 2723 "y.tab.c"
    break;

  case 148: /* expr: NULLL  */
#line 461 "control.y"
                 { (yyval.no) = makeConstantNode(0); (yyval.no)->typeEntry = TLookup("null"); }
#line 2729 "y.tab.c"
    break;

  case 149: /* expr: SELF '.' ID '(' ')'  */
#line 463 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-2].str), NULL); }
#line 2735 "y.tab.c"
    break;

  case 150: /* expr: SELF '.' ID '(' ArgList ')'  */
#line 465 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-3].str), (yyvsp[-1].no)); }
#line 2741 "y.tab.c"
    break;

  case 151: /* expr: ID '.' ID '(' ')'  */
#line 467 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-4].str)), (yyvsp[-2].str), NULL); }
#line 2747 "y.tab.c"
    break;

  case 152: /* expr: ID '.' ID '(' ArgList ')'  */
#line 468 "control.y"
                                { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-5].str)), (yyvsp[-3].str), (yyvsp[-1].no));}
#line 2753 "y.tab.c"
    break;


#line 2757 "y.tab.c"

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

#line 472 "control.y"


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
