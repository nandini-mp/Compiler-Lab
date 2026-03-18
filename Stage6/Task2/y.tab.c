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
	Ttable* current_type;
	int inLocalDecl;
	extern int inParamList;
	tnode* ASTRoot = NULL;
	int yyerror(const char*);
	int yylex(void);
	extern FILE *yyin;

#line 89 "y.tab.c"

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
    UNARY = 303                    /* UNARY  */
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
#define UNARY 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "control.y"

	struct tnode *no;
	char* str;

#line 243 "y.tab.c"

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
  YYSYMBOL_UNARY = 48,                     /* UNARY  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* '.'  */
  YYSYMBOL_52_ = 52,                       /* '['  */
  YYSYMBOL_53_ = 53,                       /* ']'  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_TypeDefBlock = 58,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 59,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 60,                   /* TypeDef  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_FieldDeclList = 62,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 63,                 /* FieldDecl  */
  YYSYMBOL_Field = 64,                     /* Field  */
  YYSYMBOL_TypeName = 65,                  /* TypeName  */
  YYSYMBOL_GDeclBlock = 66,                /* GDeclBlock  */
  YYSYMBOL_67_2 = 67,                      /* $@2  */
  YYSYMBOL_GdeclList = 68,                 /* GdeclList  */
  YYSYMBOL_GDecl = 69,                     /* GDecl  */
  YYSYMBOL_70_3 = 70,                      /* $@3  */
  YYSYMBOL_GidList = 71,                   /* GidList  */
  YYSYMBOL_Gid = 72,                       /* Gid  */
  YYSYMBOL_FDefBlock = 73,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 74,                      /* Fdef  */
  YYSYMBOL_ParamList = 75,                 /* ParamList  */
  YYSYMBOL_Param = 76,                     /* Param  */
  YYSYMBOL_LdeclBlock = 77,                /* LdeclBlock  */
  YYSYMBOL_78_4 = 78,                      /* $@4  */
  YYSYMBOL_LDeclList = 79,                 /* LDeclList  */
  YYSYMBOL_LDecl = 80,                     /* LDecl  */
  YYSYMBOL_81_5 = 81,                      /* $@5  */
  YYSYMBOL_IdList = 82,                    /* IdList  */
  YYSYMBOL_Retstmt = 83,                   /* Retstmt  */
  YYSYMBOL_Body = 84,                      /* Body  */
  YYSYMBOL_ArgList = 85,                   /* ArgList  */
  YYSYMBOL_MainBlock = 86,                 /* MainBlock  */
  YYSYMBOL_Slist = 87,                     /* Slist  */
  YYSYMBOL_Stmt = 88,                      /* Stmt  */
  YYSYMBOL_InputStmt = 89,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 90,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 91,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 92,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 93,                 /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 94,                /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 95,               /* DoWhileStmt  */
  YYSYMBOL_expr = 96                       /* expr  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   784

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      54,    55,     2,     2,     2,     2,    51,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    45,    46,    47,    48,    49,    52,    53,
      56,    57,    60,    60,    66,    67,    70,    76,    79,    84,
      85,    86,    96,    96,    97,    98,   101,   102,   105,   105,
     108,   109,   112,   113,   114,   116,   117,   120,   123,   124,
     125,   128,   131,   131,   132,   135,   136,   139,   139,   142,
     143,   146,   149,   150,   153,   154,   157,   163,   164,   165,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     179,   181,   182,   183,   184,   185,   189,   190,   191,   192,
     195,   198,   199,   200,   201,   202,   205,   206,   209,   212,
     215,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240
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
  "NULLL", "MAIN", "INITIALIZE", "UNARY", "'{'", "'}'", "'.'", "'['",
  "']'", "'('", "')'", "$accept", "program", "TypeDefBlock", "TypeDefList",
  "TypeDef", "$@1", "FieldDeclList", "FieldDecl", "Field", "TypeName",
  "GDeclBlock", "$@2", "GdeclList", "GDecl", "$@3", "GidList", "Gid",
  "FDefBlock", "Fdef", "ParamList", "Param", "LdeclBlock", "$@4",
  "LDeclList", "LDecl", "$@5", "IdList", "Retstmt", "Body", "ArgList",
  "MainBlock", "Slist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt",
  "IfStmt", "WhileStmt", "RepeatStmt", "DoWhileStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-95)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      70,   -24,   -31,    43,    56,    68,    13,   -95,   -95,    25,
      36,   -95,     4,   -95,   -95,    13,   -95,   -95,   -31,   -95,
      86,    13,   -95,   -95,   -95,   -95,   100,   -95,    60,    71,
     -95,   -95,    13,   -95,    67,   -95,   -95,   119,   -95,   -95,
      81,    25,   -95,    25,   111,    -8,   -95,   105,    52,   -95,
     128,   134,   -30,   -95,   139,    25,   -95,   119,   109,   136,
     -95,   -95,   141,   -95,    25,   115,    96,   -27,   -95,   -95,
      25,   477,   116,   -95,   -95,   105,   -95,   -95,   -95,   162,
     -95,    58,   172,   117,   124,   127,   132,   551,   167,   174,
     551,   172,   133,     8,   180,   477,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   136,   185,   -95,   -95,   150,
     196,   172,     9,   -95,   -95,    75,   172,   197,   -95,   172,
     152,   590,   200,   172,   172,   172,   557,   -95,   -95,   483,
     606,   201,   114,   202,   -95,   198,   -95,   158,   -95,     5,
     159,   160,   631,   -95,   335,   207,   -14,   729,   172,    90,
     -95,   -95,   212,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,    45,   -18,   229,   253,   270,
     161,   169,   -95,    14,    16,   170,   647,   -95,   -95,   -95,
     -95,   211,   157,   203,   -95,   -10,   -95,   172,   210,   351,
     -95,    31,   -95,   745,   745,   223,   223,   672,   236,   236,
     236,   236,   236,   236,   223,   172,   219,   248,   249,   204,
     238,   172,   172,   251,   260,   225,   -95,   -95,   266,   267,
     172,   172,   729,   -95,   231,   -95,   -95,   375,   -95,   -95,
     -95,   551,   551,   294,   311,   -95,   -95,   278,   -95,   -95,
     688,   391,   172,    61,   450,   511,    11,   279,   -95,   -95,
     271,   415,   172,   280,   551,   281,   282,   -95,   -95,   172,
     -95,   431,   -95,   523,   -95,   -95,   713,   243,   284,   -95,
     289,   -95,   -95
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,    22,     0,     0,     0,    25,     0,     7,    24,     0,
       0,    12,     0,    11,     1,     0,     4,    21,    19,    20,
       0,     0,    36,     6,    19,    28,     0,    27,     0,     0,
       8,    10,     0,     3,     0,    35,     5,     0,    23,    26,
       0,     0,     2,    40,    32,     0,    31,     0,     0,    15,
       0,     0,     0,    39,     0,    40,    29,     0,    42,     0,
      13,    14,     0,    41,     0,     0,     0,     0,    30,    44,
       0,     0,     0,    16,    38,     0,    33,    34,    47,     0,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,     0,     0,     0,     0,    58,    60,    61,    62,
      63,    64,    68,    67,    56,     0,     0,    43,    45,     0,
       0,     0,     0,    97,    99,    98,     0,     0,   113,     0,
     112,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,     0,     0,     0,    53,     0,    57,     0,    50,     0,
       0,     0,     0,    17,     0,     0,     0,    55,     0,     0,
     109,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,    18,    52,    37,
      48,     0,     0,     0,    81,     0,    69,     0,     0,     0,
     110,     0,    96,    91,    92,    93,    94,     0,   100,   101,
     102,   103,   104,   105,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    49,     0,     0,
       0,     0,    54,    70,   106,   111,    84,     0,    76,    79,
      80,    59,    59,     0,     0,    73,    74,     0,    71,    75,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    82,
       0,     0,     0,     0,    59,     0,     0,    90,    89,     0,
     107,     0,    77,     0,    87,    88,     0,     0,     0,    83,
       0,    86,    78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   -95,   293,   -95,   -95,   258,   -71,    44,
     302,   -95,   -95,   290,   -95,   -95,   264,   307,     2,   268,
     262,   259,   -95,   -95,   245,   -95,   -95,   240,   232,   187,
     179,   -84,   -94,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,    12,    13,    29,    48,    49,   120,    20,
       6,     9,    26,    27,    37,    45,    46,    21,    22,    52,
      53,    59,    70,    79,    80,   106,   139,    94,    72,   146,
       7,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     147
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,   136,   121,   126,   220,    64,   129,    56,    64,    11,
       8,   130,   113,   114,   115,    10,    93,   116,    17,    93,
     180,   187,   132,    35,    93,    65,   257,    57,    77,   142,
      17,   144,   136,   133,    35,   136,   150,   207,   232,   152,
     181,   188,   221,   167,   168,   169,    30,   117,    11,    18,
      19,   166,   176,    25,   118,    93,    14,    17,    93,   133,
     174,    24,    19,   119,   145,   110,   187,   133,   189,   213,
      25,   214,   109,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    50,   225,    51,    24,    19,
      28,    34,    50,   113,   114,   115,   110,   205,   116,    51,
     206,     1,    60,     1,     2,    17,     2,   222,    51,   110,
     111,     3,   112,   252,    78,    40,   253,   113,   114,   115,
      41,    43,   116,    78,    44,   227,   110,   148,   117,   149,
      47,   233,   234,    62,    38,   118,    24,    19,    58,    63,
     240,   241,    66,    69,   119,   190,    71,   244,   245,    76,
     136,   136,   117,   113,   114,   115,    73,   175,   116,   118,
      93,    93,   251,    54,    75,    55,   104,    17,   119,   136,
     263,   122,   261,    93,    93,   113,   114,   115,   123,   266,
     116,   124,   127,    93,    16,    23,   125,   131,   117,   128,
     138,   134,    93,   140,    33,   118,   107,   141,    24,    19,
      36,   143,   151,   133,   119,   165,   173,   177,   179,   178,
     117,    42,   218,   182,   183,   211,   217,   118,   153,   154,
     155,   156,   186,   212,   215,   223,   119,   231,   158,   159,
     160,   161,   162,   163,   228,   153,   154,   155,   156,   158,
     159,   160,   161,   162,   163,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,   219,   153,
     154,   155,   156,   229,   230,   232,   235,   192,   164,   158,
     159,   160,   161,   162,   163,   236,   153,   154,   155,   156,
     237,   238,   239,   242,   208,   259,   158,   159,   160,   161,
     162,   163,   164,   248,   258,   262,   264,   265,   270,   271,
     153,   154,   155,   156,   272,    31,    61,    15,   209,   164,
     158,   159,   160,   161,   162,   163,    39,   153,   154,   155,
     156,    68,    32,    67,   108,   210,    74,   158,   159,   160,
     161,   162,   163,   164,   105,   135,   191,   137,     0,     0,
       0,   153,   154,   155,   156,     0,     0,     0,     0,   246,
     164,   158,   159,   160,   161,   162,   163,   153,   154,   155,
     156,     0,     0,     0,     0,     0,   247,   158,   159,   160,
     161,   162,   163,     0,   164,     0,     0,     0,     0,     0,
       0,   153,   154,   155,   156,     0,     0,     0,   185,     0,
     164,   158,   159,   160,   161,   162,   163,   153,   154,   155,
     156,     0,     0,     0,   224,     0,     0,   158,   159,   160,
     161,   162,   163,     0,   164,     0,     0,     0,     0,     0,
       0,   153,   154,   155,   156,     0,     0,     0,   243,     0,
     164,   158,   159,   160,   161,   162,   163,   153,   154,   155,
     156,     0,     0,     0,   250,     0,     0,   158,   159,   160,
     161,   162,   163,     0,   164,    81,     0,     0,    82,     0,
       0,     0,    83,    84,     0,     0,     0,     0,   260,     0,
     164,     0,    85,     0,   254,   255,    86,    87,     0,    88,
      89,    90,    81,     0,   267,    82,     0,     0,    81,    83,
      84,    82,     0,     0,    92,    83,    84,     0,     0,    85,
       0,     0,     0,    86,    87,    85,    88,    89,    90,    86,
      87,     0,    88,    89,    90,   171,    81,    91,     0,    82,
       0,    92,     0,    83,    84,     0,     0,    92,    81,     0,
       0,    82,     0,    85,     0,    83,    84,    86,    87,   256,
      88,    89,    90,     0,     0,    85,     0,     0,   268,    86,
      87,     0,    88,    89,    90,    92,    81,     0,     0,    82,
       0,     0,    81,    83,    84,    82,     0,    92,     0,    83,
      84,     0,     0,    85,     0,     0,     0,    86,    87,    85,
      88,    89,    90,   170,    87,     0,    88,    89,    90,     0,
       0,     0,     0,     0,     0,    92,   153,   154,   155,   156,
       0,    92,     0,     0,   157,     0,   158,   159,   160,   161,
     162,   163,   153,   154,   155,   156,     0,     0,     0,     0,
       0,   172,   158,   159,   160,   161,   162,   163,     0,   164,
       0,     0,     0,     0,     0,     0,     0,   153,   154,   155,
     156,     0,     0,     0,     0,   164,   184,   158,   159,   160,
     161,   162,   163,   153,   154,   155,   156,     0,     0,     0,
       0,     0,   216,   158,   159,   160,   161,   162,   163,     0,
     164,     0,     0,     0,     0,     0,     0,     0,   153,   154,
     155,   156,     0,     0,     0,     0,   164,   226,   158,   159,
     160,   161,   162,   163,   153,   154,   155,   156,     0,     0,
       0,     0,     0,   249,   158,   159,   160,   161,   162,   163,
       0,   164,     0,     0,     0,     0,     0,     0,     0,   153,
     154,   155,   156,     0,     0,     0,     0,   164,   269,   158,
     159,   160,   161,   162,   163,   153,   154,   155,   156,     0,
       0,     0,     0,     0,     0,   158,   159,   160,   161,   162,
     163,     0,   164,   155,   156,     0,     0,     0,     0,     0,
       0,   158,   159,   160,   161,   162,   163,     0,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164
};

static const yytype_int16 yycheck[] =
{
      71,    95,    82,    87,    14,    35,    90,    15,    35,     5,
      34,    91,     3,     4,     5,    46,    87,     8,     5,    90,
      15,    35,    14,    21,    95,    55,    15,    35,    55,   109,
       5,   111,   126,    51,    32,   129,   116,    55,    27,   119,
      35,    55,    52,   123,   124,   125,    42,    38,     5,    36,
      37,   122,   132,     9,    45,   126,     0,     5,   129,    51,
     131,    36,    37,    54,    55,    51,    35,    51,   148,    55,
      26,    55,    14,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    41,    55,    43,    36,    37,
      54,     5,    48,     3,     4,     5,    51,    52,     8,    55,
      55,    33,    50,    33,    36,     5,    36,   187,    64,    51,
      52,    41,    54,    52,    70,    55,    55,     3,     4,     5,
      49,    54,     8,    79,     5,   205,    51,    52,    38,    54,
      49,   211,   212,     5,    34,    45,    36,    37,    33,     5,
     220,   221,     3,    34,    54,    55,    10,   231,   232,    53,
     244,   245,    38,     3,     4,     5,    15,    43,     8,    45,
     231,   232,   242,    52,    49,    54,    50,     5,    54,   263,
     254,    54,   252,   244,   245,     3,     4,     5,    54,   259,
       8,    54,    15,   254,     5,     6,    54,    54,    38,    15,
       5,    11,   263,    43,    15,    45,    34,    47,    36,    37,
      21,     5,     5,    51,    54,     5,     5,     5,    50,    11,
      38,    32,    55,    54,    54,    54,     5,    45,     6,     7,
       8,     9,    15,    54,    54,    15,    54,    23,    16,    17,
      18,    19,    20,    21,    15,     6,     7,     8,     9,    16,
      17,    18,    19,    20,    21,    16,    17,    18,    19,    20,
      21,    39,    16,    17,    18,    19,    20,    21,    55,     6,
       7,     8,     9,    15,    15,    27,    15,    55,    39,    16,
      17,    18,    19,    20,    21,    15,     6,     7,     8,     9,
      55,    15,    15,    52,    55,    14,    16,    17,    18,    19,
      20,    21,    39,    15,    15,    15,    15,    15,    55,    15,
       6,     7,     8,     9,    15,    12,    48,     5,    55,    39,
      16,    17,    18,    19,    20,    21,    26,     6,     7,     8,
       9,    57,    15,    55,    79,    55,    64,    16,    17,    18,
      19,    20,    21,    39,    75,    95,   149,   105,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    55,
      39,    16,    17,    18,    19,    20,    21,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    55,    16,    17,    18,
      19,    20,    21,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    53,    -1,
      39,    16,    17,    18,    19,    20,    21,     6,     7,     8,
       9,    -1,    -1,    -1,    53,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    53,    -1,
      39,    16,    17,    18,    19,    20,    21,     6,     7,     8,
       9,    -1,    -1,    -1,    53,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    39,     5,    -1,    -1,     8,    -1,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    53,    -1,
      39,    -1,    22,    -1,    24,    25,    26,    27,    -1,    29,
      30,    31,     5,    -1,    53,     8,    -1,    -1,     5,    12,
      13,     8,    -1,    -1,    44,    12,    13,    -1,    -1,    22,
      -1,    -1,    -1,    26,    27,    22,    29,    30,    31,    26,
      27,    -1,    29,    30,    31,    32,     5,    40,    -1,     8,
      -1,    44,    -1,    12,    13,    -1,    -1,    44,     5,    -1,
      -1,     8,    -1,    22,    -1,    12,    13,    26,    27,    28,
      29,    30,    31,    -1,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    44,     5,    -1,    -1,     8,
      -1,    -1,     5,    12,    13,     8,    -1,    44,    -1,    12,
      13,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,    22,
      29,    30,    31,    26,    27,    -1,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    44,     6,     7,     8,     9,
      -1,    44,    -1,    -1,    14,    -1,    16,    17,    18,    19,
      20,    21,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    39,    15,    16,    17,    18,
      19,    20,    21,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    39,    15,    16,    17,
      18,    19,    20,    21,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    39,    15,    16,
      17,    18,    19,    20,    21,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    39,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    36,    41,    57,    58,    66,    86,    34,    67,
      46,     5,    59,    60,     0,    66,    86,     5,    36,    37,
      65,    73,    74,    86,    36,    65,    68,    69,    54,    61,
      42,    60,    73,    86,     5,    74,    86,    70,    34,    69,
      55,    49,    86,    54,     5,    71,    72,    49,    62,    63,
      65,    65,    75,    76,    52,    54,    15,    35,    33,    77,
      50,    63,     5,     5,    35,    55,     3,    75,    72,    34,
      78,    10,    84,    15,    76,    49,    53,    55,    65,    79,
      80,     5,     8,    12,    13,    22,    26,    27,    29,    30,
      31,    40,    44,    64,    83,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    50,    77,    81,    34,    80,    14,
      51,    52,    54,     3,     4,     5,     8,    38,    45,    54,
      64,    96,    54,    54,    54,    54,    87,    15,    15,    87,
      96,    54,    14,    51,    11,    83,    88,    84,     5,    82,
      43,    47,    96,     5,    96,    55,    85,    96,    52,    54,
      96,     5,    96,     6,     7,     8,     9,    14,    16,    17,
      18,    19,    20,    21,    39,     5,    64,    96,    96,    96,
      26,    32,    15,     5,    64,    43,    96,     5,    11,    50,
      15,    35,    54,    54,    15,    53,    15,    35,    55,    96,
      55,    85,    55,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    52,    55,    55,    55,    55,
      55,    54,    54,    55,    55,    54,    15,     5,    55,    55,
      14,    52,    96,    15,    53,    55,    15,    96,    15,    15,
      15,    23,    27,    96,    96,    15,    15,    55,    15,    15,
      96,    96,    52,    53,    87,    87,    55,    55,    15,    15,
      53,    96,    52,    55,    24,    25,    28,    15,    15,    14,
      53,    96,    15,    87,    15,    15,    96,    53,    25,    15,
      55,    15,    15
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    57,    57,    58,    58,
      59,    59,    61,    60,    62,    62,    63,    64,    64,    65,
      65,    65,    67,    66,    66,    66,    68,    68,    70,    69,
      71,    71,    72,    72,    72,    73,    73,    74,    75,    75,
      75,    76,    78,    77,    77,    79,    79,    81,    80,    82,
      82,    83,    84,    84,    85,    85,    86,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    89,    89,
      90,    91,    91,    91,    91,    91,    92,    92,    93,    94,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     3,     2,     1,     3,     0,
       2,     1,     0,     5,     2,     1,     3,     3,     3,     1,
       1,     1,     0,     4,     2,     0,     2,     1,     0,     4,
       3,     1,     1,     4,     4,     2,     1,     9,     3,     1,
       0,     2,     0,     4,     2,     2,     1,     0,     4,     3,
       1,     3,     4,     3,     3,     1,     8,     2,     1,     0,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     4,
       5,     6,     6,     5,     5,     6,     5,     8,    11,     5,
       5,     4,     7,    10,     5,     4,    10,     8,     8,     7,
       7,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     4,     7,     2,     2,
       3,     4,     1,     1
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
  case 2: /* program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 44 "control.y"
                                                      { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1599 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock GDeclBlock MainBlock  */
