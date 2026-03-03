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
	int current_type;
	int yyerror(const char*);
	int yylex(void);
	extern FILE *yyin;

#line 85 "y.tab.c"

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
    UNARY = 295                    /* UNARY  */
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
#define UNARY 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "control.y"

	struct tnode *no;
	char* str;

#line 223 "y.tab.c"

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
  YYSYMBOL_UNARY = 40,                     /* UNARY  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_program = 48,                   /* program  */
  YYSYMBOL_GDeclBlock = 49,                /* GDeclBlock  */
  YYSYMBOL_GdeclList = 50,                 /* GdeclList  */
  YYSYMBOL_GDecl = 51,                     /* GDecl  */
  YYSYMBOL_52_1 = 52,                      /* $@1  */
  YYSYMBOL_GidList = 53,                   /* GidList  */
  YYSYMBOL_Gid = 54,                       /* Gid  */
  YYSYMBOL_FDefBlock = 55,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 56,                      /* Fdef  */
  YYSYMBOL_ParamList = 57,                 /* ParamList  */
  YYSYMBOL_Param = 58,                     /* Param  */
  YYSYMBOL_LdeclBlock = 59,                /* LdeclBlock  */
  YYSYMBOL_LDeclList = 60,                 /* LDeclList  */
  YYSYMBOL_LDecl = 61,                     /* LDecl  */
  YYSYMBOL_62_2 = 62,                      /* $@2  */
  YYSYMBOL_IdList = 63,                    /* IdList  */
  YYSYMBOL_Body = 64,                      /* Body  */
  YYSYMBOL_ArgList = 65,                   /* ArgList  */
  YYSYMBOL_MainBlock = 66,                 /* MainBlock  */
  YYSYMBOL_67_3 = 67,                      /* $@3  */
  YYSYMBOL_Declarations = 68,              /* Declarations  */
  YYSYMBOL_DeclList = 69,                  /* DeclList  */
  YYSYMBOL_Decl = 70,                      /* Decl  */
  YYSYMBOL_71_4 = 71,                      /* $@4  */
  YYSYMBOL_DeclID = 72,                    /* DeclID  */
  YYSYMBOL_Type = 73,                      /* Type  */
  YYSYMBOL_Varlist = 74,                   /* Varlist  */
  YYSYMBOL_Slist = 75,                     /* Slist  */
  YYSYMBOL_Stmt = 76,                      /* Stmt  */
  YYSYMBOL_InputStmt = 77,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 78,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 79,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 80,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 81,                 /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 82,                /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 83,               /* DoWhileStmt  */
  YYSYMBOL_expr = 84                       /* expr  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   640

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      43,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    38,    39,    42,    43,    45,    46,    49,
      49,    52,    53,    56,    57,    58,    60,    61,    64,    66,
      67,    68,    71,    74,    75,    78,    79,    82,    82,    85,
      86,    89,    92,    93,    96,    96,    97,   100,   101,   104,
     105,   108,   108,   111,   112,   114,   115,   118,   119,   120,
     121,   122,   123,   126,   127,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   141,   142,   143,   146,   149,   150,
     151,   152,   155,   156,   159,   162,   165,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188
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
  "AMPERSAND", "MOD", "UNARY", "'['", "']'", "'('", "')'", "'{'", "'}'",
  "$accept", "program", "GDeclBlock", "GdeclList", "GDecl", "$@1",
  "GidList", "Gid", "FDefBlock", "Fdef", "ParamList", "Param",
  "LdeclBlock", "LDeclList", "LDecl", "$@2", "IdList", "Body", "ArgList",
  "MainBlock", "$@3", "Declarations", "DeclList", "Decl", "$@4", "DeclID",
  "Type", "Varlist", "Slist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt",
  "IfStmt", "WhileStmt", "RepeatStmt", "DoWhileStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-65)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-42)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,   122,     9,    76,   -65,    10,    18,   -65,   -65,   131,
     -65,   140,   -65,    27,   -65,   156,    76,   -65,   -65,    57,
      56,    82,   -65,   -65,   -65,   -65,   -65,   -65,    93,    55,
     -65,   -65,   -65,    63,    92,   582,    81,    -8,   -65,   -65,
     109,    87,     4,     6,   -65,     3,    28,    95,    97,   104,
     105,   582,   120,   145,   582,   538,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   159,     6,   -65,    93,   -65,   163,
     -65,    55,   -31,   -65,   170,    28,    28,   -65,   -65,    86,
      28,   186,    28,   383,   189,    28,    28,    28,   609,   -65,
     -65,   500,   191,   -65,   136,    26,   -65,   153,   171,     6,
     166,   -65,   399,   254,    28,    21,   -65,   -65,    66,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    52,   125,   164,   180,   177,   178,   -65,   -65,   -65,
     172,   211,   -65,   190,   -65,    16,   270,   -65,    53,   481,
     -65,    60,    60,   100,   100,   424,   134,   134,   134,   134,
     134,   134,   100,    28,   207,   220,   213,   210,    28,    28,
     235,   197,   168,   582,    28,    28,   199,    28,   -65,   -65,
     297,   -65,   -65,   582,   582,   209,   225,   205,   208,   -65,
     173,   -65,   -65,   204,   582,   440,   313,    28,   481,    67,
     511,   549,    75,   236,   -65,   249,   -65,   -65,   250,   -65,
     -65,   240,   340,    28,   241,   582,   242,   243,   -65,   -65,
     217,   -65,    23,    28,   -65,   356,   -65,   576,   -65,   -65,
     -65,   -65,   260,   465,   222,   252,   -65,   -65,   253,   -65,
     -65
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     6,    45,    46,     0,
       8,     0,    40,     9,     1,     0,     0,    17,     3,     0,
       0,     0,     5,     7,     9,    37,    39,    41,     0,     0,
      38,    16,     2,     0,     0,     0,    13,     0,    12,    43,
       0,    52,     0,    21,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,    59,    63,    62,     0,    21,    10,     0,    44,     0,
      42,     0,     0,    20,     0,     0,     0,    83,    85,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      61,     0,     0,    53,     0,     0,    11,     0,    47,     0,
       0,    22,     0,     0,     0,     0,    95,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    14,    15,
      49,     0,    19,     0,    68,     0,     0,    96,     0,    33,
      82,    77,    78,    79,    80,     0,    86,    87,    88,    89,
      90,    91,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    97,    71,
       0,    64,    67,     0,     0,     0,     0,     0,    48,    24,
       0,    26,    27,     0,    31,     0,     0,     0,    32,     0,
       0,     0,     0,     0,    51,     0,    23,    25,     0,    18,
      69,     0,     0,     0,     0,     0,     0,     0,    76,    75,
       0,    30,     0,     0,    93,     0,    65,     0,    73,    74,
      50,    28,     0,     0,     0,     0,    29,    70,     0,    72,
      66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   -65,   -65,   271,   -65,   -65,   214,   -65,   266,
     218,   185,   -65,   -65,   112,   -65,   -65,   -65,   -65,    88,
     -65,   -65,   -65,   274,   -65,   223,    -1,   -65,   -48,   -54,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     9,    10,    28,    37,    38,    16,    17,
      72,    73,   163,   180,   181,   198,   212,   183,   138,     4,
      21,     5,    11,    12,    29,    41,    74,    42,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    93,    19,    88,    99,     1,    91,    66,    24,    14,
      27,   102,   103,   100,    27,    19,   106,    75,   108,    70,
      20,   122,   123,   124,    77,    78,    79,    67,   -38,    80,
     164,    77,    78,    79,    93,   -41,    80,    93,   221,    71,
     136,   139,     7,     8,    76,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   165,   222,    81,
      39,    99,    33,    40,    82,   137,    81,    34,   111,   112,
     129,    82,   109,   110,   111,   112,   114,   115,   116,   117,
     118,   119,   114,   115,   116,   117,   118,   119,   167,   170,
     208,    18,    35,   153,   175,   176,   154,   168,    36,   120,
     185,   186,   174,   188,    32,   120,    43,    44,   203,    15,
     140,   204,     7,     8,    68,   184,   114,   115,   116,   117,
     118,   119,    64,   202,    65,   190,   191,   104,    69,   105,
      93,   109,   110,   111,   112,    89,    93,    93,    84,   215,
      85,   114,   115,   116,   117,   118,   119,    86,    87,   223,
     -42,   -42,   -42,   -42,   -42,   -42,     6,   217,     7,     8,
      90,   182,    94,    93,   120,    22,    97,     7,     8,   155,
     109,   110,   111,   112,    25,   101,     7,     8,   128,   182,
     114,   115,   116,   117,   118,   119,   109,   110,   111,   112,
      30,   107,     7,     8,   121,   130,   114,   115,   116,   117,
     118,   119,   179,   120,     7,     8,   127,   196,   156,     7,
       8,   133,   131,   160,   161,   109,   110,   111,   112,   120,
     158,   159,   171,   162,   157,   114,   115,   116,   117,   118,
     119,   109,   110,   111,   112,   172,   173,   174,   177,   178,
     187,   114,   115,   116,   117,   118,   119,   194,   120,   195,
     199,   209,   210,   192,   213,   211,   216,   218,   219,   220,
     109,   110,   111,   112,   120,   226,   228,   229,   230,   193,
     114,   115,   116,   117,   118,   119,   109,   110,   111,   112,
      23,    96,    31,    95,   132,    26,   114,   115,   116,   117,
     118,   119,   197,   120,    98,     0,   135,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,     0,     0,   120,
       0,     0,   166,   114,   115,   116,   117,   118,   119,   109,
     110,   111,   112,     0,     0,     0,     0,     0,     0,   114,
     115,   116,   117,   118,   119,     0,   120,     0,     0,   189,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
       0,     0,   120,     0,     0,   201,   114,   115,   116,   117,
     118,   119,   109,   110,   111,   112,     0,     0,     0,     0,
       0,     0,   114,   115,   116,   117,   118,   119,     0,   120,
       0,     0,   214,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,     0,     0,   120,     0,   113,   224,   114,
     115,   116,   117,   118,   119,   109,   110,   111,   112,     0,
       0,     0,     0,     0,   134,   114,   115,   116,   117,   118,
     119,     0,   120,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,     0,     0,     0,   120,   169,
     114,   115,   116,   117,   118,   119,   109,   110,   111,   112,
       0,     0,     0,     0,     0,   200,   114,   115,   116,   117,
     118,   119,     0,   120,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,     0,     0,     0,     0,   120,
     227,   114,   115,   116,   117,   118,   119,   109,   110,   111,
     112,     0,     0,     0,     0,     0,     0,   114,   115,   116,
     117,   118,   119,     0,   120,    45,     0,     0,    46,     0,
       0,     0,    47,    48,     0,     0,    45,     0,     0,    46,
     120,     0,    49,    47,    48,     0,    50,    51,     0,    52,
      53,    54,   126,    49,     0,   205,   206,    50,    51,     0,
      52,    53,    54,    45,     0,     0,    46,     0,     0,    92,
      47,    48,     0,     0,    45,     0,     0,    46,     0,     0,
      49,    47,    48,     0,    50,    51,     0,    52,    53,    54,
       0,    49,     0,     0,     0,    50,    51,   207,    52,    53,
      54,    45,     0,     0,    46,     0,     0,    45,    47,    48,
      46,     0,     0,     0,    47,    48,     0,     0,    49,     0,
       0,   225,    50,    51,    49,    52,    53,    54,    50,    51,
       0,    52,    53,    54,    45,     0,     0,    46,     0,     0,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,   125,    51,     0,    52,    53,
      54
};

static const yytype_int16 yycheck[] =
{
       1,    55,     3,    51,    35,    33,    54,    15,     9,     0,
      11,    75,    76,    44,    15,    16,    80,    14,    82,    15,
      10,    85,    86,    87,     3,     4,     5,    35,    10,     8,
      14,     3,     4,     5,    88,     8,     8,    91,    15,    35,
     104,   105,    36,    37,    41,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    41,    35,    38,
       5,    35,     5,     8,    43,    44,    38,    11,     8,     9,
      44,    43,     6,     7,     8,     9,    16,    17,    18,    19,
      20,    21,    16,    17,    18,    19,    20,    21,    35,   153,
      15,     3,    10,    41,   158,   159,    44,    44,     5,    39,
     164,   165,    27,   167,    16,    39,    43,    15,    41,    33,
      44,    44,    36,    37,     5,   163,    16,    17,    18,    19,
      20,    21,    41,   187,    43,   173,   174,    41,    41,    43,
     184,     6,     7,     8,     9,    15,   190,   191,    43,   203,
      43,    16,    17,    18,    19,    20,    21,    43,    43,   213,
      16,    17,    18,    19,    20,    21,    34,   205,    36,    37,
      15,   162,     3,   217,    39,    34,     3,    36,    37,    44,
       6,     7,     8,     9,    34,     5,    36,    37,    42,   180,
      16,    17,    18,    19,    20,    21,     6,     7,     8,     9,
      34,     5,    36,    37,     5,    42,    16,    17,    18,    19,
      20,    21,    34,    39,    36,    37,    15,    34,    44,    36,
      37,    45,    41,    41,     3,     6,     7,     8,     9,    39,
      43,    43,    15,    33,    44,    16,    17,    18,    19,    20,
      21,     6,     7,     8,     9,    15,    23,    27,     3,    42,
      41,    16,    17,    18,    19,    20,    21,    42,    39,    41,
      46,    15,     3,    44,    14,     5,    15,    15,    15,    42,
       6,     7,     8,     9,    39,     5,    44,    15,    15,    44,
      16,    17,    18,    19,    20,    21,     6,     7,     8,     9,
       9,    67,    16,    65,    99,    11,    16,    17,    18,    19,
      20,    21,   180,    39,    71,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    39,
      -1,    -1,    42,    16,    17,    18,    19,    20,    21,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    39,    -1,    -1,    42,    16,    17,    18,    19,
      20,    21,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    39,    -1,    14,    42,    16,
      17,    18,    19,    20,    21,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    39,    15,
      16,    17,    18,    19,    20,    21,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    39,
      15,    16,    17,    18,    19,    20,    21,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    39,     5,    -1,    -1,     8,    -1,
      -1,    -1,    12,    13,    -1,    -1,     5,    -1,    -1,     8,
      39,    -1,    22,    12,    13,    -1,    26,    27,    -1,    29,
      30,    31,    32,    22,    -1,    24,    25,    26,    27,    -1,
      29,    30,    31,     5,    -1,    -1,     8,    -1,    -1,    11,
      12,    13,    -1,    -1,     5,    -1,    -1,     8,    -1,    -1,
      22,    12,    13,    -1,    26,    27,    -1,    29,    30,    31,
      -1,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,     5,    -1,    -1,     8,    -1,    -1,     5,    12,    13,
       8,    -1,    -1,    -1,    12,    13,    -1,    -1,    22,    -1,
      -1,    25,    26,    27,    22,    29,    30,    31,    26,    27,
      -1,    29,    30,    31,     5,    -1,    -1,     8,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,    29,    30,
      31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    48,    49,    66,    68,    34,    36,    37,    50,
      51,    69,    70,    73,     0,    33,    55,    56,    66,    73,
      10,    67,    34,    51,    73,    34,    70,    73,    52,    71,
      34,    56,    66,     5,    11,    10,     5,    53,    54,     5,
       8,    72,    74,    43,    15,     5,     8,    12,    13,    22,
      26,    27,    29,    30,    31,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    41,    43,    15,    35,     5,    41,
      15,    35,    57,    58,    73,    14,    41,     3,     4,     5,
       8,    38,    43,    84,    43,    43,    43,    43,    75,    15,
      15,    75,    11,    76,     3,    57,    54,     3,    72,    35,
      44,     5,    84,    84,    41,    43,    84,     5,    84,     6,
       7,     8,     9,    14,    16,    17,    18,    19,    20,    21,
      39,     5,    84,    84,    84,    26,    32,    15,    42,    44,
      42,    41,    58,    45,    15,    42,    84,    44,    65,    84,
      44,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    41,    44,    44,    44,    44,    43,    43,
      41,     3,    33,    59,    14,    41,    42,    35,    44,    15,
      84,    15,    15,    23,    27,    84,    84,     3,    42,    34,
      60,    61,    73,    64,    75,    84,    84,    41,    84,    42,
      75,    75,    44,    44,    42,    41,    34,    61,    62,    46,
      15,    42,    84,    41,    44,    24,    25,    28,    15,    15,
       3,     5,    63,    14,    42,    84,    15,    75,    15,    15,
      42,    15,    35,    84,    42,    25,     5,    15,    44,    15,
      15
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    48,    48,    49,    49,    50,    50,    52,
      51,    53,    53,    54,    54,    54,    55,    55,    56,    57,
      57,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      63,    64,    65,    65,    67,    66,    66,    68,    68,    69,
      69,    71,    70,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    78,    79,    79,
      79,    79,    80,    80,    81,    82,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     0,
       4,     3,     1,     1,     4,     4,     2,     1,     9,     3,
       1,     0,     2,     3,     2,     2,     1,     0,     4,     3,
       1,     1,     3,     1,     0,     6,     4,     3,     2,     2,
       1,     0,     4,     1,     2,     1,     1,     3,     6,     4,
       9,     7,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     5,     8,    11,     5,     4,     7,
      10,     5,    10,     8,     8,     7,     7,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     4,     7,     2,     2,     3,     4
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
  case 5: /* GDeclBlock: DECL GdeclList ENDDECL  */
