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
	int yyerror(const char*);
	int yylex(void);
	extern FILE *yyin;

#line 84 "y.tab.c"

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
    UNARY = 294                    /* UNARY  */
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
#define UNARY 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "control.y"

	struct tnode *no;
	char* str;

#line 220 "y.tab.c"

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
  YYSYMBOL_UNARY = 39,                     /* UNARY  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_Declarations = 46,              /* Declarations  */
  YYSYMBOL_DeclList = 47,                  /* DeclList  */
  YYSYMBOL_Decl = 48,                      /* Decl  */
  YYSYMBOL_DeclID = 49,                    /* DeclID  */
  YYSYMBOL_Type = 50,                      /* Type  */
  YYSYMBOL_Varlist = 51,                   /* Varlist  */
  YYSYMBOL_Slist = 52,                     /* Slist  */
  YYSYMBOL_Stmt = 53,                      /* Stmt  */
  YYSYMBOL_InputStmt = 54,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 55,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 56,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 57,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 58,                 /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 59,                /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 60,               /* DoWhileStmt  */
  YYSYMBOL_expr = 61                       /* expr  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      42,    43,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    35,    35,    36,    39,    40,    43,    44,    47,    50,
      51,    53,    54,    57,    58,    59,    60,    61,    62,    65,
      66,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      80,    81,    82,    85,    88,    89,    90,    91,    94,    95,
      98,   101,   104,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124
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
  "AMPERSAND", "UNARY", "'['", "']'", "'('", "')'", "$accept", "program",
  "Declarations", "DeclList", "Decl", "DeclID", "Type", "Varlist", "Slist",
  "Stmt", "InputStmt", "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt",
  "RepeatStmt", "DoWhileStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-36)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -23,   -21,    11,     7,   -36,   -36,   -36,    13,   -36,     1,
     -36,   329,   -36,   -36,   -36,    27,   -16,   -10,   -12,    18,
      33,    -9,    17,    25,    26,   399,    42,    54,   399,   341,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,    74,
     -36,     1,    18,    18,   -36,   -36,    38,    18,    84,    18,
     431,   -36,    86,    18,    18,    18,   405,   -36,   -36,   290,
      77,   -36,    52,    55,   447,   172,    18,   118,   -36,    45,
      18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
      18,    15,    65,   108,   124,    57,    58,   -36,    56,    98,
     -36,   -11,   188,   -36,   509,   509,   118,   118,   463,   198,
     198,   198,   198,   198,   198,    18,    89,    91,    87,    80,
      18,    18,   106,    70,    18,    18,    72,   -36,   214,   -36,
     -36,   399,   399,   140,   156,    78,    81,   479,   230,    18,
      47,   302,   361,    19,   105,   -36,   119,   -36,   136,   256,
      18,   137,   399,   138,   139,   -36,   -36,   114,    18,   -36,
     272,   -36,   372,   -36,   -36,   -36,   495,   123,   153,   -36,
     154,   -36,   -36
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     5,    11,    12,     0,     7,     0,
       1,     0,     4,     6,     9,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    29,    28,    10,     0,
       8,     0,     0,     0,    48,    50,    49,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,    26,    27,     0,
       0,    19,     0,    13,     0,     0,     0,    60,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    15,     0,
      34,     0,     0,    47,    43,    44,    45,    46,     0,    51,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    37,     0,    30,
      33,     0,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    35,     0,     0,
       0,     0,     0,     0,     0,    42,    41,     0,     0,    58,
       0,    31,     0,    39,    40,    16,     0,     0,     0,    36,
       0,    38,    32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -36,   -36,   -36,   -36,   163,   130,   -36,   -36,   -24,   -29,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     7,     8,    16,     9,    17,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    56,    42,   114,    59,    40,    14,    64,    65,    15,
       1,    10,    67,     4,    69,     5,     6,    11,    82,    83,
      84,    44,    45,    46,    39,    41,    47,    61,    43,   115,
      61,    92,    38,    52,   145,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   122,    12,    51,     5,
       6,    70,    71,    72,    73,   105,    48,    57,   106,    53,
      49,    75,    76,    77,    78,    79,    80,    54,    55,    58,
     118,    70,    71,    72,    73,   123,   124,    62,    66,   127,
     128,    75,    76,    77,    78,    79,    80,   140,    93,    68,
     141,    81,    87,    88,   139,    89,   112,   131,   132,   110,
     111,   113,    61,    61,   119,   150,   120,   122,   107,   125,
     121,   126,   129,   156,    70,    71,    72,    73,   152,   135,
     146,   136,   147,    61,    75,    76,    77,    78,    79,    80,
      70,    71,    72,    73,    75,    76,    77,    78,    79,    80,
      75,    76,    77,    78,    79,    80,    70,    71,    72,    73,
     148,   108,   151,   153,   154,   155,    75,    76,    77,    78,
      79,    80,    70,    71,    72,    73,   160,   109,   161,   162,
      13,    63,    75,    76,    77,    78,    79,    80,    70,    71,
      72,    73,     0,   133,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    70,    71,    72,    73,     0,   134,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
       0,     0,     0,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,     0,     0,     0,     0,     0,   116,
      75,    76,    77,    78,    79,    80,    70,    71,    72,    73,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,     0,     0,     0,   130,     0,     0,     0,     0,
       0,     0,    70,    71,    72,    73,     0,     0,     0,     0,
       0,   138,    75,    76,    77,    78,    79,    80,    70,    71,
      72,    73,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,     0,    18,     0,   149,    19,     0,
       0,     0,    21,    22,     0,     0,     0,    18,     0,     0,
      19,     0,    23,   157,    21,    22,    24,    25,     0,    26,
      27,    28,    86,     0,    23,     0,   142,   143,    24,    25,
       0,    26,    27,    28,    18,     0,     0,    19,     0,     0,
      20,    21,    22,     0,     0,     0,    18,     0,     0,    19,
       0,    23,    60,    21,    22,    24,    25,     0,    26,    27,
      28,     0,     0,    23,     0,     0,    18,    24,    25,    19,
      26,    27,    28,    21,    22,     0,     0,    18,     0,     0,
      19,     0,     0,    23,    21,    22,     0,    24,    25,   144,
      26,    27,    28,     0,    23,     0,     0,   158,    24,    25,
       0,    26,    27,    28,    18,     0,     0,    19,     0,     0,
      18,    21,    22,    19,     0,     0,     0,    21,    22,     0,
       0,    23,     0,     0,     0,    24,    25,    23,    26,    27,
      28,    85,    25,     0,    26,    27,    28,    70,    71,    72,
      73,     0,     0,     0,     0,    74,     0,    75,    76,    77,
      78,    79,    80,    70,    71,    72,    73,     0,     0,     0,
       0,     0,    90,    75,    76,    77,    78,    79,    80,    70,
      71,    72,    73,     0,     0,     0,     0,     0,   117,    75,
      76,    77,    78,    79,    80,    70,    71,    72,    73,     0,
       0,     0,     0,     0,   137,    75,    76,    77,    78,    79,
      80,    70,    71,    72,    73,     0,     0,     0,     0,     0,
     159,    75,    76,    77,    78,    79,    80,    72,    73,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80
};

static const yytype_int16 yycheck[] =
{
      29,    25,    14,    14,    28,    15,     5,    42,    43,     8,
      33,     0,    47,    34,    49,    36,    37,    10,    53,    54,
      55,     3,     4,     5,    40,    35,     8,    56,    40,    40,
      59,    66,     5,    42,    15,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    27,    34,    15,    36,
      37,     6,     7,     8,     9,    40,    38,    15,    43,    42,
      42,    16,    17,    18,    19,    20,    21,    42,    42,    15,
     105,     6,     7,     8,     9,   110,   111,     3,    40,   114,
     115,    16,    17,    18,    19,    20,    21,    40,    43,     5,
      43,     5,    15,    41,   129,    40,    40,   121,   122,    42,
      42,     3,   131,   132,    15,   140,    15,    27,    43,     3,
      23,    41,    40,   148,     6,     7,     8,     9,   142,    41,
      15,    40,     3,   152,    16,    17,    18,    19,    20,    21,
       6,     7,     8,     9,    16,    17,    18,    19,    20,    21,
      16,    17,    18,    19,    20,    21,     6,     7,     8,     9,
      14,    43,    15,    15,    15,    41,    16,    17,    18,    19,
      20,    21,     6,     7,     8,     9,    43,    43,    15,    15,
       7,    41,    16,    17,    18,    19,    20,    21,     6,     7,
       8,     9,    -1,    43,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,     6,     7,     8,     9,    -1,    43,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    41,    16,    17,    18,    19,    20,    21,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    41,
      16,    17,    18,    19,    20,    21,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    41,    16,    17,    18,    19,    20,    21,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,     5,    -1,    41,     8,    -1,
      -1,    -1,    12,    13,    -1,    -1,    -1,     5,    -1,    -1,
       8,    -1,    22,    41,    12,    13,    26,    27,    -1,    29,
      30,    31,    32,    -1,    22,    -1,    24,    25,    26,    27,
      -1,    29,    30,    31,     5,    -1,    -1,     8,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,     5,    -1,    -1,     8,
      -1,    22,    11,    12,    13,    26,    27,    -1,    29,    30,
      31,    -1,    -1,    22,    -1,    -1,     5,    26,    27,     8,
      29,    30,    31,    12,    13,    -1,    -1,     5,    -1,    -1,
       8,    -1,    -1,    22,    12,    13,    -1,    26,    27,    28,
      29,    30,    31,    -1,    22,    -1,    -1,    25,    26,    27,
      -1,    29,    30,    31,     5,    -1,    -1,     8,    -1,    -1,
       5,    12,    13,     8,    -1,    -1,    -1,    12,    13,    -1,
      -1,    22,    -1,    -1,    -1,    26,    27,    22,    29,    30,
      31,    26,    27,    -1,    29,    30,    31,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    -1,    16,    17,    18,
      19,    20,    21,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    45,    46,    34,    36,    37,    47,    48,    50,
       0,    10,    34,    48,     5,     8,    49,    51,     5,     8,
      11,    12,    13,    22,    26,    27,    29,    30,    31,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     5,    40,
      15,    35,    14,    40,     3,     4,     5,     8,    38,    42,
      61,    15,    42,    42,    42,    42,    52,    15,    15,    52,
      11,    53,     3,    49,    61,    61,    40,    61,     5,    61,
       6,     7,     8,     9,    14,    16,    17,    18,    19,    20,
      21,     5,    61,    61,    61,    26,    32,    15,    41,    40,
      15,    41,    61,    43,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    40,    43,    43,    43,    43,
      42,    42,    40,     3,    14,    40,    41,    15,    61,    15,
      15,    23,    27,    61,    61,     3,    41,    61,    61,    40,
      41,    52,    52,    43,    43,    41,    40,    15,    41,    61,
      40,    43,    24,    25,    28,    15,    15,     3,    14,    41,
      61,    15,    52,    15,    15,    41,    61,    41,    25,    15,
      43,    15,    15
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    47,    47,    48,    49,
      49,    50,    50,    51,    51,    51,    51,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    55,    56,    56,    56,    56,    57,    57,
      58,    59,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     2,     2,     1,     3,     1,
       2,     1,     1,     3,     6,     4,     9,     7,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       5,     8,    11,     5,     4,     7,    10,     5,    10,     8,
       8,     7,     7,     3,     3,     3,     3,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     4,     7,     2,
       2
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
  case 2: /* program: Declarations BEGINN Slist ENDD SEMICOLON  */