#line 45 "control.y"
                                            { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1605 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock MainBlock  */
#line 46 "control.y"
                                 { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1611 "y.tab.c"
    break;

  case 5: /* program: GDeclBlock FDefBlock MainBlock  */
#line 47 "control.y"
                                         { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1617 "y.tab.c"
    break;

  case 6: /* program: GDeclBlock MainBlock  */
#line 48 "control.y"
                               { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1623 "y.tab.c"
    break;

  case 7: /* program: MainBlock  */
#line 49 "control.y"
                    { ASTRoot = (yyvsp[0].no); }
#line 1629 "y.tab.c"
    break;

  case 8: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 52 "control.y"
                                        { (yyval.no) = (yyvsp[-1].no); }
#line 1635 "y.tab.c"
    break;

  case 9: /* TypeDefBlock: %empty  */
#line 53 "control.y"
                                        { (yyval.no) = NULL; }
#line 1641 "y.tab.c"
    break;

  case 10: /* TypeDefList: TypeDefList TypeDef  */
#line 56 "control.y"
                                  { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1647 "y.tab.c"
    break;

  case 11: /* TypeDefList: TypeDef  */
#line 57 "control.y"
                                  { (yyval.no) = (yyvsp[0].no); }
#line 1653 "y.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 60 "control.y"
             {TInstallEmpty((yyvsp[0].str));}
#line 1659 "y.tab.c"
    break;

  case 13: /* TypeDef: ID $@1 '{' FieldDeclList '}'  */
#line 60 "control.y"
                                                        {
            (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-4].str)), (yyvsp[-1].no));
            TSetFields((yyvsp[-4].str), buildFieldList((yyvsp[-1].no)));
          }
#line 1668 "y.tab.c"
    break;

  case 14: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 66 "control.y"
                                        { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1674 "y.tab.c"
    break;

  case 15: /* FieldDeclList: FieldDecl  */
#line 67 "control.y"
                                        { (yyval.no) = (yyvsp[0].no); }
#line 1680 "y.tab.c"
    break;

  case 16: /* FieldDecl: TypeName ID SEMICOLON  */
#line 70 "control.y"
                                  {
              (yyval.no) = makeVariableNode((yyvsp[-1].str));
              (yyval.no)->typeEntry = (yyvsp[-2].no)->typeEntry;
            }
#line 1689 "y.tab.c"
    break;

  case 17: /* Field: ID '.' ID  */
#line 76 "control.y"
                  {
          (yyval.no) = makeFieldAccessNode(makeVariableUseNode((yyvsp[-2].str)), (yyvsp[0].str));
        }
#line 1697 "y.tab.c"
    break;

  case 18: /* Field: Field '.' ID  */
#line 79 "control.y"
                     {
          (yyval.no) = makeFieldAccessNode((yyvsp[-2].no), (yyvsp[0].str));
        }
#line 1705 "y.tab.c"
    break;

  case 19: /* TypeName: INT  */
#line 84 "control.y"
                { (yyval.no) = makeTypeNode(0); }
#line 1711 "y.tab.c"
    break;

  case 20: /* TypeName: STR  */
#line 85 "control.y"
                { (yyval.no) = makeTypeNode(2); }
#line 1717 "y.tab.c"
    break;

  case 21: /* TypeName: ID  */
#line 86 "control.y"
                {
                  (yyval.no) = makeTypeNode(0);
                  (yyval.no)->typeEntry = TLookup((yyvsp[0].str));
                  if ((yyval.no)->typeEntry == NULL) {
                      printf("Semantic Error: Unknown type %s\n", (yyvsp[0].str));
                      exit(1);
                  }
                }
#line 1730 "y.tab.c"
    break;

  case 22: /* $@2: %empty  */
#line 96 "control.y"
                  {inLocalDecl = 0;}
#line 1736 "y.tab.c"
    break;

  case 23: /* GDeclBlock: DECL $@2 GdeclList ENDDECL  */
#line 96 "control.y"
                                                       {(yyval.no) = (yyvsp[-1].no); print((yyval.no));}
#line 1742 "y.tab.c"
    break;

  case 24: /* GDeclBlock: DECL ENDDECL  */
#line 97 "control.y"
                       {(yyval.no) = NULL;}
#line 1748 "y.tab.c"
    break;

  case 25: /* GDeclBlock: %empty  */
#line 98 "control.y"
          {(yyval.no) = NULL;}
#line 1754 "y.tab.c"
    break;

  case 26: /* GdeclList: GdeclList GDecl  */
#line 101 "control.y"
                             {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1760 "y.tab.c"
    break;

  case 27: /* GdeclList: GDecl  */
#line 102 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1766 "y.tab.c"
    break;

  case 28: /* $@3: %empty  */
#line 105 "control.y"
                 {current_type = (yyvsp[0].no)->typeEntry;}
#line 1772 "y.tab.c"
    break;

  case 29: /* GDecl: TypeName $@3 GidList SEMICOLON  */
#line 105 "control.y"
                                                                   {(yyval.no) = makeDeclNode((yyvsp[-3].no),(yyvsp[-1].no));}
#line 1778 "y.tab.c"
    break;

  case 30: /* GidList: GidList COMMA Gid  */
#line 108 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 1784 "y.tab.c"
    break;

  case 31: /* GidList: Gid  */
#line 109 "control.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 1790 "y.tab.c"
    break;

  case 32: /* Gid: ID  */
#line 112 "control.y"
         {(yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 0;}
#line 1796 "y.tab.c"
    break;

  case 33: /* Gid: ID '[' NUM ']'  */
#line 113 "control.y"
                      {(yyval.no) = makeArrayNode(NULL,makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 1802 "y.tab.c"
    break;

  case 34: /* Gid: ID '(' ParamList ')'  */
#line 114 "control.y"
                           {(yyval.no) = makeFnDeclNode(makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no)); ClearLST();}
#line 1808 "y.tab.c"
    break;

  case 35: /* FDefBlock: FDefBlock Fdef  */
#line 116 "control.y"
                           {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1814 "y.tab.c"
    break;

  case 36: /* FDefBlock: Fdef  */
#line 117 "control.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 1820 "y.tab.c"
    break;

  case 37: /* Fdef: TypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 120 "control.y"
                                                         { (yyval.no) = makeFnDefNode((yyvsp[-8].no), makeVariableNode((yyvsp[-7].str)), (yyvsp[-5].no), (yyvsp[-2].no), (yyvsp[-1].no)); }
#line 1826 "y.tab.c"
    break;

  case 38: /* ParamList: ParamList COMMA Param  */
#line 123 "control.y"
                                  {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 1832 "y.tab.c"
    break;

  case 39: /* ParamList: Param  */
#line 124 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1838 "y.tab.c"
    break;

  case 40: /* ParamList: %empty  */
#line 125 "control.y"
                        {(yyval.no) = NULL;}
#line 1844 "y.tab.c"
    break;

  case 41: /* Param: TypeName ID  */
#line 128 "control.y"
                    {(yyval.no) = makeParamNode((yyvsp[-1].no), makeVariableNode((yyvsp[0].str)));}
#line 1850 "y.tab.c"
    break;

  case 42: /* $@4: %empty  */
#line 131 "control.y"
                  {inLocalDecl = 1; inParamList = 0;}
#line 1856 "y.tab.c"
    break;

  case 43: /* LdeclBlock: DECL $@4 LDeclList ENDDECL  */
#line 131 "control.y"
                                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1862 "y.tab.c"
    break;

  case 44: /* LdeclBlock: DECL ENDDECL  */
#line 132 "control.y"
                       {(yyval.no) = NULL;}
#line 1868 "y.tab.c"
    break;

  case 45: /* LDeclList: LDeclList LDecl  */
#line 135 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1874 "y.tab.c"
    break;

  case 46: /* LDeclList: LDecl  */
#line 136 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1880 "y.tab.c"
    break;

  case 47: /* $@5: %empty  */
#line 139 "control.y"
                 {current_type = (yyvsp[0].no)->typeEntry;}
#line 1886 "y.tab.c"
    break;

  case 48: /* LDecl: TypeName $@5 IdList SEMICOLON  */
#line 139 "control.y"
                                                                  {(yyval.no) = makeDeclNode((yyvsp[-3].no),(yyvsp[-1].no));}
#line 1892 "y.tab.c"
    break;

  case 49: /* IdList: IdList COMMA ID  */
#line 142 "control.y"
                         {(yyval.no) = makeConnectNode((yyvsp[-2].no),makeVariableNode((yyvsp[0].str)));}
#line 1898 "y.tab.c"
    break;

  case 50: /* IdList: ID  */
#line 143 "control.y"
             {(yyval.no) = makeVariableNode((yyvsp[0].str));}
#line 1904 "y.tab.c"
    break;

  case 51: /* Retstmt: RETURNN expr SEMICOLON  */
#line 146 "control.y"
                                 { (yyval.no) = makeReturnNode((yyvsp[-1].no)); }
#line 1910 "y.tab.c"
    break;

  case 52: /* Body: BEGINN Slist Retstmt ENDD  */
#line 149 "control.y"
                                 { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[-1].no)); }
#line 1916 "y.tab.c"
    break;

  case 53: /* Body: BEGINN Retstmt ENDD  */
#line 150 "control.y"
                                 { (yyval.no) = (yyvsp[-1].no); }
#line 1922 "y.tab.c"
    break;

  case 54: /* ArgList: ArgList COMMA expr  */
#line 153 "control.y"
                             { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 1928 "y.tab.c"
    break;

  case 55: /* ArgList: expr  */
#line 154 "control.y"
               { (yyval.no) = (yyvsp[0].no); }
#line 1934 "y.tab.c"
    break;

  case 56: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 158 "control.y"
            {
                (yyval.no) = makeFnDefNode(makeTypeNode(0), makeVariableNode("main"), NULL, (yyvsp[-2].no), (yyvsp[-1].no));
            }
#line 1942 "y.tab.c"
    break;

  case 57: /* Slist: Slist Stmt  */
#line 163 "control.y"
                   {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1948 "y.tab.c"
    break;

  case 58: /* Slist: Stmt  */
#line 164 "control.y"
             {(yyval.no) = (yyvsp[0].no);}
#line 1954 "y.tab.c"
    break;

  case 59: /* Slist: %empty  */
#line 165 "control.y"
            {(yyval.no)=NULL;}
#line 1960 "y.tab.c"
    break;

  case 60: /* Stmt: InputStmt  */
#line 168 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1966 "y.tab.c"
    break;

  case 61: /* Stmt: OutputStmt  */
#line 169 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1972 "y.tab.c"
    break;

  case 62: /* Stmt: AsgStmt  */
#line 170 "control.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 1978 "y.tab.c"
    break;

  case 63: /* Stmt: IfStmt  */
#line 171 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1984 "y.tab.c"
    break;

  case 64: /* Stmt: WhileStmt  */
#line 172 "control.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 1990 "y.tab.c"
    break;

  case 65: /* Stmt: BREAKK SEMICOLON  */
#line 173 "control.y"
                           {(yyval.no) = makeBreakNode();}
#line 1996 "y.tab.c"
    break;

  case 66: /* Stmt: CONTINUEE SEMICOLON  */
#line 174 "control.y"
                              {(yyval.no) = makeContinueNode();}
#line 2002 "y.tab.c"
    break;

  case 67: /* Stmt: DoWhileStmt  */
#line 175 "control.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 2008 "y.tab.c"
    break;

  case 68: /* Stmt: RepeatStmt  */
#line 176 "control.y"
                     {(yyval.no) = (yyvsp[0].no);}
#line 2014 "y.tab.c"
    break;

  case 69: /* Stmt: ID '(' ')' SEMICOLON  */
#line 178 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)), NULL); }
#line 2020 "y.tab.c"
    break;

  case 70: /* Stmt: ID '(' ArgList ')' SEMICOLON  */
#line 180 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-4].str)), (yyvsp[-2].no)); }
#line 2026 "y.tab.c"
    break;

  case 71: /* Stmt: ID ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 181 "control.y"
                                            { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-5].str)), makeAllocNode(NULL)); }
#line 2032 "y.tab.c"
    break;

  case 72: /* Stmt: Field ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 182 "control.y"
                                               { (yyval.no) = makeAssignNode((yyvsp[-5].no), makeAllocNode(NULL)); }
#line 2038 "y.tab.c"
    break;

  case 73: /* Stmt: FREE '(' ID ')' SEMICOLON  */
#line 183 "control.y"
                                    { (yyval.no) = makeFreeNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2044 "y.tab.c"
    break;

  case 74: /* Stmt: FREE '(' Field ')' SEMICOLON  */
#line 184 "control.y"
                                       { (yyval.no) = makeFreeNode((yyvsp[-2].no)); }
#line 2050 "y.tab.c"
    break;

  case 75: /* Stmt: ID ASSIGN INITIALIZE '(' ')' SEMICOLON  */
#line 186 "control.y"
    { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-5].str)), makeInitializeNode()); }
#line 2056 "y.tab.c"
    break;

  case 76: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 189 "control.y"
                                   { (yyval.no) = makeReadNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2062 "y.tab.c"
    break;

  case 77: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 190 "control.y"
                                           { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-5].str)),(yyvsp[-3].no))); }
#line 2068 "y.tab.c"
    break;

  case 78: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 191 "control.y"
                                                     { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-8].str)),makeConnectNode((yyvsp[-6].no),(yyvsp[-3].no)))); }
