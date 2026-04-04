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
  YYSYMBOL_ClassDeclList = 73,             /* ClassDeclList  */
  YYSYMBOL_ClassDeclItem = 74,             /* ClassDeclItem  */
  YYSYMBOL_ClassMethodDecl = 75,           /* ClassMethodDecl  */
  YYSYMBOL_ClassMethodDefList = 76,        /* ClassMethodDefList  */
  YYSYMBOL_ClassMethodDef = 77,            /* ClassMethodDef  */
  YYSYMBOL_78_4 = 78,                      /* $@4  */
  YYSYMBOL_FieldDeclList = 79,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 80,                 /* FieldDecl  */
  YYSYMBOL_Field = 81,                     /* Field  */
  YYSYMBOL_TypeName = 82,                  /* TypeName  */
  YYSYMBOL_GDeclBlock = 83,                /* GDeclBlock  */
  YYSYMBOL_84_5 = 84,                      /* $@5  */
  YYSYMBOL_GdeclList = 85,                 /* GdeclList  */
  YYSYMBOL_GDecl = 86,                     /* GDecl  */
  YYSYMBOL_87_6 = 87,                      /* $@6  */
  YYSYMBOL_GidList = 88,                   /* GidList  */
  YYSYMBOL_Gid = 89,                       /* Gid  */
  YYSYMBOL_FDefBlock = 90,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 91,                      /* Fdef  */
  YYSYMBOL_ParamList = 92,                 /* ParamList  */
  YYSYMBOL_Param = 93,                     /* Param  */
  YYSYMBOL_LdeclBlock = 94,                /* LdeclBlock  */
  YYSYMBOL_95_7 = 95,                      /* $@7  */
  YYSYMBOL_LDeclList = 96,                 /* LDeclList  */
  YYSYMBOL_LDecl = 97,                     /* LDecl  */
  YYSYMBOL_98_8 = 98,                      /* $@8  */
  YYSYMBOL_IdList = 99,                    /* IdList  */
  YYSYMBOL_Retstmt = 100,                  /* Retstmt  */
  YYSYMBOL_Body = 101,                     /* Body  */
  YYSYMBOL_ArgList = 102,                  /* ArgList  */
  YYSYMBOL_MainBlock = 103,                /* MainBlock  */
  YYSYMBOL_Slist = 104,                    /* Slist  */
  YYSYMBOL_Stmt = 105,                     /* Stmt  */
  YYSYMBOL_InputStmt = 106,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 107,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 108,                  /* AsgStmt  */
  YYSYMBOL_IfStmt = 109,                   /* IfStmt  */
  YYSYMBOL_WhileStmt = 110,                /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 111,               /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 112,              /* DoWhileStmt  */
  YYSYMBOL_expr = 113                      /* expr  */
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
#define YYLAST   949

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  366

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
      93,    94,    98,    99,   104,   108,   103,   120,   121,   125,
     126,   130,   142,   143,   144,   149,   148,   181,   182,   185,
     205,   208,   211,   213,   218,   219,   220,   228,   228,   229,
     230,   233,   234,   239,   238,   264,   265,   268,   269,   270,
     272,   273,   276,   279,   280,   281,   284,   287,   287,   288,
     289,   292,   293,   296,   296,   299,   300,   303,   306,   307,
     310,   311,   314,   320,   321,   322,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   336,   338,   339,   340,
     341,   342,   344,   346,   348,   350,   352,   354,   358,   359,
     360,   361,   364,   367,   368,   369,   370,   371,   374,   375,
     378,   381,   384,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   412,   414,   416
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
  "$@1", "ClassDefBlock", "ClassDefList", "ClassDef", "$@2", "$@3",
  "ClassDeclList", "ClassDeclItem", "ClassMethodDecl",
  "ClassMethodDefList", "ClassMethodDef", "$@4", "FieldDeclList",
  "FieldDecl", "Field", "TypeName", "GDeclBlock", "$@5", "GdeclList",
  "GDecl", "$@6", "GidList", "Gid", "FDefBlock", "Fdef", "ParamList",
  "Param", "LdeclBlock", "$@7", "LDeclList", "LDecl", "$@8", "IdList",
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