#line 35 "control.y"
                                                   { (yyval.no) = makeConnectNode((yyvsp[-4].no),(yyvsp[-2].no)); print((yyval.no)); printSymbolTable(); generate((yyval.no)); exit(0);}
#line 1431 "y.tab.c"
    break;

  case 3: /* program: Declarations BEGINN ENDD SEMICOLON  */
#line 36 "control.y"
                                             {printSymbolTable(); (yyval.no)=NULL;}
#line 1437 "y.tab.c"
    break;

  case 4: /* Declarations: DECL DeclList ENDDECL  */
#line 39 "control.y"
                                     {(yyval.no) = (yyvsp[-1].no); parseDecl((yyvsp[-1].no));}
#line 1443 "y.tab.c"
    break;

  case 5: /* Declarations: DECL ENDDECL  */
#line 40 "control.y"
                       {(yyval.no) = NULL;}
#line 1449 "y.tab.c"
    break;

  case 6: /* DeclList: DeclList Decl  */
#line 43 "control.y"
                         { (yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no)); }
#line 1455 "y.tab.c"
    break;

  case 7: /* DeclList: Decl  */
#line 44 "control.y"
               { (yyval.no) = (yyvsp[0].no); }
#line 1461 "y.tab.c"
    break;

  case 8: /* Decl: Type Varlist SEMICOLON  */