#line 2074 "y.tab.c"
    break;

  case 79: /* InputStmt: READ '(' Field ')' SEMICOLON  */
#line 192 "control.y"
                                       { (yyval.no) = makeReadNode((yyvsp[-2].no)); }
#line 2080 "y.tab.c"
    break;

  case 80: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 195 "control.y"
                                       {(yyval.no) = makeWriteNode((yyvsp[-2].no));}
#line 2086 "y.tab.c"
    break;

  case 81: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 198 "control.y"
                                   { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no)); }
#line 2092 "y.tab.c"
    break;

  case 82: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 199 "control.y"
                                              { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].no)), (yyvsp[-1].no)); }
#line 2098 "y.tab.c"
    break;

  case 83: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 200 "control.y"
                                                        { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-9].str)), makeConnectNode((yyvsp[-7].no),(yyvsp[-4].no))), (yyvsp[-1].no)); }
#line 2104 "y.tab.c"
    break;

  case 84: /* AsgStmt: MUL expr ASSIGN expr SEMICOLON  */
#line 201 "control.y"
                                         { (yyval.no) = makeAssignNode(makeDerefNode((yyvsp[-3].no)), (yyvsp[-1].no)); }
#line 2110 "y.tab.c"
    break;

  case 85: /* AsgStmt: Field ASSIGN expr SEMICOLON  */