#define YYPACT_NINF (-180)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     190,   -18,   -24,    76,    82,    94,   149,   112,    67,  -180,
    -180,   166,    49,  -180,     6,  -180,  -180,    28,  -180,  -180,
     112,    67,  -180,    67,  -180,  -180,   -24,  -180,   106,    67,
    -180,  -180,  -180,  -180,   113,  -180,   100,   109,  -180,  -180,
     118,  -180,  -180,    67,  -180,    67,  -180,    67,  -180,   127,
    -180,  -180,   211,  -180,  -180,   136,   166,   189,    67,  -180,
    -180,  -180,   166,   167,    80,  -180,   199,    13,  -180,   232,
     166,  -180,   237,   -16,  -180,   166,   245,  -180,   211,   221,
     248,  -180,  -180,   247,   123,  -180,  -180,  -180,   267,  -180,
     166,   251,    61,   256,  -180,  -180,   166,   637,   226,  -180,
    -180,  -180,    26,  -180,   199,  -180,  -180,  -180,   156,  -180,
      57,   418,   255,   261,   262,   264,   706,   293,   307,   706,
     418,   273,   274,   281,    15,   339,   637,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,   166,   166,   248,   348,
    -180,  -180,   400,   206,   349,   418,  -180,  -180,   158,   418,
     350,  -180,   297,   418,   299,   763,     2,   418,   418,   418,
     734,  -180,  -180,   643,   788,    10,   355,   356,     9,   357,
    -180,   358,  -180,    52,  -180,   363,    63,   315,  -180,   148,
     316,   317,   320,   804,   360,    64,   910,   321,    19,   275,
     367,   418,  -180,  -180,   375,   460,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   181,   322,
     191,   476,   503,   519,   327,   328,  -180,   202,   257,   329,
     -25,   331,   829,  -180,  -180,  -180,  -180,   333,   371,  -180,
    -180,   387,   335,   336,   393,  -180,  -180,   418,   384,   306,
      16,  -180,    88,   352,   135,   186,  -180,   416,   416,   250,
     250,   845,   278,   278,   278,   278,   278,   278,   250,   391,
     405,   418,   406,   397,   398,   394,   389,   418,   418,   399,
     403,   412,   338,   423,   372,  -180,   166,  -180,  -180,   414,
     424,   373,   910,  -180,   425,   130,   418,   418,  -180,   344,
     381,   362,  -180,  -180,  -180,   160,   383,  -180,  -180,   706,
     706,   546,   562,  -180,  -180,  -180,   429,   137,  -180,   431,
     140,  -180,  -180,   433,  -180,   434,   870,   268,  -180,   154,
     418,  -180,   178,   196,   609,   671,    -7,   435,  -180,   437,
    -180,  -180,  -180,  -180,  -180,   440,  -180,   284,  -180,   443,
     418,   706,   444,   445,  -180,  -180,  -180,   407,   418,  -180,
    -180,   318,   700,  -180,  -180,   199,   886,   415,   446,   248,
    -180,   449,  -180,   409,  -180,  -180
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      15,    47,     0,     0,     0,     0,    21,    50,     0,    13,
      49,     0,     0,    18,     0,    17,    24,     0,    23,     1,
      50,     0,     7,     0,    10,    46,    44,    45,     0,     0,
      61,    12,    44,    53,     0,    52,     0,     0,    14,    16,
       0,    20,    22,     0,     4,     0,     6,     0,     9,     0,
      60,    11,     0,    48,    51,     0,     0,     0,     0,     3,
       5,     8,    65,    57,     0,    56,    70,     0,    38,     0,
       0,     2,     0,     0,    64,    65,     0,    54,     0,    67,
       0,    19,    37,     0,     0,    28,    30,    29,     0,    66,
       0,     0,     0,     0,    55,    69,     0,     0,     0,    39,
      25,    27,     0,    63,    70,    59,    58,    73,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,    84,    86,    87,
      88,    89,    90,    94,    93,    82,    34,    65,     0,     0,
      68,    71,     0,     0,     0,     0,   129,   131,   130,     0,
       0,   145,     0,     0,   144,     0,     0,     0,     0,     0,
       0,    91,    92,     0,     0,     0,     0,     0,     0,     0,
      79,     0,    83,     0,    33,     0,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,    81,    40,     0,     0,
       0,     0,   141,   140,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
      42,     0,     0,    41,    78,    26,    32,     0,     0,    62,
      74,     0,     0,     0,     0,   113,    95,     0,     0,     0,
       0,   142,     0,    40,     0,    42,   128,   123,   124,   125,
     126,     0,   132,   133,   134,   135,   136,   137,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,    65,    31,    75,     0,
       0,     0,    80,    96,     0,     0,     0,     0,   143,     0,
     138,     0,   116,   108,    40,     0,    42,   111,   112,    85,
      85,     0,     0,    99,   100,   103,     0,     0,    43,     0,
       0,    97,   101,     0,   106,     0,     0,     0,   148,     0,
       0,   146,     0,     0,     0,     0,     0,     0,   104,     0,
      98,    35,   102,   107,   114,     0,   149,     0,   147,     0,
       0,    85,     0,     0,   122,   121,   105,     0,     0,   139,
     109,     0,     0,   119,   120,    70,     0,     0,     0,     0,
     115,     0,   118,     0,   110,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,  -180,   456,  -180,   466,  -180,   457,  -180,
    -180,  -180,   402,  -180,  -180,   314,  -180,  -180,    53,   -95,
     -11,   227,  -180,  -180,   454,  -180,  -180,   411,    84,    55,
     -70,   401,  -103,  -180,  -180,   382,  -180,  -180,   374,  -134,
    -179,   566,  -113,  -117,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,   -67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    14,    15,    37,     7,    17,    18,    40,
     136,    84,    85,    86,   173,   174,   347,    67,    87,   154,
      28,     8,    11,    34,    35,    52,    64,    65,    29,    30,
      73,    74,    80,    96,   108,   109,   139,   179,   125,    98,
     185,     9,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   186
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   138,   124,   160,   177,    92,   163,   208,   344,   172,
     242,    13,   146,   147,   148,   217,    10,   149,    25,    90,
     300,   124,    12,    33,   124,   196,   197,   198,   199,   168,
     286,   124,   272,    16,   273,   201,   202,   203,   204,   205,
     206,    99,    91,   172,   155,    69,   172,   150,    38,    32,
      27,    72,   221,   164,   151,   209,    69,    25,   207,    88,
     285,   210,   152,   209,    72,   124,   153,   176,   124,    81,
     218,   142,    25,    88,   169,   183,   287,    41,   188,    72,
     240,    13,   192,   137,    50,   107,   195,    16,    32,    27,
     211,   212,   213,   307,    19,    77,    90,   107,    90,   237,
      50,   222,    50,    26,    27,    45,    36,    47,   225,    68,
     319,    49,   322,    50,   143,    78,   144,   145,    25,   105,
      82,   228,   238,   237,   244,   175,    72,    58,    25,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   196,   197,   198,   199,     1,   288,    53,     2,    32,
      27,   201,   202,   203,   204,   205,   206,   100,    55,    32,
      27,    25,   175,   230,    56,   237,   196,   197,   198,   199,
     282,    25,   237,    57,   207,    90,   201,   202,   203,   204,
     205,   206,     1,   231,    62,     2,   324,   325,   315,   237,
     140,    66,    32,    27,   295,   329,   290,     4,   331,   207,
     301,   302,    32,    27,   124,   124,   310,   172,   172,   146,
     147,   148,   336,   237,   149,   189,    63,   190,   191,   316,
     317,   323,    70,     1,    75,   363,     2,    76,   352,   124,
     124,     3,    79,    21,    23,   172,   338,    83,     4,   259,
     260,   261,    89,   291,   150,   273,   124,    43,    93,   263,
     169,   151,   359,   337,   339,    95,   340,   124,    97,   152,
     269,   260,    99,   153,   184,    72,   201,   202,   203,   204,
     205,   206,   102,   351,   196,   197,   198,   199,   146,   147,
     148,   356,   135,   149,   201,   202,   203,   204,   205,   206,
     196,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   202,   203,   204,   205,   206,   104,   207,   161,   146,
     147,   148,   156,   150,   149,   270,   169,   106,   157,   158,
     151,   159,   162,   207,   196,   197,   198,   199,   152,   335,
     165,   166,   153,   241,   201,   202,   203,   204,   205,   206,
     167,   146,   147,   148,   150,   349,   149,   146,   147,   148,
     170,   151,   149,   178,   187,   193,   194,   207,   169,   152,
     219,   220,   223,   153,   284,   146,   147,   148,   227,   224,
     149,   229,   243,   232,   233,   236,   150,   234,   239,   357,
     245,   262,   150,   151,   267,   268,   277,   271,   274,   151,
     276,   152,   278,   279,   280,   153,   306,   152,   281,   283,
     150,   153,   318,   146,   147,   148,   293,   151,   149,   289,
     294,   296,   297,   298,   303,   152,   300,   299,   304,   153,
     321,   146,   147,   148,   198,   199,   149,   305,   308,   311,
     309,   313,   201,   202,   203,   204,   205,   206,   150,   312,
     314,   320,   273,   180,   328,   151,   330,   181,   332,   333,
     345,   182,   346,   152,   348,   207,   150,   153,   350,   353,
     354,   362,   355,   151,   364,   365,   196,   197,   198,   199,
      39,   152,    20,   361,    42,   153,   201,   202,   203,   204,
     205,   206,   196,   197,   198,   199,   101,   226,    54,    94,
     141,   103,   201,   202,   203,   204,   205,   206,     0,   207,
     171,     0,     0,     0,     0,     0,     0,     0,     0,   196,
     197,   198,   199,     0,     0,   207,     0,     0,   246,   201,
     202,   203,   204,   205,   206,   196,   197,   198,   199,     0,
       0,     0,     0,     0,   264,   201,   202,   203,   204,   205,
     206,     0,   207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   196,   197,   198,   199,     0,     0,   207,     0,
       0,   265,   201,   202,   203,   204,   205,   206,   196,   197,
     198,   199,    22,    24,    31,     0,     0,   266,   201,   202,
     203,   204,   205,   206,     0,   207,    44,    46,     0,    48,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,   207,     0,     0,   326,     0,     0,     0,     0,    59,
       0,    60,     0,    61,   110,     0,     0,   111,     0,     0,
     327,   112,   113,     0,    71,     0,     0,     0,     0,     0,
       0,   114,     0,   341,   342,   115,   116,     0,   117,   118,
     119,     0,   110,     0,     0,   111,     0,     0,   110,   112,
     113,   111,     0,   121,     0,   112,   113,     0,     0,   114,
       0,   122,   123,   115,   116,   114,   117,   118,   119,   115,
     116,     0,   117,   118,   119,   215,   110,   120,     0,   111,
       0,   121,     0,   112,   113,     0,     0,   121,     0,   122,
     123,     0,     0,   114,     0,   122,   123,   115,   116,   343,
     117,   118,   119,     0,     0,   110,     0,     0,   111,     0,
       0,   110,   112,   113,   111,   121,     0,     0,   112,   113,
       0,     0,   114,   122,   123,   358,   115,   116,   114,   117,
     118,   119,   115,   116,     0,   117,   118,   119,     0,   110,
       0,     0,   111,     0,   121,     0,   112,   113,     0,     0,
     121,     0,   122,   123,     0,     0,   114,     0,   122,   123,
     214,   116,     0,   117,   118,   119,     0,     0,     0,   196,
     197,   198,   199,     0,     0,     0,     0,   200,   121,   201,
     202,   203,   204,   205,   206,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   196,   197,   198,   199,     0,     0,
       0,     0,   207,   216,   201,   202,   203,   204,   205,   206,
     196,   197,   198,   199,     0,     0,     0,     0,     0,   235,
     201,   202,   203,   204,   205,   206,     0,   207,     0,     0,
       0,     0,     0,     0,     0,   196,   197,   198,   199,     0,
       0,     0,     0,   207,   275,   201,   202,   203,   204,   205,
     206,   196,   197,   198,   199,     0,     0,     0,     0,     0,
     292,   201,   202,   203,   204,   205,   206,     0,   207,     0,
       0,     0,     0,     0,     0,     0,   196,   197,   198,   199,
       0,     0,     0,     0,   207,   334,   201,   202,   203,   204,
     205,   206,   196,   197,   198,   199,     0,     0,     0,     0,
       0,   360,   201,   202,   203,   204,   205,   206,     0,   207,
       0,     0,     0,     0,     0,     0,   196,   197,   198,   199,
       0,     0,     0,     0,     0,   207,   201,   202,   203,   204,
     205,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207
};