#line 47 "control.y"
                              { (yyval.no) = makeDeclNode((yyvsp[-2].no), (yyvsp[-1].no)); }
#line 1467 "y.tab.c"
    break;

  case 9: /* DeclID: ID  */
#line 50 "control.y"
            { (yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 0; }
#line 1473 "y.tab.c"
    break;

  case 10: /* DeclID: MUL ID  */
#line 51 "control.y"
                 { (yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 1; }
#line 1479 "y.tab.c"
    break;

  case 11: /* Type: INT  */
#line 53 "control.y"
           {(yyval.no) = makeTypeNode(0); }
#line 1485 "y.tab.c"
    break;

  case 12: /* Type: STR  */
#line 54 "control.y"
               {(yyval.no) = makeTypeNode(2); }
#line 1491 "y.tab.c"
    break;

  case 13: /* Varlist: Varlist COMMA DeclID  */
#line 57 "control.y"
                               { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 1497 "y.tab.c"
    break;

  case 14: /* Varlist: Varlist COMMA DeclID '[' NUM ']'  */
#line 58 "control.y"
                                        { (yyval.no) = makeArrayNode((yyvsp[-5].no),(yyvsp[-3].no),(yyvsp[-1].no)); }
#line 1503 "y.tab.c"
    break;

  case 15: /* Varlist: DeclID '[' NUM ']'  */
#line 59 "control.y"
                          { (yyval.no) = makeArrayNode(NULL,(yyvsp[-3].no),(yyvsp[-1].no)); }
#line 1509 "y.tab.c"
    break;

  case 16: /* Varlist: Varlist COMMA DeclID '[' NUM ']' '[' NUM ']'  */
#line 60 "control.y"
                                                 { (yyval.no) = makeArrayNode((yyvsp[-8].no),(yyvsp[-6].no),makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no))); }
#line 1515 "y.tab.c"
    break;

  case 17: /* Varlist: DeclID '[' NUM ']' '[' NUM ']'  */
#line 61 "control.y"
                                   { (yyval.no) = makeArrayNode(NULL,(yyvsp[-6].no),makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no))); }