#line 42 "control.y"
                                    {(yyval.no) = (yyvsp[-1].no); print((yyval.no));}
#line 1516 "y.tab.c"
    break;

  case 6: /* GDeclBlock: DECL ENDDECL  */
#line 43 "control.y"
                       {(yyval.no) = NULL;}
#line 1522 "y.tab.c"
    break;

  case 7: /* GdeclList: GdeclList GDecl  */
#line 45 "control.y"
                             {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1528 "y.tab.c"
    break;

  case 8: /* GdeclList: GDecl  */
#line 46 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1534 "y.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 49 "control.y"
             {current_type = (yyvsp[0].no)->type;}
#line 1540 "y.tab.c"
    break;

  case 10: /* GDecl: Type $@1 GidList SEMICOLON  */
#line 49 "control.y"
                                                          {(yyval.no) = makeDeclNode((yyvsp[-3].no),(yyvsp[-1].no));}
#line 1546 "y.tab.c"
    break;

  case 11: /* GidList: GidList COMMA Gid  */
#line 52 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 1552 "y.tab.c"
    break;

  case 12: /* GidList: Gid  */
#line 53 "control.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 1558 "y.tab.c"
    break;

  case 13: /* Gid: ID  */
#line 56 "control.y"
         {(yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 0;}
#line 1564 "y.tab.c"
    break;

  case 14: /* Gid: ID '[' NUM ']'  */
#line 57 "control.y"
                      {(yyval.no) = makeArrayNode(NULL,makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 1570 "y.tab.c"
    break;

  case 15: /* Gid: ID '(' ParamList ')'  */
#line 58 "control.y"
                           {(yyval.no) = makeFnDeclNode(makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no)); ClearLST();}
#line 1576 "y.tab.c"
    break;

  case 16: /* FDefBlock: FDefBlock Fdef  */
#line 60 "control.y"
                           {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1582 "y.tab.c"
    break;

  case 17: /* FDefBlock: Fdef  */
#line 61 "control.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 1588 "y.tab.c"
    break;

  case 18: /* Fdef: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 64 "control.y"
                                                     {(yyval.no) = makeFnDefNode((yyvsp[-8].no), makeVariableNode((yyvsp[-7].str)),(yyvsp[-5].no),(yyvsp[-2].no),(yyvsp[-1].no)); ClearLST();}
#line 1594 "y.tab.c"
    break;

  case 19: /* ParamList: ParamList COMMA Param  */
#line 66 "control.y"
                                  {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 1600 "y.tab.c"
    break;

  case 20: /* ParamList: Param  */
#line 67 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1606 "y.tab.c"
    break;

  case 21: /* ParamList: %empty  */
#line 68 "control.y"
                        {(yyval.no) = NULL;}
#line 1612 "y.tab.c"
    break;

  case 22: /* Param: Type ID  */
#line 71 "control.y"
                {(yyval.no) = makeParamNode((yyvsp[-1].no), makeVariableNode((yyvsp[0].str)));}
#line 1618 "y.tab.c"
    break;

  case 23: /* LdeclBlock: DECL LDeclList ENDDECL  */
#line 74 "control.y"
                                    {(yyval.no) = (yyvsp[-1].no);}
#line 1624 "y.tab.c"
    break;

  case 24: /* LdeclBlock: DECL ENDDECL  */
#line 75 "control.y"
                       {(yyval.no) = NULL;}
#line 1630 "y.tab.c"
    break;

  case 25: /* LDeclList: LDeclList LDecl  */
#line 78 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1636 "y.tab.c"
    break;

  case 26: /* LDeclList: LDecl  */
#line 79 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1642 "y.tab.c"
    break;

  case 27: /* $@2: %empty  */
#line 82 "control.y"
             {current_type = (yyvsp[0].no)->type;}
#line 1648 "y.tab.c"
    break;

  case 28: /* LDecl: Type $@2 IdList SEMICOLON  */
#line 82 "control.y"
                                                         {(yyval.no) = makeDeclNode((yyvsp[-3].no),(yyvsp[-1].no));}
#line 1654 "y.tab.c"
    break;

  case 29: /* IdList: IdList COMMA ID  */
#line 85 "control.y"
                         {(yyval.no) = makeConnectNode((yyvsp[-2].no),makeVariableNode((yyvsp[0].str)));}
#line 1660 "y.tab.c"
    break;

  case 30: /* IdList: ID  */
#line 86 "control.y"
             {(yyval.no) = makeVariableNode((yyvsp[0].str));}
#line 1666 "y.tab.c"
    break;

  case 31: /* Body: Slist  */
#line 89 "control.y"
             {(yyval.no) = (yyvsp[0].no);}
#line 1672 "y.tab.c"
    break;

  case 32: /* ArgList: ArgList COMMA expr  */
#line 92 "control.y"
                             { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 1678 "y.tab.c"
    break;

  case 33: /* ArgList: expr  */
#line 93 "control.y"
               { (yyval.no) = (yyvsp[0].no); }
#line 1684 "y.tab.c"
    break;

  case 34: /* $@3: %empty  */
#line 96 "control.y"
                         {}
#line 1690 "y.tab.c"
    break;

  case 35: /* MainBlock: Declarations $@3 BEGINN Slist ENDD SEMICOLON  */
#line 96 "control.y"
                                                        { (yyval.no) = makeConnectNode((yyvsp[-5].no),(yyvsp[-2].no)); print((yyval.no)); generate((yyval.no)); exit(0);}
#line 1696 "y.tab.c"
    break;

  case 36: /* MainBlock: Declarations BEGINN ENDD SEMICOLON  */
#line 97 "control.y"
                                             {(yyval.no)=NULL;}
#line 1702 "y.tab.c"
    break;

  case 37: /* Declarations: DECL DeclList ENDDECL  */
#line 100 "control.y"
                                     {(yyval.no) = (yyvsp[-1].no);}
#line 1708 "y.tab.c"
    break;

  case 38: /* Declarations: DECL ENDDECL  */
#line 101 "control.y"
                       {(yyval.no) = NULL;}
#line 1714 "y.tab.c"
    break;

  case 39: /* DeclList: DeclList Decl  */
#line 104 "control.y"
                         { (yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no)); }
#line 1720 "y.tab.c"
    break;

  case 40: /* DeclList: Decl  */
#line 105 "control.y"
               { (yyval.no) = (yyvsp[0].no); }
#line 1726 "y.tab.c"
    break;

  case 41: /* $@4: %empty  */
#line 108 "control.y"
            {current_type = (yyvsp[0].no)->type;}
#line 1732 "y.tab.c"
    break;

  case 42: /* Decl: Type $@4 Varlist SEMICOLON  */
#line 108 "control.y"
                                                         { (yyval.no) = makeDeclNode((yyvsp[-3].no), (yyvsp[-1].no)); }
#line 1738 "y.tab.c"
    break;

  case 43: /* DeclID: ID  */
#line 111 "control.y"
            { (yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 0; }
#line 1744 "y.tab.c"
    break;

  case 44: /* DeclID: MUL ID  */
#line 112 "control.y"
                 { (yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 1; }
#line 1750 "y.tab.c"
    break;

  case 45: /* Type: INT  */
#line 114 "control.y"
           {(yyval.no) = makeTypeNode(0); }
#line 1756 "y.tab.c"
    break;

  case 46: /* Type: STR  */
#line 115 "control.y"
               {(yyval.no) = makeTypeNode(2); }
#line 1762 "y.tab.c"
    break;

  case 47: /* Varlist: Varlist COMMA DeclID  */
#line 118 "control.y"
                               { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 1768 "y.tab.c"
    break;

  case 48: /* Varlist: Varlist COMMA DeclID '[' NUM ']'  */
#line 119 "control.y"
                                        { (yyval.no) = makeArrayNode((yyvsp[-5].no),(yyvsp[-3].no),(yyvsp[-1].no)); }
#line 1774 "y.tab.c"
    break;

  case 49: /* Varlist: DeclID '[' NUM ']'  */
#line 120 "control.y"
                          { (yyval.no) = makeArrayNode(NULL,(yyvsp[-3].no),(yyvsp[-1].no)); }
#line 1780 "y.tab.c"
    break;

  case 50: /* Varlist: Varlist COMMA DeclID '[' NUM ']' '[' NUM ']'  */
#line 121 "control.y"
                                                 { (yyval.no) = makeArrayNode((yyvsp[-8].no),(yyvsp[-6].no),makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no))); }
#line 1786 "y.tab.c"
    break;

  case 51: /* Varlist: DeclID '[' NUM ']' '[' NUM ']'  */
#line 122 "control.y"
                                   { (yyval.no) = makeArrayNode(NULL,(yyvsp[-6].no),makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no))); }
#line 1792 "y.tab.c"
    break;

  case 52: /* Varlist: DeclID  */
#line 123 "control.y"
                 { (yyval.no) = (yyvsp[0].no); }
#line 1798 "y.tab.c"
    break;

  case 53: /* Slist: Slist Stmt  */
#line 126 "control.y"
                   {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1804 "y.tab.c"
    break;

  case 54: /* Slist: Stmt  */
#line 127 "control.y"
             {(yyval.no) = (yyvsp[0].no);}
#line 1810 "y.tab.c"
    break;

  case 55: /* Stmt: InputStmt  */
#line 130 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1816 "y.tab.c"
    break;

  case 56: /* Stmt: OutputStmt  */
#line 131 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1822 "y.tab.c"
    break;

  case 57: /* Stmt: AsgStmt  */
#line 132 "control.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 1828 "y.tab.c"
    break;

  case 58: /* Stmt: IfStmt  */
#line 133 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1834 "y.tab.c"
    break;

  case 59: /* Stmt: WhileStmt  */
#line 134 "control.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 1840 "y.tab.c"
    break;

  case 60: /* Stmt: BREAKK SEMICOLON  */
#line 135 "control.y"
                           {(yyval.no) = makeBreakNode();}
#line 1846 "y.tab.c"
    break;

  case 61: /* Stmt: CONTINUEE SEMICOLON  */
#line 136 "control.y"
                              {(yyval.no) = makeContinueNode();}
#line 1852 "y.tab.c"
    break;

  case 62: /* Stmt: DoWhileStmt  */
#line 137 "control.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1858 "y.tab.c"
    break;

  case 63: /* Stmt: RepeatStmt  */
#line 138 "control.y"
                     {(yyval.no) = (yyvsp[0].no);}
#line 1864 "y.tab.c"
    break;

  case 64: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 141 "control.y"
                                   { (yyval.no) = makeReadNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 1870 "y.tab.c"
    break;

  case 65: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 142 "control.y"
                                           { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-5].str)),(yyvsp[-3].no))); }
#line 1876 "y.tab.c"
    break;

  case 66: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 143 "control.y"
                                                     { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-8].str)),makeConnectNode((yyvsp[-6].no),(yyvsp[-3].no)))); }