static const yytype_int16 yycheck[] =
{
      11,   104,    97,   116,   138,    75,   119,     5,    15,   126,
     189,     5,     3,     4,     5,     5,    34,     8,     5,    35,
      27,   116,    46,    34,   119,     6,     7,     8,     9,    14,
      14,   126,    57,     5,    59,    16,    17,    18,    19,    20,
      21,    15,    58,   160,   111,    56,   163,    38,    42,    36,
      37,    62,    43,   120,    45,    53,    67,     5,    39,    70,
     239,   156,    53,    53,    75,   160,    57,   137,   163,    56,
     165,    14,     5,    84,    59,   142,    60,    49,   145,    90,
      61,     5,   149,    57,    29,    96,   153,     5,    36,    37,
     157,   158,   159,   272,     0,    15,    35,   108,    35,    35,
      45,   168,    47,    36,    37,    21,    57,    23,    56,    56,
     289,     5,   291,    58,    57,    35,    59,    60,     5,    58,
      67,    58,    58,    35,   191,   136,   137,    43,     5,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     6,     7,     8,     9,    33,    58,    34,    36,    36,
      37,    16,    17,    18,    19,    20,    21,    34,    58,    36,
      37,     5,   173,    15,    55,    35,     6,     7,     8,     9,
     237,     5,    35,    55,    39,    35,    16,    17,    18,    19,
      20,    21,    33,    35,    57,    36,   299,   300,    58,    35,
      34,    55,    36,    37,   261,    58,    61,    48,    58,    39,
     267,   268,    36,    37,   299,   300,   276,   324,   325,     3,
       4,     5,    58,    35,     8,    57,     5,    59,    60,   286,
     287,    61,    33,    33,    57,   359,    36,    60,   341,   324,
     325,    41,    33,     6,     7,   352,    58,     5,    48,    58,
      59,    60,     5,    57,    38,    59,   341,    20,     3,    58,
      59,    45,   355,   320,    58,    34,    60,   352,    10,    53,
      58,    59,    15,    57,    58,   276,    16,    17,    18,    19,
      20,    21,     5,   340,     6,     7,     8,     9,     3,     4,
       5,   348,    56,     8,    16,    17,    18,    19,    20,    21,
       6,     7,     8,     9,    16,    17,    18,    19,    20,    21,
      16,    17,    18,    19,    20,    21,    55,    39,    15,     3,
       4,     5,    57,    38,     8,    58,    59,    61,    57,    57,
      45,    57,    15,    39,     6,     7,     8,     9,    53,    61,
      57,    57,    57,    58,    16,    17,    18,    19,    20,    21,
      59,     3,     4,     5,    38,    61,     8,     3,     4,     5,
      11,    45,     8,     5,     5,     5,    59,    39,    59,    53,
       5,     5,     5,    57,    58,     3,     4,     5,     5,    11,
       8,    56,     5,    57,    57,    15,    38,    57,    57,    61,
       5,    59,    38,    45,    57,    57,    15,    58,    57,    45,
      57,    53,     5,    58,    58,    57,    58,    53,     5,    15,
      38,    57,    58,     3,     4,     5,    15,    45,     8,    57,
       5,     5,    15,    15,    15,    53,    27,    23,    15,    57,
      58,     3,     4,     5,     8,     9,     8,    15,     5,    15,
      58,    58,    16,    17,    18,    19,    20,    21,    38,    15,
      15,    60,    59,    43,    15,    45,    15,    47,    15,    15,
      15,    51,    15,    53,    14,    39,    38,    57,    15,    15,
      15,    15,    55,    45,    15,    56,     6,     7,     8,     9,
      14,    53,     6,    58,    17,    57,    16,    17,    18,    19,
      20,    21,     6,     7,     8,     9,    84,   173,    34,    78,
     108,    90,    16,    17,    18,    19,    20,    21,    -1,    39,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    39,    -1,    -1,    58,    16,
      17,    18,    19,    20,    21,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    58,    16,    17,    18,    19,    20,
      21,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    39,    -1,
      -1,    58,    16,    17,    18,    19,    20,    21,     6,     7,
       8,     9,     6,     7,     8,    -1,    -1,    58,    16,    17,
      18,    19,    20,    21,    -1,    39,    20,    21,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    58,    -1,    -1,    -1,    -1,    43,
      -1,    45,    -1,    47,     5,    -1,    -1,     8,    -1,    -1,
      58,    12,    13,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    24,    25,    26,    27,    -1,    29,    30,
      31,    -1,     5,    -1,    -1,     8,    -1,    -1,     5,    12,
      13,     8,    -1,    44,    -1,    12,    13,    -1,    -1,    22,
      -1,    52,    53,    26,    27,    22,    29,    30,    31,    26,
      27,    -1,    29,    30,    31,    32,     5,    40,    -1,     8,
      -1,    44,    -1,    12,    13,    -1,    -1,    44,    -1,    52,
      53,    -1,    -1,    22,    -1,    52,    53,    26,    27,    28,
      29,    30,    31,    -1,    -1,     5,    -1,    -1,     8,    -1,
      -1,     5,    12,    13,     8,    44,    -1,    -1,    12,    13,
      -1,    -1,    22,    52,    53,    25,    26,    27,    22,    29,
      30,    31,    26,    27,    -1,    29,    30,    31,    -1,     5,
      -1,    -1,     8,    -1,    44,    -1,    12,    13,    -1,    -1,
      44,    -1,    52,    53,    -1,    -1,    22,    -1,    52,    53,
      26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    14,    44,    16,
      17,    18,    19,    20,    21,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    39,    15,    16,    17,    18,    19,    20,    21,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    39,    15,    16,    17,    18,    19,    20,
      21,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    39,    15,    16,    17,    18,    19,
      20,    21,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    39,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    36,    41,    48,    63,    64,    68,    83,   103,
      34,    84,    46,     5,    65,    66,     5,    69,    70,     0,
      68,    83,   103,    83,   103,     5,    36,    37,    82,    90,
      91,   103,    36,    82,    85,    86,    57,    67,    42,    66,
      71,    49,    70,    83,   103,    90,   103,    90,   103,     5,
      91,   103,    87,    34,    86,    58,    55,    55,    90,   103,
     103,   103,    57,     5,    88,    89,    55,    79,    80,    82,
      33,   103,    82,    92,    93,    57,    60,    15,    35,    33,
      94,    56,    80,     5,    73,    74,    75,    80,    82,     5,
      35,    58,    92,     3,    89,    34,    95,    10,   101,    15,
      34,    74,     5,    93,    55,    58,    61,    82,    96,    97,
       5,     8,    12,    13,    22,    26,    27,    29,    30,    31,
      40,    44,    52,    53,    81,   100,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    56,    72,    57,    94,    98,
      34,    97,    14,    57,    59,    60,     3,     4,     5,     8,
      38,    45,    53,    57,    81,   113,    57,    57,    57,    57,
     104,    15,    15,   104,   113,    57,    57,    59,    14,    59,
      11,   100,   105,    76,    77,    82,    92,   101,     5,    99,
      43,    47,    51,   113,    58,   102,   113,     5,   113,    57,
      59,    60,   113,     5,    59,   113,     6,     7,     8,     9,
      14,    16,    17,    18,    19,    20,    21,    39,     5,    53,
      81,   113,   113,   113,    26,    32,    15,     5,    81,     5,
       5,    43,   113,     5,    11,    56,    77,     5,    58,    56,
      15,    35,    57,    57,    57,    15,    15,    35,    58,    57,
      61,    58,   102,     5,   113,     5,    58,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,    58,
      59,    60,    59,    58,    58,    58,    58,    57,    57,    58,
      58,    58,    57,    59,    57,    15,    57,    15,     5,    58,
      58,     5,   113,    15,    58,   102,    14,    60,    58,    57,
      61,    57,    15,    15,     5,   113,     5,    15,    15,    23,
      27,   113,   113,    15,    15,    15,    58,   102,     5,    58,
      92,    15,    15,    58,    15,    58,   113,   113,    58,   102,
      60,    58,   102,    61,   104,   104,    58,    58,    15,    58,
      15,    58,    15,    15,    15,    61,    58,   113,    58,    58,
      60,    24,    25,    28,    15,    15,    15,    78,    14,    61,
      15,   113,   104,    15,    15,    55,   113,    61,    25,    94,
      15,    58,    15,   101,    15,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    67,    66,
      68,    68,    69,    69,    71,    72,    70,    73,    73,    74,
      74,    75,    76,    76,    76,    78,    77,    79,    79,    80,
      81,    81,    81,    81,    82,    82,    82,    84,    83,    83,
      83,    85,    85,    87,    86,    88,    88,    89,    89,    89,
      90,    90,    91,    92,    92,    92,    93,    95,    94,    94,
      94,    96,    96,    98,    97,    99,    99,   100,   101,   101,
     102,   102,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   106,   106,
     106,   106,   107,   108,   108,   108,   108,   108,   109,   109,
     110,   111,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     4,     3,     2,     4,     3,
       2,     3,     2,     1,     3,     0,     2,     1,     0,     5,
       3,     0,     2,     1,     0,     0,     9,     2,     1,     1,
       1,     6,     2,     1,     0,     0,    10,     2,     1,     3,
       3,     3,     3,     5,     1,     1,     1,     0,     4,     2,
       0,     2,     1,     0,     4,     3,     1,     1,     4,     4,
       2,     1,     9,     3,     1,     0,     2,     0,     4,     2,
       0,     2,     1,     0,     4,     3,     1,     3,     4,     3,
       3,     1,     8,     2,     1,     0,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     4,     5,     6,     6,     5,
       5,     6,     7,     5,     6,     7,     6,     7,     5,     8,
      11,     5,     5,     4,     7,    10,     5,     4,    10,     8,
       8,     7,     7,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     4,     7,
       2,     2,     3,     4,     1,     1,     5,     6,     5,     6
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
#line 1705 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock ClassDefBlock GDeclBlock MainBlock  */
#line 55 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1711 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock ClassDefBlock MainBlock  */
#line 57 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1717 "y.tab.c"
    break;

  case 5: /* program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 59 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1723 "y.tab.c"
    break;

  case 6: /* program: TypeDefBlock GDeclBlock MainBlock  */
#line 61 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1729 "y.tab.c"
    break;

  case 7: /* program: TypeDefBlock MainBlock  */
#line 63 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1735 "y.tab.c"
    break;

  case 8: /* program: ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 65 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1741 "y.tab.c"
    break;

  case 9: /* program: ClassDefBlock GDeclBlock MainBlock  */
#line 67 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1747 "y.tab.c"
    break;

  case 10: /* program: ClassDefBlock MainBlock  */
#line 69 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1753 "y.tab.c"
    break;

  case 11: /* program: GDeclBlock FDefBlock MainBlock  */
#line 71 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1759 "y.tab.c"
    break;

  case 12: /* program: GDeclBlock MainBlock  */
#line 73 "control.y"
        { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1765 "y.tab.c"
    break;

  case 13: /* program: MainBlock  */
#line 75 "control.y"
        { ASTRoot = (yyvsp[0].no); }
#line 1771 "y.tab.c"
    break;

  case 14: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 78 "control.y"
                                        { (yyval.no) = (yyvsp[-1].no); }
#line 1777 "y.tab.c"
    break;

  case 15: /* TypeDefBlock: %empty  */
#line 79 "control.y"
                                        { (yyval.no) = NULL; }
#line 1783 "y.tab.c"
    break;

  case 16: /* TypeDefList: TypeDefList TypeDef  */
#line 82 "control.y"
                                  { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1789 "y.tab.c"
    break;

  case 17: /* TypeDefList: TypeDef  */
#line 83 "control.y"
                                  { (yyval.no) = (yyvsp[0].no); }
#line 1795 "y.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 86 "control.y"
             {TInstallEmpty((yyvsp[0].str));}
#line 1801 "y.tab.c"
    break;

  case 19: /* TypeDef: ID $@1 '{' FieldDeclList '}'  */
#line 86 "control.y"
                                                        {
            (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-4].str)), (yyvsp[-1].no));
            TSetFields((yyvsp[-4].str), buildFieldList((yyvsp[-1].no)));
          }