#line 202 "control.y"
                                      { (yyval.no) = makeAssignNode((yyvsp[-3].no), (yyvsp[-1].no)); }
#line 2116 "y.tab.c"
    break;

  case 86: /* IfStmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 205 "control.y"
                                                             {(yyval.no) = makeIfElseNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 2122 "y.tab.c"
    break;

  case 87: /* IfStmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 206 "control.y"
                                                   {(yyval.no) = makeIfNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2128 "y.tab.c"
    break;

  case 88: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 209 "control.y"
                                                         {(yyval.no) = makeWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2134 "y.tab.c"
    break;

  case 89: /* RepeatStmt: REPEATT Slist UNTILL '(' expr ')' SEMICOLON  */
#line 212 "control.y"
                                                            {(yyval.no)=makeRepeatNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2140 "y.tab.c"
    break;

  case 90: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 215 "control.y"
                                                        {(yyval.no)=makeDoWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2146 "y.tab.c"
    break;

  case 91: /* expr: expr PLUS expr  */
#line 218 "control.y"
                                        {(yyval.no) = makeOperatorNode('+',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2152 "y.tab.c"
    break;

  case 92: /* expr: expr MINUS expr  */
#line 219 "control.y"
                                        {(yyval.no) = makeOperatorNode('-',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2158 "y.tab.c"
    break;

  case 93: /* expr: expr MUL expr  */
#line 220 "control.y"
                                                {(yyval.no) = makeOperatorNode('*',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2164 "y.tab.c"
    break;

  case 94: /* expr: expr DIV expr  */
#line 221 "control.y"
                                                {(yyval.no) = makeOperatorNode('/',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2170 "y.tab.c"
    break;

  case 95: /* expr: expr MOD expr  */
#line 222 "control.y"
                                                {(yyval.no) = makeOperatorNode('%',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2176 "y.tab.c"
    break;

  case 96: /* expr: '(' expr ')'  */
#line 223 "control.y"
                                                {(yyval.no) = (yyvsp[-1].no);}
#line 2182 "y.tab.c"
    break;

  case 97: /* expr: NUM  */
#line 224 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2188 "y.tab.c"
    break;

  case 98: /* expr: ID  */
#line 225 "control.y"
                                                        {(yyval.no) = makeVariableUseNode((yyvsp[0].str));}
#line 2194 "y.tab.c"
    break;

  case 99: /* expr: STRINGG  */
#line 226 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2200 "y.tab.c"
    break;

  case 100: /* expr: expr LT expr  */
#line 227 "control.y"
                                                {(yyval.no) = makeCOperatorNode('<',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2206 "y.tab.c"
    break;

  case 101: /* expr: expr GT expr  */
#line 228 "control.y"
                                {(yyval.no) = makeCOperatorNode('>',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2212 "y.tab.c"
    break;

  case 102: /* expr: expr LE expr  */
#line 229 "control.y"
                                {(yyval.no) = makeCOperatorNode('L',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2218 "y.tab.c"
    break;

  case 103: /* expr: expr GE expr  */
#line 230 "control.y"
                                {(yyval.no) = makeCOperatorNode('G',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2224 "y.tab.c"
    break;

  case 104: /* expr: expr NE expr  */
#line 231 "control.y"
                                {(yyval.no) = makeCOperatorNode('N',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2230 "y.tab.c"
    break;

  case 105: /* expr: expr EQ expr  */
#line 232 "control.y"
                                {(yyval.no) = makeCOperatorNode('E',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2236 "y.tab.c"
    break;

  case 106: /* expr: ID '[' expr ']'  */
#line 233 "control.y"
                                                {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no));}
#line 2242 "y.tab.c"
    break;

  case 107: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 234 "control.y"
                                        {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no)));}
#line 2248 "y.tab.c"
    break;

  case 108: /* expr: AMPERSAND ID  */
#line 235 "control.y"
                                                {(yyval.no) = makeAddrNode((tnode*)makeVariableUseNode((yyvsp[0].str)));}
#line 2254 "y.tab.c"
    break;

  case 109: /* expr: MUL expr  */
#line 236 "control.y"
                                { (yyval.no) = makeDerefNode((yyvsp[0].no)); }
#line 2260 "y.tab.c"
    break;

  case 110: /* expr: ID '(' ')'  */
#line 237 "control.y"
                                                        {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-2].str)),NULL);}
#line 2266 "y.tab.c"
    break;

  case 111: /* expr: ID '(' ArgList ')'  */
#line 238 "control.y"
                                                {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 2272 "y.tab.c"
    break;

  case 112: /* expr: Field  */
#line 239 "control.y"
                  { (yyval.no) = (yyvsp[0].no); }
#line 2278 "y.tab.c"
    break;

  case 113: /* expr: NULLL  */
#line 240 "control.y"
                 { (yyval.no) = makeConstantNode(0); (yyval.no)->typeEntry = TLookup("null"); }
#line 2284 "y.tab.c"
    break;


#line 2288 "y.tab.c"

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

#line 243 "control.y"


int yyerror(char const *s)
{
    printf("yyerror %s\n",s);
    return 0;
}

int main(void)
{
	initTypeTable();
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
    return 0;
}