#line 1521 "y.tab.c"
    break;

  case 18: /* Varlist: DeclID  */
#line 62 "control.y"
                 { (yyval.no) = (yyvsp[0].no); }
#line 1527 "y.tab.c"
    break;

  case 19: /* Slist: Slist Stmt  */
#line 65 "control.y"
                   {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1533 "y.tab.c"
    break;

  case 20: /* Slist: Stmt  */
#line 66 "control.y"
             {(yyval.no) = (yyvsp[0].no);}
#line 1539 "y.tab.c"
    break;

  case 21: /* Stmt: InputStmt  */
#line 69 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1545 "y.tab.c"
    break;

  case 22: /* Stmt: OutputStmt  */
#line 70 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1551 "y.tab.c"
    break;

  case 23: /* Stmt: AsgStmt  */
#line 71 "control.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 1557 "y.tab.c"
    break;

  case 24: /* Stmt: IfStmt  */
#line 72 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1563 "y.tab.c"
    break;

  case 25: /* Stmt: WhileStmt  */
#line 73 "control.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 1569 "y.tab.c"
    break;

  case 26: /* Stmt: BREAKK SEMICOLON  */
#line 74 "control.y"
                           {(yyval.no) = makeBreakNode();}
#line 1575 "y.tab.c"
    break;

  case 27: /* Stmt: CONTINUEE SEMICOLON  */
#line 75 "control.y"
                              {(yyval.no) = makeContinueNode();}
#line 1581 "y.tab.c"
    break;

  case 28: /* Stmt: DoWhileStmt  */
#line 76 "control.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1587 "y.tab.c"
    break;

  case 29: /* Stmt: RepeatStmt  */
#line 77 "control.y"
                     {(yyval.no) = (yyvsp[0].no);}
#line 1593 "y.tab.c"
    break;

  case 30: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 80 "control.y"
                                   { (yyval.no) = makeReadNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 1599 "y.tab.c"
    break;

  case 31: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 81 "control.y"
                                           { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-5].str)),(yyvsp[-3].no))); }
#line 1605 "y.tab.c"
    break;

  case 32: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 82 "control.y"
                                                     { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-8].str)),makeConnectNode((yyvsp[-6].no),(yyvsp[-3].no)))); }
#line 1611 "y.tab.c"
    break;

  case 33: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 85 "control.y"
                                       {(yyval.no) = makeWriteNode((yyvsp[-2].no));}
#line 1617 "y.tab.c"
    break;

  case 34: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 88 "control.y"
                                   { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no)); }
#line 1623 "y.tab.c"
    break;

  case 35: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 89 "control.y"
                                              { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].no)), (yyvsp[-1].no)); }
#line 1629 "y.tab.c"
    break;

  case 36: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 90 "control.y"
                                                        { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-9].str)), makeConnectNode((yyvsp[-7].no),(yyvsp[-4].no))), (yyvsp[-1].no)); }