#line 1810 "y.tab.c"
    break;

  case 20: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 93 "control.y"
                                  { (yyval.no) = (yyvsp[-1].no); }
#line 1816 "y.tab.c"
    break;

  case 21: /* ClassDefBlock: %empty  */
#line 94 "control.y"
                                  { (yyval.no) = NULL; }
#line 1822 "y.tab.c"
    break;

  case 22: /* ClassDefList: ClassDefList ClassDef  */
#line 98 "control.y"
                            { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1828 "y.tab.c"
    break;

  case 23: /* ClassDefList: ClassDef  */
#line 99 "control.y"
                            { (yyval.no) = (yyvsp[0].no); }
#line 1834 "y.tab.c"
    break;

  case 24: /* $@2: %empty  */
#line 104 "control.y"
      {
          current_class = CInstall((yyvsp[0].str), NULL);
      }
#line 1842 "y.tab.c"
    break;

  case 25: /* $@3: %empty  */
#line 108 "control.y"
      {
          CSetFields(current_class->name, buildFieldList((yyvsp[-1].no)));
      }
#line 1850 "y.tab.c"
    break;

  case 26: /* ClassDef: ID $@2 '{' DECL ClassDeclList ENDDECL $@3 ClassMethodDefList '}'  */
#line 112 "control.y"
      {
          (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-8].str)),
                               makeConnectNode((yyvsp[-4].no), (yyvsp[-1].no)));
          current_class = NULL;
      }