#line 1882 "y.tab.c"
    break;

  case 67: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 146 "control.y"
                                       {(yyval.no) = makeWriteNode((yyvsp[-2].no));}
#line 1888 "y.tab.c"
    break;

  case 68: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 149 "control.y"
                                   { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no)); }
#line 1894 "y.tab.c"
    break;

  case 69: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 150 "control.y"
                                              { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].no)), (yyvsp[-1].no)); }
#line 1900 "y.tab.c"
    break;

  case 70: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 151 "control.y"
                                                        { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-9].str)), makeConnectNode((yyvsp[-7].no),(yyvsp[-4].no))), (yyvsp[-1].no)); }
#line 1906 "y.tab.c"
    break;

  case 71: /* AsgStmt: MUL expr ASSIGN expr SEMICOLON  */
#line 152 "control.y"
                                         { (yyval.no) = makeAssignNode(makeDerefNode((yyvsp[-3].no)), (yyvsp[-1].no)); }
#line 1912 "y.tab.c"
    break;

  case 72: /* IfStmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 155 "control.y"
                                                             {(yyval.no) = makeIfElseNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 1918 "y.tab.c"
    break;

  case 73: /* IfStmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 156 "control.y"
                                                   {(yyval.no) = makeIfNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 1924 "y.tab.c"
    break;

  case 74: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 159 "control.y"
                                                         {(yyval.no) = makeWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 1930 "y.tab.c"
    break;

  case 75: /* RepeatStmt: REPEATT Slist UNTILL '(' expr ')' SEMICOLON  */