#line 1635 "y.tab.c"
    break;

  case 37: /* AsgStmt: MUL expr ASSIGN expr SEMICOLON  */
#line 91 "control.y"
                                         { (yyval.no) = makeAssignNode(makeDerefNode((yyvsp[-3].no)), (yyvsp[-1].no)); }
#line 1641 "y.tab.c"
    break;

  case 38: /* IfStmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 94 "control.y"
                                                             {(yyval.no) = makeIfElseNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 1647 "y.tab.c"
    break;

  case 39: /* IfStmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 95 "control.y"
                                                   {(yyval.no) = makeIfNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 1653 "y.tab.c"
    break;

  case 40: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 98 "control.y"
                                                         {(yyval.no) = makeWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 1659 "y.tab.c"
    break;

  case 41: /* RepeatStmt: REPEATT Slist UNTILL '(' expr ')' SEMICOLON  */
#line 101 "control.y"
                                                            {(yyval.no)=makeRepeatNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 1665 "y.tab.c"
    break;

  case 42: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 104 "control.y"
                                                        {(yyval.no)=makeDoWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 1671 "y.tab.c"
    break;

  case 43: /* expr: expr PLUS expr  */
#line 107 "control.y"
                                        {(yyval.no) = makeOperatorNode('+',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1677 "y.tab.c"
    break;

  case 44: /* expr: expr MINUS expr  */
#line 108 "control.y"
                                        {(yyval.no) = makeOperatorNode('-',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1683 "y.tab.c"
    break;

  case 45: /* expr: expr MUL expr  */
#line 109 "control.y"
                                                {(yyval.no) = makeOperatorNode('*',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1689 "y.tab.c"
    break;

  case 46: /* expr: expr DIV expr  */
#line 110 "control.y"
                                                {(yyval.no) = makeOperatorNode('/',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1695 "y.tab.c"
    break;

  case 47: /* expr: '(' expr ')'  */
#line 111 "control.y"
                                                {(yyval.no) = (yyvsp[-1].no);}
#line 1701 "y.tab.c"
    break;

  case 48: /* expr: NUM  */
#line 112 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1707 "y.tab.c"
    break;

  case 49: /* expr: ID  */
#line 113 "control.y"
                                                        {(yyval.no) = makeVariableUseNode((yyvsp[0].str));}
#line 1713 "y.tab.c"
    break;

  case 50: /* expr: STRINGG  */
#line 114 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1719 "y.tab.c"
    break;

  case 51: /* expr: expr LT expr  */
#line 115 "control.y"
                                                {(yyval.no) = makeCOperatorNode('<',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1725 "y.tab.c"
    break;

  case 52: /* expr: expr GT expr  */
#line 116 "control.y"
                                {(yyval.no) = makeCOperatorNode('>',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1731 "y.tab.c"
    break;

  case 53: /* expr: expr LE expr  */
#line 117 "control.y"
                                {(yyval.no) = makeCOperatorNode('L',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1737 "y.tab.c"
    break;

  case 54: /* expr: expr GE expr  */
#line 118 "control.y"
                                {(yyval.no) = makeCOperatorNode('G',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1743 "y.tab.c"
    break;

  case 55: /* expr: expr NE expr  */
#line 119 "control.y"
                                {(yyval.no) = makeCOperatorNode('N',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1749 "y.tab.c"
    break;

  case 56: /* expr: expr EQ expr  */
#line 120 "control.y"
                                {(yyval.no) = makeCOperatorNode('E',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1755 "y.tab.c"
    break;

  case 57: /* expr: ID '[' expr ']'  */
#line 121 "control.y"
                                                {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no));}
#line 1761 "y.tab.c"
    break;

  case 58: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 122 "control.y"
                                        {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no)));}
#line 1767 "y.tab.c"
    break;

  case 59: /* expr: AMPERSAND ID  */
#line 123 "control.y"
                                                {(yyval.no) = makeAddrNode((tnode*)makeVariableUseNode((yyvsp[0].str)));}
#line 1773 "y.tab.c"
    break;

  case 60: /* expr: MUL expr  */
#line 124 "control.y"
                                { (yyval.no) = makeDerefNode((yyvsp[0].no)); }
#line 1779 "y.tab.c"
    break;


#line 1783 "y.tab.c"

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

#line 127 "control.y"


int yyerror(char const *s)
{
    printf("yyerror %s",s);
    return 0;
}

int main(void)
{
	FILE *inputFile = fopen("input.txt","r");
	yyin = inputFile;
	yyparse();
	return 0;
}