#line 1860 "y.tab.c"
    break;

  case 27: /* ClassDeclList: ClassDeclList ClassDeclItem  */
#line 120 "control.y"
                                  { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1866 "y.tab.c"
    break;

  case 28: /* ClassDeclList: ClassDeclItem  */
#line 121 "control.y"
                                  { (yyval.no) = (yyvsp[0].no); }
#line 1872 "y.tab.c"
    break;

  case 29: /* ClassDeclItem: FieldDecl  */
#line 125 "control.y"
                       { (yyval.no) = (yyvsp[0].no); }
#line 1878 "y.tab.c"
    break;

  case 30: /* ClassDeclItem: ClassMethodDecl  */
#line 126 "control.y"
                       { (yyval.no) = (yyvsp[0].no); }
#line 1884 "y.tab.c"
    break;

  case 31: /* ClassMethodDecl: TypeName ID '(' ParamList ')' SEMICOLON  */
#line 131 "control.y"
      {
          int lbl = getFnLabel();
          Cmethod* m = createMethod((yyvsp[-4].str), (yyvsp[-5].no)->typeEntry,
                                    buildParamListFromTree((yyvsp[-2].no)), lbl);
          CAddMethod(current_class, m);
          ClearLST();   // ← must be here, resets paramBinding to -3
          (yyval.no) = makeVariableNode((yyvsp[-4].str));
      }
#line 1897 "y.tab.c"
    break;

  case 32: /* ClassMethodDefList: ClassMethodDefList ClassMethodDef  */
#line 142 "control.y"
                                        { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1903 "y.tab.c"
    break;

  case 33: /* ClassMethodDefList: ClassMethodDef  */
#line 143 "control.y"
                                        { (yyval.no) = (yyvsp[0].no); }
#line 1909 "y.tab.c"
    break;

  case 34: /* ClassMethodDefList: %empty  */
#line 144 "control.y"
                                        { (yyval.no) = NULL; }
#line 1915 "y.tab.c"
    break;

  case 35: /* $@4: %empty  */
#line 149 "control.y"
      {
          extern int inParamList;
          inParamList = 0;
      }
#line 1924 "y.tab.c"
    break;

  case 36: /* ClassMethodDef: TypeName ID '(' ParamList ')' $@4 '{' LdeclBlock Body '}'  */
#line 154 "control.y"
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
#line 1954 "y.tab.c"
    break;

  case 37: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 181 "control.y"
                                        { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1960 "y.tab.c"
    break;

  case 38: /* FieldDeclList: FieldDecl  */
#line 182 "control.y"
                                        { (yyval.no) = (yyvsp[0].no); }
#line 1966 "y.tab.c"
    break;

  case 39: /* FieldDecl: TypeName ID SEMICOLON  */
#line 185 "control.y"
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
#line 1989 "y.tab.c"
    break;

  case 40: /* Field: ID '.' ID  */
#line 205 "control.y"
                  {
          (yyval.no) = makeFieldAccessNode(makeVariableUseNode((yyvsp[-2].str)), (yyvsp[0].str));
        }
#line 1997 "y.tab.c"
    break;

  case 41: /* Field: Field '.' ID  */
#line 208 "control.y"
                   {
          (yyval.no) = makeFieldAccessNode((yyvsp[-2].no), (yyvsp[0].str));
        }
#line 2005 "y.tab.c"
    break;

  case 42: /* Field: SELF '.' ID  */
#line 212 "control.y"
      { (yyval.no) = makeSelfFieldNode((yyvsp[0].str)); }
#line 2011 "y.tab.c"
    break;

  case 43: /* Field: SELF '.' ID '.' ID  */
#line 214 "control.y"
      { (yyval.no) = makeFieldAccessNode(makeSelfFieldNode((yyvsp[-2].str)), (yyvsp[0].str)); }
#line 2017 "y.tab.c"
    break;

  case 44: /* TypeName: INT  */
#line 218 "control.y"
          { (yyval.no) = makeTypeNode(0); }
#line 2023 "y.tab.c"
    break;

  case 45: /* TypeName: STR  */
#line 219 "control.y"
          { (yyval.no) = makeTypeNode(2); }
#line 2029 "y.tab.c"
    break;

  case 46: /* TypeName: ID  */
#line 220 "control.y"
          {
              (yyval.no) = makeTypeNode(0);
              (yyval.no)->typeEntry = TLookup((yyvsp[0].str));
              (yyval.no)->varname   = strdup((yyvsp[0].str));
              /* no error here — GDecl will check for class */
          }
#line 2040 "y.tab.c"
    break;

  case 47: /* $@5: %empty  */
#line 228 "control.y"
                  {inLocalDecl = 0;}
#line 2046 "y.tab.c"
    break;

  case 48: /* GDeclBlock: DECL $@5 GdeclList ENDDECL  */
#line 228 "control.y"
                                                       {(yyval.no) = (yyvsp[-1].no); print((yyval.no));}
#line 2052 "y.tab.c"
    break;

  case 49: /* GDeclBlock: DECL ENDDECL  */
#line 229 "control.y"
                       {(yyval.no) = NULL;}
#line 2058 "y.tab.c"
    break;

  case 50: /* GDeclBlock: %empty  */
#line 230 "control.y"
          {(yyval.no) = NULL;}
#line 2064 "y.tab.c"
    break;

  case 51: /* GdeclList: GdeclList GDecl  */
#line 233 "control.y"
                             {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2070 "y.tab.c"
    break;

  case 52: /* GdeclList: GDecl  */
#line 234 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 2076 "y.tab.c"
    break;

  case 53: /* $@6: %empty  */
#line 239 "control.y"
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
#line 2095 "y.tab.c"
    break;

  case 54: /* GDecl: TypeName $@6 GidList SEMICOLON  */
#line 254 "control.y"
      {
          if (current_class != NULL) {
              (yyval.no) = makeClassDeclNode((yyvsp[-1].no), current_class);
              current_class = NULL;
          } else {
              (yyval.no) = makeDeclNode((yyvsp[-3].no), (yyvsp[-1].no));
          }
      }
#line 2108 "y.tab.c"
    break;

  case 55: /* GidList: GidList COMMA Gid  */
#line 264 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 2114 "y.tab.c"
    break;

  case 56: /* GidList: Gid  */
#line 265 "control.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 2120 "y.tab.c"
    break;

  case 57: /* Gid: ID  */
#line 268 "control.y"
         {(yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 0;}
#line 2126 "y.tab.c"
    break;

  case 58: /* Gid: ID '[' NUM ']'  */
#line 269 "control.y"
                      {(yyval.no) = makeArrayNode(NULL,makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 2132 "y.tab.c"
    break;

  case 59: /* Gid: ID '(' ParamList ')'  */
#line 270 "control.y"
                           {(yyval.no) = makeFnDeclNode(makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no)); ClearLST();}
#line 2138 "y.tab.c"
    break;

  case 60: /* FDefBlock: FDefBlock Fdef  */
#line 272 "control.y"
                           {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2144 "y.tab.c"
    break;

  case 61: /* FDefBlock: Fdef  */
#line 273 "control.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 2150 "y.tab.c"
    break;

  case 62: /* Fdef: TypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 276 "control.y"
                                                         { (yyval.no) = makeFnDefNode((yyvsp[-8].no), makeVariableNode((yyvsp[-7].str)), (yyvsp[-5].no), (yyvsp[-2].no), (yyvsp[-1].no)); }
#line 2156 "y.tab.c"
    break;

  case 63: /* ParamList: ParamList COMMA Param  */
#line 279 "control.y"
                                  {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 2162 "y.tab.c"
    break;

  case 64: /* ParamList: Param  */
#line 280 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 2168 "y.tab.c"
    break;

  case 65: /* ParamList: %empty  */
#line 281 "control.y"
                        {(yyval.no) = NULL;}
#line 2174 "y.tab.c"
    break;

  case 66: /* Param: TypeName ID  */
#line 284 "control.y"
                    {(yyval.no) = makeParamNode((yyvsp[-1].no), makeVariableNode((yyvsp[0].str)));}
#line 2180 "y.tab.c"
    break;

  case 67: /* $@7: %empty  */
#line 287 "control.y"
                  {inLocalDecl = 1; inParamList = 0;}
#line 2186 "y.tab.c"
    break;

  case 68: /* LdeclBlock: DECL $@7 LDeclList ENDDECL  */
#line 287 "control.y"
                                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2192 "y.tab.c"
    break;

  case 69: /* LdeclBlock: DECL ENDDECL  */
#line 288 "control.y"
                       {(yyval.no) = NULL;}
#line 2198 "y.tab.c"
    break;

  case 70: /* LdeclBlock: %empty  */
#line 289 "control.y"
      {(yyval.no) = NULL;}
#line 2204 "y.tab.c"
    break;

  case 71: /* LDeclList: LDeclList LDecl  */
#line 292 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2210 "y.tab.c"
    break;

  case 72: /* LDeclList: LDecl  */
#line 293 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 2216 "y.tab.c"
    break;

  case 73: /* $@8: %empty  */
#line 296 "control.y"
                 {current_type = (yyvsp[0].no)->typeEntry;}
#line 2222 "y.tab.c"
    break;

  case 74: /* LDecl: TypeName $@8 IdList SEMICOLON  */
#line 296 "control.y"
                                                                  {(yyval.no) = makeDeclNode((yyvsp[-3].no),(yyvsp[-1].no));}
#line 2228 "y.tab.c"
    break;

  case 75: /* IdList: IdList COMMA ID  */
#line 299 "control.y"
                         {(yyval.no) = makeConnectNode((yyvsp[-2].no),makeVariableNode((yyvsp[0].str)));}
#line 2234 "y.tab.c"
    break;

  case 76: /* IdList: ID  */
#line 300 "control.y"
             {(yyval.no) = makeVariableNode((yyvsp[0].str));}
#line 2240 "y.tab.c"
    break;

  case 77: /* Retstmt: RETURNN expr SEMICOLON  */
#line 303 "control.y"
                                 { (yyval.no) = makeReturnNode((yyvsp[-1].no)); }
#line 2246 "y.tab.c"
    break;

  case 78: /* Body: BEGINN Slist Retstmt ENDD  */
#line 306 "control.y"
                                 { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[-1].no)); }
#line 2252 "y.tab.c"
    break;

  case 79: /* Body: BEGINN Retstmt ENDD  */
#line 307 "control.y"
                                 { (yyval.no) = (yyvsp[-1].no); }
#line 2258 "y.tab.c"
    break;

  case 80: /* ArgList: ArgList COMMA expr  */
#line 310 "control.y"
                             { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 2264 "y.tab.c"
    break;

  case 81: /* ArgList: expr  */
#line 311 "control.y"
               { (yyval.no) = (yyvsp[0].no); }
#line 2270 "y.tab.c"
    break;

  case 82: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 315 "control.y"
            {
                (yyval.no) = makeFnDefNode(makeTypeNode(0), makeVariableNode("main"), NULL, (yyvsp[-2].no), (yyvsp[-1].no));
            }
#line 2278 "y.tab.c"
    break;

  case 83: /* Slist: Slist Stmt  */
#line 320 "control.y"
                   {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 2284 "y.tab.c"
    break;

  case 84: /* Slist: Stmt  */
#line 321 "control.y"
             {(yyval.no) = (yyvsp[0].no);}
#line 2290 "y.tab.c"
    break;

  case 85: /* Slist: %empty  */
#line 322 "control.y"
            {(yyval.no)=NULL;}
#line 2296 "y.tab.c"
    break;

  case 86: /* Stmt: InputStmt  */
#line 325 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 2302 "y.tab.c"
    break;

  case 87: /* Stmt: OutputStmt  */
#line 326 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 2308 "y.tab.c"
    break;

  case 88: /* Stmt: AsgStmt  */
#line 327 "control.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 2314 "y.tab.c"
    break;

  case 89: /* Stmt: IfStmt  */
#line 328 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 2320 "y.tab.c"
    break;

  case 90: /* Stmt: WhileStmt  */
#line 329 "control.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 2326 "y.tab.c"
    break;

  case 91: /* Stmt: BREAKK SEMICOLON  */
#line 330 "control.y"
                           {(yyval.no) = makeBreakNode();}
#line 2332 "y.tab.c"
    break;

  case 92: /* Stmt: CONTINUEE SEMICOLON  */
#line 331 "control.y"
                              {(yyval.no) = makeContinueNode();}
#line 2338 "y.tab.c"
    break;

  case 93: /* Stmt: DoWhileStmt  */
#line 332 "control.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 2344 "y.tab.c"
    break;

  case 94: /* Stmt: RepeatStmt  */
#line 333 "control.y"
                     {(yyval.no) = (yyvsp[0].no);}
#line 2350 "y.tab.c"
    break;

  case 95: /* Stmt: ID '(' ')' SEMICOLON  */
#line 335 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)), NULL); }
#line 2356 "y.tab.c"
    break;

  case 96: /* Stmt: ID '(' ArgList ')' SEMICOLON  */
#line 337 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-4].str)), (yyvsp[-2].no)); }
#line 2362 "y.tab.c"
    break;

  case 97: /* Stmt: ID ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 338 "control.y"
                                            { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-5].str)), makeAllocNode(NULL)); }
#line 2368 "y.tab.c"
    break;

  case 98: /* Stmt: Field ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 339 "control.y"
                                               { (yyval.no) = makeAssignNode((yyvsp[-5].no), makeAllocNode(NULL)); }
#line 2374 "y.tab.c"
    break;

  case 99: /* Stmt: FREE '(' ID ')' SEMICOLON  */
#line 340 "control.y"
                                    { (yyval.no) = makeFreeNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2380 "y.tab.c"
    break;

  case 100: /* Stmt: FREE '(' Field ')' SEMICOLON  */
#line 341 "control.y"
                                       { (yyval.no) = makeFreeNode((yyvsp[-2].no)); }
#line 2386 "y.tab.c"
    break;

  case 101: /* Stmt: ID ASSIGN INITIALIZE '(' ')' SEMICOLON  */
#line 343 "control.y"
    { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-5].str)), makeInitializeNode()); }
#line 2392 "y.tab.c"
    break;

  case 102: /* Stmt: ID ASSIGN NEW '(' ID ')' SEMICOLON  */
#line 345 "control.y"
        { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-6].str)), makeNewNode((yyvsp[-2].str))); }
#line 2398 "y.tab.c"
    break;

  case 103: /* Stmt: DELETE '(' ID ')' SEMICOLON  */
#line 347 "control.y"
        { (yyval.no) = makeDeleteNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2404 "y.tab.c"
    break;

  case 104: /* Stmt: SELF '.' ID '(' ')' SEMICOLON  */
#line 349 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-3].str), NULL); }
#line 2410 "y.tab.c"
    break;

  case 105: /* Stmt: SELF '.' ID '(' ArgList ')' SEMICOLON  */
#line 351 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-4].str), (yyvsp[-2].no)); }
#line 2416 "y.tab.c"
    break;

  case 106: /* Stmt: ID '.' ID '(' ')' SEMICOLON  */
#line 353 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-5].str)), (yyvsp[-3].str), NULL); }
#line 2422 "y.tab.c"
    break;

  case 107: /* Stmt: ID '.' ID '(' ArgList ')' SEMICOLON  */
#line 355 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].str), (yyvsp[-2].no)); }
#line 2428 "y.tab.c"
    break;

  case 108: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 358 "control.y"
                                   { (yyval.no) = makeReadNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2434 "y.tab.c"
    break;

  case 109: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 359 "control.y"
                                           { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-5].str)),(yyvsp[-3].no))); }