#line 162 "control.y"
                                                            {(yyval.no)=makeRepeatNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 1936 "y.tab.c"
    break;

  case 76: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 165 "control.y"
                                                        {(yyval.no)=makeDoWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 1942 "y.tab.c"
    break;

  case 77: /* expr: expr PLUS expr  */
#line 168 "control.y"
                                        {(yyval.no) = makeOperatorNode('+',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1948 "y.tab.c"
    break;

  case 78: /* expr: expr MINUS expr  */
#line 169 "control.y"
                                        {(yyval.no) = makeOperatorNode('-',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1954 "y.tab.c"
    break;

  case 79: /* expr: expr MUL expr  */
#line 170 "control.y"
                                                {(yyval.no) = makeOperatorNode('*',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1960 "y.tab.c"
    break;

  case 80: /* expr: expr DIV expr  */
#line 171 "control.y"
                                                {(yyval.no) = makeOperatorNode('/',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1966 "y.tab.c"
    break;

  case 81: /* expr: expr MOD expr  */
#line 172 "control.y"
                                                {(yyval.no) = makeOperatorNode('%',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1972 "y.tab.c"
    break;

  case 82: /* expr: '(' expr ')'  */
#line 173 "control.y"
                                                {(yyval.no) = (yyvsp[-1].no);}
#line 1978 "y.tab.c"
    break;

  case 83: /* expr: NUM  */
#line 174 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1984 "y.tab.c"
    break;

  case 84: /* expr: ID  */
#line 175 "control.y"
                                                        {(yyval.no) = makeVariableUseNode((yyvsp[0].str));}
#line 1990 "y.tab.c"
    break;

  case 85: /* expr: STRINGG  */
#line 176 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1996 "y.tab.c"
    break;

  case 86: /* expr: expr LT expr  */
#line 177 "control.y"
                                                {(yyval.no) = makeCOperatorNode('<',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2002 "y.tab.c"
    break;

  case 87: /* expr: expr GT expr  */
#line 178 "control.y"
                                {(yyval.no) = makeCOperatorNode('>',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2008 "y.tab.c"
    break;

  case 88: /* expr: expr LE expr  */
#line 179 "control.y"
                                {(yyval.no) = makeCOperatorNode('L',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2014 "y.tab.c"
    break;

  case 89: /* expr: expr GE expr  */
#line 180 "control.y"
                                {(yyval.no) = makeCOperatorNode('G',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2020 "y.tab.c"
    break;

  case 90: /* expr: expr NE expr  */
#line 181 "control.y"
                                {(yyval.no) = makeCOperatorNode('N',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2026 "y.tab.c"
    break;

  case 91: /* expr: expr EQ expr  */
#line 182 "control.y"
                                {(yyval.no) = makeCOperatorNode('E',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2032 "y.tab.c"
    break;

  case 92: /* expr: ID '[' expr ']'  */
#line 183 "control.y"
                                                {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no));}
#line 2038 "y.tab.c"
    break;

  case 93: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 184 "control.y"
                                        {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no)));}
#line 2044 "y.tab.c"
    break;

  case 94: /* expr: AMPERSAND ID  */
#line 185 "control.y"
                                                {(yyval.no) = makeAddrNode((tnode*)makeVariableUseNode((yyvsp[0].str)));}
#line 2050 "y.tab.c"
    break;

  case 95: /* expr: MUL expr  */
#line 186 "control.y"
                                { (yyval.no) = makeDerefNode((yyvsp[0].no)); }
#line 2056 "y.tab.c"
    break;

  case 96: /* expr: ID '(' ')'  */
#line 187 "control.y"
                                                        {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-2].str)),NULL);}
#line 2062 "y.tab.c"
    break;

  case 97: /* expr: ID '(' ArgList ')'  */
#line 188 "control.y"
                                                {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 2068 "y.tab.c"
    break;


#line 2072 "y.tab.c"

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

#line 191 "control.y"


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
	printSymbolTable();
	return 0;
}