#line 2440 "y.tab.c"
    break;

  case 110: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 360 "control.y"
                                                     { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-8].str)),makeConnectNode((yyvsp[-6].no),(yyvsp[-3].no)))); }
#line 2446 "y.tab.c"
    break;

  case 111: /* InputStmt: READ '(' Field ')' SEMICOLON  */
#line 361 "control.y"
                                       { (yyval.no) = makeReadNode((yyvsp[-2].no)); }
#line 2452 "y.tab.c"
    break;

  case 112: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 364 "control.y"
                                       {(yyval.no) = makeWriteNode((yyvsp[-2].no));}
#line 2458 "y.tab.c"
    break;

  case 113: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 367 "control.y"
                                   { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no)); }
#line 2464 "y.tab.c"
    break;

  case 114: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 368 "control.y"
                                              { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].no)), (yyvsp[-1].no)); }
#line 2470 "y.tab.c"
    break;

  case 115: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 369 "control.y"
                                                        { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-9].str)), makeConnectNode((yyvsp[-7].no),(yyvsp[-4].no))), (yyvsp[-1].no)); }
#line 2476 "y.tab.c"
    break;

  case 116: /* AsgStmt: MUL expr ASSIGN expr SEMICOLON  */
#line 370 "control.y"
                                         { (yyval.no) = makeAssignNode(makeDerefNode((yyvsp[-3].no)), (yyvsp[-1].no)); }
#line 2482 "y.tab.c"
    break;

  case 117: /* AsgStmt: Field ASSIGN expr SEMICOLON  */
#line 371 "control.y"
                                      { (yyval.no) = makeAssignNode((yyvsp[-3].no), (yyvsp[-1].no)); }
#line 2488 "y.tab.c"
    break;

  case 118: /* IfStmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 374 "control.y"
                                                             {(yyval.no) = makeIfElseNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 2494 "y.tab.c"
    break;

  case 119: /* IfStmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 375 "control.y"
                                                   {(yyval.no) = makeIfNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2500 "y.tab.c"
    break;

  case 120: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 378 "control.y"
                                                         {(yyval.no) = makeWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2506 "y.tab.c"
    break;

  case 121: /* RepeatStmt: REPEATT Slist UNTILL '(' expr ')' SEMICOLON  */
#line 381 "control.y"
                                                            {(yyval.no)=makeRepeatNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2512 "y.tab.c"
    break;

  case 122: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 384 "control.y"
                                                        {(yyval.no)=makeDoWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2518 "y.tab.c"
    break;

  case 123: /* expr: expr PLUS expr  */
#line 387 "control.y"
                                        {(yyval.no) = makeOperatorNode('+',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2524 "y.tab.c"
    break;

  case 124: /* expr: expr MINUS expr  */
#line 388 "control.y"
                                        {(yyval.no) = makeOperatorNode('-',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2530 "y.tab.c"
    break;

  case 125: /* expr: expr MUL expr  */
#line 389 "control.y"
                                                {(yyval.no) = makeOperatorNode('*',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2536 "y.tab.c"
    break;

  case 126: /* expr: expr DIV expr  */
#line 390 "control.y"
                                                {(yyval.no) = makeOperatorNode('/',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2542 "y.tab.c"
    break;

  case 127: /* expr: expr MOD expr  */
#line 391 "control.y"
                                                {(yyval.no) = makeOperatorNode('%',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2548 "y.tab.c"
    break;

  case 128: /* expr: '(' expr ')'  */
#line 392 "control.y"
                                                {(yyval.no) = (yyvsp[-1].no);}
#line 2554 "y.tab.c"
    break;

  case 129: /* expr: NUM  */
#line 393 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2560 "y.tab.c"
    break;

  case 130: /* expr: ID  */
#line 394 "control.y"
                                                        {(yyval.no) = makeVariableUseNode((yyvsp[0].str));}
#line 2566 "y.tab.c"
    break;

  case 131: /* expr: STRINGG  */
#line 395 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2572 "y.tab.c"
    break;

  case 132: /* expr: expr LT expr  */
#line 396 "control.y"
                                                {(yyval.no) = makeCOperatorNode('<',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2578 "y.tab.c"
    break;

  case 133: /* expr: expr GT expr  */
#line 397 "control.y"
                                {(yyval.no) = makeCOperatorNode('>',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2584 "y.tab.c"
    break;

  case 134: /* expr: expr LE expr  */
#line 398 "control.y"
                                {(yyval.no) = makeCOperatorNode('L',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2590 "y.tab.c"
    break;

  case 135: /* expr: expr GE expr  */
#line 399 "control.y"
                                {(yyval.no) = makeCOperatorNode('G',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2596 "y.tab.c"
    break;

  case 136: /* expr: expr NE expr  */
#line 400 "control.y"
                                {(yyval.no) = makeCOperatorNode('N',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2602 "y.tab.c"
    break;

  case 137: /* expr: expr EQ expr  */
#line 401 "control.y"
                                {(yyval.no) = makeCOperatorNode('E',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2608 "y.tab.c"
    break;

  case 138: /* expr: ID '[' expr ']'  */
#line 402 "control.y"
                                                {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no));}
#line 2614 "y.tab.c"
    break;

  case 139: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 403 "control.y"
                                        {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no)));}
#line 2620 "y.tab.c"
    break;

  case 140: /* expr: AMPERSAND ID  */
#line 404 "control.y"
                                                {(yyval.no) = makeAddrNode((tnode*)makeVariableUseNode((yyvsp[0].str)));}
#line 2626 "y.tab.c"
    break;

  case 141: /* expr: MUL expr  */
#line 405 "control.y"
                                { (yyval.no) = makeDerefNode((yyvsp[0].no)); }
#line 2632 "y.tab.c"
    break;

  case 142: /* expr: ID '(' ')'  */
#line 406 "control.y"
                                                        {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-2].str)),NULL);}
#line 2638 "y.tab.c"
    break;

  case 143: /* expr: ID '(' ArgList ')'  */
#line 407 "control.y"
                                                {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 2644 "y.tab.c"
    break;

  case 144: /* expr: Field  */
#line 408 "control.y"
                  { (yyval.no) = (yyvsp[0].no); }
#line 2650 "y.tab.c"
    break;

  case 145: /* expr: NULLL  */
#line 409 "control.y"
                 { (yyval.no) = makeConstantNode(0); (yyval.no)->typeEntry = TLookup("null"); }
#line 2656 "y.tab.c"
    break;

  case 146: /* expr: SELF '.' ID '(' ')'  */
#line 411 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-2].str), NULL); }
#line 2662 "y.tab.c"
    break;

  case 147: /* expr: SELF '.' ID '(' ArgList ')'  */
#line 413 "control.y"
        { (yyval.no) = makeSelfMethodCallNode((yyvsp[-3].str), (yyvsp[-1].no)); }
#line 2668 "y.tab.c"
    break;

  case 148: /* expr: ID '.' ID '(' ')'  */
#line 415 "control.y"
        { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-4].str)), (yyvsp[-2].str), NULL); }
#line 2674 "y.tab.c"
    break;

  case 149: /* expr: ID '.' ID '(' ArgList ')'  */
#line 416 "control.y"
                                { (yyval.no) = makeObjMethodCallNode(makeVariableUseNode((yyvsp[-5].str)), (yyvsp[-3].str), (yyvsp[-1].no));}
#line 2680 "y.tab.c"
    break;


#line 2684 "y.tab.c"

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

#line 420 "control.y"


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
