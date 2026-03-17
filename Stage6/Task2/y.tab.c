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
    UNARY = 302                    /* UNARY  */
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
#define UNARY 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "control.y"

	struct tnode *no;
	char* str;

#line 241 "y.tab.c"

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
  YYSYMBOL_UNARY = 47,                     /* UNARY  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_50_ = 50,                       /* '.'  */
  YYSYMBOL_51_ = 51,                       /* '['  */
  YYSYMBOL_52_ = 52,                       /* ']'  */
  YYSYMBOL_53_ = 53,                       /* '('  */
  YYSYMBOL_54_ = 54,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_TypeDefBlock = 57,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 58,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 59,                   /* TypeDef  */
  YYSYMBOL_60_1 = 60,                      /* $@1  */
  YYSYMBOL_FieldDeclList = 61,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 62,                 /* FieldDecl  */
  YYSYMBOL_Field = 63,                     /* Field  */
  YYSYMBOL_TypeName = 64,                  /* TypeName  */
  YYSYMBOL_GDeclBlock = 65,                /* GDeclBlock  */
  YYSYMBOL_66_2 = 66,                      /* $@2  */
  YYSYMBOL_GdeclList = 67,                 /* GdeclList  */
  YYSYMBOL_GDecl = 68,                     /* GDecl  */
  YYSYMBOL_69_3 = 69,                      /* $@3  */
  YYSYMBOL_GidList = 70,                   /* GidList  */
  YYSYMBOL_Gid = 71,                       /* Gid  */
  YYSYMBOL_FDefBlock = 72,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 73,                      /* Fdef  */
  YYSYMBOL_ParamList = 74,                 /* ParamList  */
  YYSYMBOL_Param = 75,                     /* Param  */
  YYSYMBOL_LdeclBlock = 76,                /* LdeclBlock  */
  YYSYMBOL_77_4 = 77,                      /* $@4  */
  YYSYMBOL_LDeclList = 78,                 /* LDeclList  */
  YYSYMBOL_LDecl = 79,                     /* LDecl  */
  YYSYMBOL_80_5 = 80,                      /* $@5  */
  YYSYMBOL_IdList = 81,                    /* IdList  */
  YYSYMBOL_Retstmt = 82,                   /* Retstmt  */
  YYSYMBOL_Body = 83,                      /* Body  */
  YYSYMBOL_ArgList = 84,                   /* ArgList  */
  YYSYMBOL_MainBlock = 85,                 /* MainBlock  */
  YYSYMBOL_Slist = 86,                     /* Slist  */
  YYSYMBOL_Stmt = 87,                      /* Stmt  */
  YYSYMBOL_InputStmt = 88,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 89,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 90,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 91,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 92,                 /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 93,                /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 94,               /* DoWhileStmt  */
  YYSYMBOL_expr = 95                       /* expr  */
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
#define YYLAST   763

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  269

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      53,    54,     2,     2,     2,     2,    50,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    44,    45,    46,    47,    48,    51,    52,
      55,    56,    59,    59,    65,    66,    69,    75,    78,    83,
      84,    85,    95,    95,    96,    97,   100,   101,   104,   104,
     107,   108,   111,   112,   113,   115,   116,   119,   122,   123,
     124,   127,   130,   130,   131,   134,   135,   138,   138,   141,
     142,   145,   148,   149,   152,   153,   156,   162,   163,   164,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     178,   180,   181,   182,   183,   186,   187,   188,   189,   192,
     195,   196,   197,   198,   199,   202,   203,   206,   209,   212,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237
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
  "NULLL", "MAIN", "UNARY", "'{'", "'}'", "'.'", "'['", "']'", "'('",
  "')'", "$accept", "program", "TypeDefBlock", "TypeDefList", "TypeDef",
  "$@1", "FieldDeclList", "FieldDecl", "Field", "TypeName", "GDeclBlock",
  "$@2", "GdeclList", "GDecl", "$@3", "GidList", "Gid", "FDefBlock",
  "Fdef", "ParamList", "Param", "LdeclBlock", "$@4", "LDeclList", "LDecl",
  "$@5", "IdList", "Retstmt", "Body", "ArgList", "MainBlock", "Slist",
  "Stmt", "InputStmt", "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt",
  "RepeatStmt", "DoWhileStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -18,   -17,    23,   100,   113,    74,     7,   -92,   -92,    66,
      67,   -92,     8,   -92,   -92,     7,   -92,   -92,    23,   -92,
     123,     7,   -92,   -92,   -92,   -92,   146,   -92,    75,    97,
     -92,   -92,     7,   -92,    93,   -92,   -92,   147,   -92,   -92,
     106,    66,   -92,    66,    81,    -5,   -92,   129,    16,   -92,
     158,   162,   -26,   -92,   168,    66,   -92,   147,   141,   171,
     -92,   -92,   163,   -92,    66,   142,   137,    -9,   -92,   -92,
      66,   471,   143,   -92,   -92,   129,   -92,   -92,   -92,   161,
     -92,   -11,   169,   138,   149,   150,   151,   511,   181,   185,
     511,   169,   152,   -13,   195,   471,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   171,   203,   -92,   -92,     3,
     205,   169,    28,   -92,   -92,   134,   169,   206,   -92,   169,
     170,   567,   207,   169,   169,   169,   538,   -92,   -92,   477,
     583,   208,   156,   214,   -92,   210,   -92,   174,   -92,    -1,
     194,   608,   -92,   329,   244,    24,   706,   169,    71,   -92,
     -92,   209,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,    33,    58,   225,   249,   265,   222,
     223,   -92,    65,    76,   224,   624,   -92,   -92,   -92,   -92,
     255,   226,   -92,    13,   -92,   169,   246,   345,   -92,    32,
     -92,   722,   722,   219,   219,   649,   233,   233,   233,   233,
     233,   233,   219,   169,   247,   263,   272,   201,   262,   169,
     169,   275,   276,   238,   -92,   -92,   278,   169,   169,   706,
     -92,   243,   -92,   -92,   369,   -92,   -92,   -92,   511,   511,
     289,   305,   -92,   -92,   284,   -92,   665,   385,   169,   -29,
     444,   109,    53,   285,   -92,   -92,   287,   409,   169,   300,
     511,   301,   302,   -92,   -92,   169,   -92,   425,   -92,   505,
     -92,   -92,   690,   248,   303,   -92,   312,   -92,   -92
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
       0,     0,     0,    96,    98,    97,     0,     0,   112,     0,
     111,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,     0,     0,     0,    53,     0,    57,     0,    50,     0,
       0,     0,    17,     0,     0,     0,    55,     0,     0,   108,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,    18,    52,    37,    48,
       0,     0,    80,     0,    69,     0,     0,     0,   109,     0,
      95,    90,    91,    92,    93,     0,    99,   100,   101,   102,
     103,   104,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    49,     0,     0,     0,    54,
      70,   105,   110,    83,     0,    75,    78,    79,    59,    59,
       0,     0,    73,    74,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    81,     0,     0,     0,     0,
      59,     0,     0,    89,    88,     0,   106,     0,    76,     0,
      86,    87,     0,     0,     0,    82,     0,    85,    77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,   -92,   308,   -92,   -92,   281,   -71,    63,
     325,   -92,   -92,   306,   -92,   -92,   274,   318,    56,   279,
     277,   264,   -92,   -92,   261,   -92,   -92,   260,   237,   212,
     731,   -85,   -91,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,    12,    13,    29,    48,    49,   120,    20,
       6,     9,    26,    27,    37,    45,    46,    21,    22,    52,
      53,    59,    70,    79,    80,   106,   139,    94,    72,   145,
       7,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     146
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,   132,   126,   109,   136,   129,   113,   114,   115,    64,
      56,   116,    17,    11,   179,     1,    93,     8,     2,    93,
     121,    17,   248,     3,    93,   249,    64,   217,    65,   130,
      57,   113,   114,   115,   180,   136,   116,   133,   136,   110,
     111,   117,   112,    18,    19,    77,   140,   141,   118,   143,
      30,   165,    24,    19,   149,    93,   119,   151,    93,   185,
     173,   166,   167,   168,   218,    60,   117,   185,   253,    10,
     175,    17,    25,   118,   113,   114,   115,    35,   186,   116,
     229,   119,   144,   110,   203,   187,   222,   204,    35,    25,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,    24,    19,    50,    11,    51,     1,   133,   117,
       2,    50,   205,    14,    81,   110,   118,    82,    51,   211,
      28,    83,    84,   219,   119,   188,   133,    51,    34,    40,
     212,    85,    54,    78,    55,    86,    87,   252,    88,    89,
      90,   224,    78,   240,   241,    41,    43,   230,   231,   136,
     136,    17,    44,    92,    47,   236,   237,    93,    93,   113,
     114,   115,    58,    62,   116,   259,    17,    63,   136,    93,
      93,    66,   113,   114,   115,    69,   247,   116,    73,    93,
      38,    71,    24,    19,   110,   147,   257,   148,    93,    76,
      75,   122,   104,   262,   117,   107,   127,    24,    19,   174,
     128,   118,   123,   124,   125,   131,   134,   117,   138,   119,
     142,   150,   164,   172,   118,   152,   153,   154,   155,   176,
     133,   177,   119,   178,   228,   157,   158,   159,   160,   161,
     162,   152,   153,   154,   155,   157,   158,   159,   160,   161,
     162,   157,   158,   159,   160,   161,   162,   181,   163,    -1,
      -1,    -1,    -1,    -1,    -1,   152,   153,   154,   155,   184,
     215,   220,   225,   190,   163,   157,   158,   159,   160,   161,
     162,   152,   153,   154,   155,   209,   210,   213,   226,   206,
     216,   157,   158,   159,   160,   161,   162,   227,   163,   229,
     232,   233,   234,   235,   238,   152,   153,   154,   155,   244,
     254,   255,   266,   207,   163,   157,   158,   159,   160,   161,
     162,   152,   153,   154,   155,   258,   260,   261,   267,   208,
      31,   157,   158,   159,   160,   161,   162,   268,   163,    61,
      15,    68,    39,    32,    67,   152,   153,   154,   155,   105,
     108,    74,   137,   242,   163,   157,   158,   159,   160,   161,
     162,   152,   153,   154,   155,   135,     0,     0,     0,   243,
     189,   157,   158,   159,   160,   161,   162,     0,   163,     0,
       0,     0,     0,     0,     0,   152,   153,   154,   155,     0,
       0,   183,     0,     0,   163,   157,   158,   159,   160,   161,
     162,   152,   153,   154,   155,     0,     0,   221,     0,     0,
       0,   157,   158,   159,   160,   161,   162,     0,   163,     0,
       0,     0,     0,     0,     0,   152,   153,   154,   155,     0,
       0,   239,     0,     0,   163,   157,   158,   159,   160,   161,
     162,   152,   153,   154,   155,     0,     0,   246,     0,     0,
       0,   157,   158,   159,   160,   161,   162,     0,   163,    81,
       0,     0,    82,     0,     0,     0,    83,    84,     0,     0,
       0,   256,     0,     0,   163,     0,    85,     0,   250,   251,
      86,    87,     0,    88,    89,    90,    81,   263,     0,    82,
       0,     0,    81,    83,    84,    82,     0,     0,    92,    83,
      84,     0,     0,    85,     0,     0,     0,    86,    87,    85,
      88,    89,    90,    86,    87,     0,    88,    89,    90,   170,
      81,    91,     0,    82,     0,    92,    81,    83,    84,    82,
       0,    92,     0,    83,    84,     0,     0,    85,     0,     0,
     264,    86,    87,    85,    88,    89,    90,    86,    87,     0,
      88,    89,    90,    81,     0,     0,    82,     0,     0,    92,
      83,    84,     0,     0,     0,    92,     0,     0,     0,     0,
      85,     0,     0,     0,   169,    87,     0,    88,    89,    90,
       0,     0,     0,   152,   153,   154,   155,     0,     0,     0,
       0,   156,    92,   157,   158,   159,   160,   161,   162,   152,
     153,   154,   155,     0,     0,     0,     0,     0,   171,   157,
     158,   159,   160,   161,   162,     0,   163,     0,     0,     0,
       0,     0,     0,     0,   152,   153,   154,   155,     0,     0,
       0,     0,   163,   182,   157,   158,   159,   160,   161,   162,
     152,   153,   154,   155,     0,     0,     0,     0,     0,   214,
     157,   158,   159,   160,   161,   162,     0,   163,     0,     0,
       0,     0,     0,     0,     0,   152,   153,   154,   155,     0,
       0,     0,     0,   163,   223,   157,   158,   159,   160,   161,
     162,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     245,   157,   158,   159,   160,   161,   162,     0,   163,     0,
       0,     0,     0,     0,     0,     0,   152,   153,   154,   155,
       0,     0,     0,     0,   163,   265,   157,   158,   159,   160,
     161,   162,   152,   153,   154,   155,     0,     0,     0,     0,
       0,     0,   157,   158,   159,   160,   161,   162,     0,   163,
     154,   155,     0,     0,     0,     0,    16,    23,   157,   158,
     159,   160,   161,   162,     0,   163,    33,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,   163,     0,    42
};

static const yytype_int16 yycheck[] =
{
      71,    14,    87,    14,    95,    90,     3,     4,     5,    35,
      15,     8,     5,     5,    15,    33,    87,    34,    36,    90,
      82,     5,    51,    41,    95,    54,    35,    14,    54,    91,
      35,     3,     4,     5,    35,   126,     8,    50,   129,    50,
      51,    38,    53,    36,    37,    54,    43,   109,    45,   111,
      42,   122,    36,    37,   116,   126,    53,   119,   129,    35,
     131,   123,   124,   125,    51,    49,    38,    35,    15,    46,
     132,     5,     9,    45,     3,     4,     5,    21,    54,     8,
      27,    53,    54,    50,    51,   147,    54,    54,    32,    26,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    36,    37,    41,     5,    43,    33,    50,    38,
      36,    48,    54,     0,     5,    50,    45,     8,    55,    54,
      53,    12,    13,   185,    53,    54,    50,    64,     5,    54,
      54,    22,    51,    70,    53,    26,    27,    28,    29,    30,
      31,   203,    79,   228,   229,    48,    53,   209,   210,   240,
     241,     5,     5,    44,    48,   217,   218,   228,   229,     3,
       4,     5,    33,     5,     8,   250,     5,     5,   259,   240,
     241,     3,     3,     4,     5,    34,   238,     8,    15,   250,
      34,    10,    36,    37,    50,    51,   248,    53,   259,    52,
      48,    53,    49,   255,    38,    34,    15,    36,    37,    43,
      15,    45,    53,    53,    53,    53,    11,    38,     5,    53,
       5,     5,     5,     5,    45,     6,     7,     8,     9,     5,
      50,    11,    53,    49,    23,    16,    17,    18,    19,    20,
      21,     6,     7,     8,     9,    16,    17,    18,    19,    20,
      21,    16,    17,    18,    19,    20,    21,    53,    39,    16,
      17,    18,    19,    20,    21,     6,     7,     8,     9,    15,
       5,    15,    15,    54,    39,    16,    17,    18,    19,    20,
      21,     6,     7,     8,     9,    53,    53,    53,    15,    54,
      54,    16,    17,    18,    19,    20,    21,    15,    39,    27,
      15,    15,    54,    15,    51,     6,     7,     8,     9,    15,
      15,    14,    54,    54,    39,    16,    17,    18,    19,    20,
      21,     6,     7,     8,     9,    15,    15,    15,    15,    54,
      12,    16,    17,    18,    19,    20,    21,    15,    39,    48,
       5,    57,    26,    15,    55,     6,     7,     8,     9,    75,
      79,    64,   105,    54,    39,    16,    17,    18,    19,    20,
      21,     6,     7,     8,     9,    95,    -1,    -1,    -1,    54,
     148,    16,    17,    18,    19,    20,    21,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    52,    -1,    -1,    39,    16,    17,    18,    19,    20,
      21,     6,     7,     8,     9,    -1,    -1,    52,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    52,    -1,    -1,    39,    16,    17,    18,    19,    20,
      21,     6,     7,     8,     9,    -1,    -1,    52,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    39,     5,
      -1,    -1,     8,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    52,    -1,    -1,    39,    -1,    22,    -1,    24,    25,
      26,    27,    -1,    29,    30,    31,     5,    52,    -1,     8,
      -1,    -1,     5,    12,    13,     8,    -1,    -1,    44,    12,
      13,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,    22,
      29,    30,    31,    26,    27,    -1,    29,    30,    31,    32,
       5,    40,    -1,     8,    -1,    44,     5,    12,    13,     8,
      -1,    44,    -1,    12,    13,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    22,    29,    30,    31,    26,    27,    -1,
      29,    30,    31,     5,    -1,    -1,     8,    -1,    -1,    44,
      12,    13,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    44,    16,    17,    18,    19,    20,    21,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    39,    -1,    -1,    -1,
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
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    39,
       8,     9,    -1,    -1,    -1,    -1,     5,     6,    16,    17,
      18,    19,    20,    21,    -1,    39,    15,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    36,    41,    56,    57,    65,    85,    34,    66,
      46,     5,    58,    59,     0,    65,    85,     5,    36,    37,
      64,    72,    73,    85,    36,    64,    67,    68,    53,    60,
      42,    59,    72,    85,     5,    73,    85,    69,    34,    68,
      54,    48,    85,    53,     5,    70,    71,    48,    61,    62,
      64,    64,    74,    75,    51,    53,    15,    35,    33,    76,
      49,    62,     5,     5,    35,    54,     3,    74,    71,    34,
      77,    10,    83,    15,    75,    48,    52,    54,    64,    78,
      79,     5,     8,    12,    13,    22,    26,    27,    29,    30,
      31,    40,    44,    63,    82,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    49,    76,    80,    34,    79,    14,
      50,    51,    53,     3,     4,     5,     8,    38,    45,    53,
      63,    95,    53,    53,    53,    53,    86,    15,    15,    86,
      95,    53,    14,    50,    11,    82,    87,    83,     5,    81,
      43,    95,     5,    95,    54,    84,    95,    51,    53,    95,
       5,    95,     6,     7,     8,     9,    14,    16,    17,    18,
      19,    20,    21,    39,     5,    63,    95,    95,    95,    26,
      32,    15,     5,    63,    43,    95,     5,    11,    49,    15,
      35,    53,    15,    52,    15,    35,    54,    95,    54,    84,
      54,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    51,    54,    54,    54,    54,    54,    53,
      53,    54,    54,    53,    15,     5,    54,    14,    51,    95,
      15,    52,    54,    15,    95,    15,    15,    15,    23,    27,
      95,    95,    15,    15,    54,    15,    95,    95,    51,    52,
      86,    86,    54,    54,    15,    15,    52,    95,    51,    54,
      24,    25,    28,    15,    15,    14,    52,    95,    15,    86,
      15,    15,    95,    52,    25,    15,    54,    15,    15
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    56,    56,    56,    56,    57,    57,
      58,    58,    60,    59,    61,    61,    62,    63,    63,    64,
      64,    64,    66,    65,    65,    65,    67,    67,    69,    68,
      70,    70,    71,    71,    71,    72,    72,    73,    74,    74,
      74,    75,    77,    76,    76,    78,    78,    80,    79,    81,
      81,    82,    83,    83,    84,    84,    85,    86,    86,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    89,
      90,    90,    90,    90,    90,    91,    91,    92,    93,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95
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
       5,     6,     6,     5,     5,     5,     8,    11,     5,     5,
       4,     7,    10,     5,     4,    10,     8,     8,     7,     7,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     4,     7,     2,     2,     3,
       4,     1,     1
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
#line 43 "control.y"
                                                      { ASTRoot = makeConnectNode((yyvsp[-3].no), makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)))); }
#line 1589 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock GDeclBlock MainBlock  */
#line 44 "control.y"
                                            { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1595 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock MainBlock  */
#line 45 "control.y"
                                 { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1601 "y.tab.c"
    break;

  case 5: /* program: GDeclBlock FDefBlock MainBlock  */
#line 46 "control.y"
                                         { ASTRoot = makeConnectNode((yyvsp[-2].no), makeConnectNode((yyvsp[-1].no), (yyvsp[0].no))); }
#line 1607 "y.tab.c"
    break;

  case 6: /* program: GDeclBlock MainBlock  */
#line 47 "control.y"
                               { ASTRoot = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1613 "y.tab.c"
    break;

  case 7: /* program: MainBlock  */
#line 48 "control.y"
                    { ASTRoot = (yyvsp[0].no); }
#line 1619 "y.tab.c"
    break;

  case 8: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 51 "control.y"
                                        { (yyval.no) = (yyvsp[-1].no); }
#line 1625 "y.tab.c"
    break;

  case 9: /* TypeDefBlock: %empty  */
#line 52 "control.y"
                                        { (yyval.no) = NULL; }
#line 1631 "y.tab.c"
    break;

  case 10: /* TypeDefList: TypeDefList TypeDef  */
#line 55 "control.y"
                                  { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1637 "y.tab.c"
    break;

  case 11: /* TypeDefList: TypeDef  */
#line 56 "control.y"
                                  { (yyval.no) = (yyvsp[0].no); }
#line 1643 "y.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 59 "control.y"
             {TInstallEmpty((yyvsp[0].str));}
#line 1649 "y.tab.c"
    break;

  case 13: /* TypeDef: ID $@1 '{' FieldDeclList '}'  */
#line 59 "control.y"
                                                        {
            (yyval.no) = makeConnectNode(makeVariableNode((yyvsp[-4].str)), (yyvsp[-1].no));
            TSetFields((yyvsp[-4].str), buildFieldList((yyvsp[-1].no)));
          }
#line 1658 "y.tab.c"
    break;

  case 14: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 65 "control.y"
                                        { (yyval.no) = makeConnectNode((yyvsp[-1].no), (yyvsp[0].no)); }
#line 1664 "y.tab.c"
    break;

  case 15: /* FieldDeclList: FieldDecl  */
#line 66 "control.y"
                                        { (yyval.no) = (yyvsp[0].no); }
#line 1670 "y.tab.c"
    break;

  case 16: /* FieldDecl: TypeName ID SEMICOLON  */
#line 69 "control.y"
                                  {
              (yyval.no) = makeVariableNode((yyvsp[-1].str));
              (yyval.no)->typeEntry = (yyvsp[-2].no)->typeEntry;
            }
#line 1679 "y.tab.c"
    break;

  case 17: /* Field: ID '.' ID  */
#line 75 "control.y"
                  {
          (yyval.no) = makeFieldAccessNode(makeVariableUseNode((yyvsp[-2].str)), (yyvsp[0].str));
        }
#line 1687 "y.tab.c"
    break;

  case 18: /* Field: Field '.' ID  */
#line 78 "control.y"
                     {
          (yyval.no) = makeFieldAccessNode((yyvsp[-2].no), (yyvsp[0].str));
        }
#line 1695 "y.tab.c"
    break;

  case 19: /* TypeName: INT  */
#line 83 "control.y"
                { (yyval.no) = makeTypeNode(0); }
#line 1701 "y.tab.c"
    break;

  case 20: /* TypeName: STR  */
#line 84 "control.y"
                { (yyval.no) = makeTypeNode(2); }
#line 1707 "y.tab.c"
    break;

  case 21: /* TypeName: ID  */
#line 85 "control.y"
                {
                  (yyval.no) = makeTypeNode(0);
                  (yyval.no)->typeEntry = TLookup((yyvsp[0].str));
                  if ((yyval.no)->typeEntry == NULL) {
                      printf("Semantic Error: Unknown type %s\n", (yyvsp[0].str));
                      exit(1);
                  }
                }
#line 1720 "y.tab.c"
    break;

  case 22: /* $@2: %empty  */
#line 95 "control.y"
                  {inLocalDecl = 0;}
#line 1726 "y.tab.c"
    break;

  case 23: /* GDeclBlock: DECL $@2 GdeclList ENDDECL  */
#line 95 "control.y"
                                                       {(yyval.no) = (yyvsp[-1].no); print((yyval.no));}
#line 1732 "y.tab.c"
    break;

  case 24: /* GDeclBlock: DECL ENDDECL  */
#line 96 "control.y"
                       {(yyval.no) = NULL;}
#line 1738 "y.tab.c"
    break;

  case 25: /* GDeclBlock: %empty  */
#line 97 "control.y"
          {(yyval.no) = NULL;}
#line 1744 "y.tab.c"
    break;

  case 26: /* GdeclList: GdeclList GDecl  */
#line 100 "control.y"
                             {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1750 "y.tab.c"
    break;

  case 27: /* GdeclList: GDecl  */
#line 101 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1756 "y.tab.c"
    break;

  case 28: /* $@3: %empty  */
#line 104 "control.y"
                 {current_type = (yyvsp[0].no)->typeEntry;}
#line 1762 "y.tab.c"
    break;

  case 29: /* GDecl: TypeName $@3 GidList SEMICOLON  */
#line 104 "control.y"
                                                                   {(yyval.no) = makeDeclNode((yyvsp[-3].no),(yyvsp[-1].no));}
#line 1768 "y.tab.c"
    break;

  case 30: /* GidList: GidList COMMA Gid  */
#line 107 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 1774 "y.tab.c"
    break;

  case 31: /* GidList: Gid  */
#line 108 "control.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 1780 "y.tab.c"
    break;

  case 32: /* Gid: ID  */
#line 111 "control.y"
         {(yyval.no) = makeVariableNode((yyvsp[0].str)); (yyval.no)->isPointer = 0;}
#line 1786 "y.tab.c"
    break;

  case 33: /* Gid: ID '[' NUM ']'  */
#line 112 "control.y"
                      {(yyval.no) = makeArrayNode(NULL,makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 1792 "y.tab.c"
    break;

  case 34: /* Gid: ID '(' ParamList ')'  */
#line 113 "control.y"
                           {(yyval.no) = makeFnDeclNode(makeVariableNode((yyvsp[-3].str)),(yyvsp[-1].no)); ClearLST();}
#line 1798 "y.tab.c"
    break;

  case 35: /* FDefBlock: FDefBlock Fdef  */
#line 115 "control.y"
                           {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1804 "y.tab.c"
    break;

  case 36: /* FDefBlock: Fdef  */
#line 116 "control.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 1810 "y.tab.c"
    break;

  case 37: /* Fdef: TypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 119 "control.y"
                                                         { (yyval.no) = makeFnDefNode((yyvsp[-8].no), makeVariableNode((yyvsp[-7].str)), (yyvsp[-5].no), (yyvsp[-2].no), (yyvsp[-1].no)); }
#line 1816 "y.tab.c"
    break;

  case 38: /* ParamList: ParamList COMMA Param  */
#line 122 "control.y"
                                  {(yyval.no) = makeConnectNode((yyvsp[-2].no),(yyvsp[0].no));}
#line 1822 "y.tab.c"
    break;

  case 39: /* ParamList: Param  */
#line 123 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1828 "y.tab.c"
    break;

  case 40: /* ParamList: %empty  */
#line 124 "control.y"
                        {(yyval.no) = NULL;}
#line 1834 "y.tab.c"
    break;

  case 41: /* Param: TypeName ID  */
#line 127 "control.y"
                    {(yyval.no) = makeParamNode((yyvsp[-1].no), makeVariableNode((yyvsp[0].str)));}
#line 1840 "y.tab.c"
    break;

  case 42: /* $@4: %empty  */
#line 130 "control.y"
                  {inLocalDecl = 1; inParamList = 0;}
#line 1846 "y.tab.c"
    break;

  case 43: /* LdeclBlock: DECL $@4 LDeclList ENDDECL  */
#line 130 "control.y"
                                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1852 "y.tab.c"
    break;

  case 44: /* LdeclBlock: DECL ENDDECL  */
#line 131 "control.y"
                       {(yyval.no) = NULL;}
#line 1858 "y.tab.c"
    break;

  case 45: /* LDeclList: LDeclList LDecl  */
#line 134 "control.y"
                            {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1864 "y.tab.c"
    break;

  case 46: /* LDeclList: LDecl  */
#line 135 "control.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1870 "y.tab.c"
    break;

  case 47: /* $@5: %empty  */
#line 138 "control.y"
                 {current_type = (yyvsp[0].no)->typeEntry;}
#line 1876 "y.tab.c"
    break;

  case 48: /* LDecl: TypeName $@5 IdList SEMICOLON  */
#line 138 "control.y"
                                                                  {(yyval.no) = makeDeclNode((yyvsp[-3].no),(yyvsp[-1].no));}
#line 1882 "y.tab.c"
    break;

  case 49: /* IdList: IdList COMMA ID  */
#line 141 "control.y"
                         {(yyval.no) = makeConnectNode((yyvsp[-2].no),makeVariableNode((yyvsp[0].str)));}
#line 1888 "y.tab.c"
    break;

  case 50: /* IdList: ID  */
#line 142 "control.y"
             {(yyval.no) = makeVariableNode((yyvsp[0].str));}
#line 1894 "y.tab.c"
    break;

  case 51: /* Retstmt: RETURNN expr SEMICOLON  */
#line 145 "control.y"
                                 { (yyval.no) = makeReturnNode((yyvsp[-1].no)); }
#line 1900 "y.tab.c"
    break;

  case 52: /* Body: BEGINN Slist Retstmt ENDD  */
#line 148 "control.y"
                                 { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[-1].no)); }
#line 1906 "y.tab.c"
    break;

  case 53: /* Body: BEGINN Retstmt ENDD  */
#line 149 "control.y"
                                 { (yyval.no) = (yyvsp[-1].no); }
#line 1912 "y.tab.c"
    break;

  case 54: /* ArgList: ArgList COMMA expr  */
#line 152 "control.y"
                             { (yyval.no) = makeConnectNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 1918 "y.tab.c"
    break;

  case 55: /* ArgList: expr  */
#line 153 "control.y"
               { (yyval.no) = (yyvsp[0].no); }
#line 1924 "y.tab.c"
    break;

  case 56: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 157 "control.y"
            {
                (yyval.no) = makeFnDefNode(makeTypeNode(0), makeVariableNode("main"), NULL, (yyvsp[-2].no), (yyvsp[-1].no));
            }
#line 1932 "y.tab.c"
    break;

  case 57: /* Slist: Slist Stmt  */
#line 162 "control.y"
                   {(yyval.no) = makeConnectNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1938 "y.tab.c"
    break;

  case 58: /* Slist: Stmt  */
#line 163 "control.y"
             {(yyval.no) = (yyvsp[0].no);}
#line 1944 "y.tab.c"
    break;

  case 59: /* Slist: %empty  */
#line 164 "control.y"
            {(yyval.no)=NULL;}
#line 1950 "y.tab.c"
    break;

  case 60: /* Stmt: InputStmt  */
#line 167 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1956 "y.tab.c"
    break;

  case 61: /* Stmt: OutputStmt  */
#line 168 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1962 "y.tab.c"
    break;

  case 62: /* Stmt: AsgStmt  */
#line 169 "control.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 1968 "y.tab.c"
    break;

  case 63: /* Stmt: IfStmt  */
#line 170 "control.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1974 "y.tab.c"
    break;

  case 64: /* Stmt: WhileStmt  */
#line 171 "control.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 1980 "y.tab.c"
    break;

  case 65: /* Stmt: BREAKK SEMICOLON  */
#line 172 "control.y"
                           {(yyval.no) = makeBreakNode();}
#line 1986 "y.tab.c"
    break;

  case 66: /* Stmt: CONTINUEE SEMICOLON  */
#line 173 "control.y"
                              {(yyval.no) = makeContinueNode();}
#line 1992 "y.tab.c"
    break;

  case 67: /* Stmt: DoWhileStmt  */
#line 174 "control.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1998 "y.tab.c"
    break;

  case 68: /* Stmt: RepeatStmt  */
#line 175 "control.y"
                     {(yyval.no) = (yyvsp[0].no);}
#line 2004 "y.tab.c"
    break;

  case 69: /* Stmt: ID '(' ')' SEMICOLON  */
#line 177 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)), NULL); }
#line 2010 "y.tab.c"
    break;

  case 70: /* Stmt: ID '(' ArgList ')' SEMICOLON  */
#line 179 "control.y"
          { (yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-4].str)), (yyvsp[-2].no)); }
#line 2016 "y.tab.c"
    break;

  case 71: /* Stmt: ID ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 180 "control.y"
                                            { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-5].str)), makeAllocNode(NULL)); }
#line 2022 "y.tab.c"
    break;

  case 72: /* Stmt: Field ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 181 "control.y"
                                               { (yyval.no) = makeAssignNode((yyvsp[-5].no), makeAllocNode(NULL)); }
#line 2028 "y.tab.c"
    break;

  case 73: /* Stmt: FREE '(' ID ')' SEMICOLON  */
#line 182 "control.y"
                                    { (yyval.no) = makeFreeNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2034 "y.tab.c"
    break;

  case 74: /* Stmt: FREE '(' Field ')' SEMICOLON  */
#line 183 "control.y"
                                       { (yyval.no) = makeFreeNode((yyvsp[-2].no)); }
#line 2040 "y.tab.c"
    break;

  case 75: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 186 "control.y"
                                   { (yyval.no) = makeReadNode(makeVariableUseNode((yyvsp[-2].str))); }
#line 2046 "y.tab.c"
    break;

  case 76: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 187 "control.y"
                                           { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-5].str)),(yyvsp[-3].no))); }
#line 2052 "y.tab.c"
    break;

  case 77: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 188 "control.y"
                                                     { (yyval.no) = makeReadNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-8].str)),makeConnectNode((yyvsp[-6].no),(yyvsp[-3].no)))); }
#line 2058 "y.tab.c"
    break;

  case 78: /* InputStmt: READ '(' Field ')' SEMICOLON  */
#line 189 "control.y"
                                       { (yyval.no) = makeReadNode((yyvsp[-2].no)); }
#line 2064 "y.tab.c"
    break;

  case 79: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 192 "control.y"
                                       {(yyval.no) = makeWriteNode((yyvsp[-2].no));}
#line 2070 "y.tab.c"
    break;

  case 80: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 195 "control.y"
                                   { (yyval.no) = makeAssignNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no)); }
#line 2076 "y.tab.c"
    break;

  case 81: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 196 "control.y"
                                              { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), (yyvsp[-4].no)), (yyvsp[-1].no)); }
#line 2082 "y.tab.c"
    break;

  case 82: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 197 "control.y"
                                                        { (yyval.no) = makeAssignNode(makeArrayAccessNode(makeVariableUseNode((yyvsp[-9].str)), makeConnectNode((yyvsp[-7].no),(yyvsp[-4].no))), (yyvsp[-1].no)); }
#line 2088 "y.tab.c"
    break;

  case 83: /* AsgStmt: MUL expr ASSIGN expr SEMICOLON  */
#line 198 "control.y"
                                         { (yyval.no) = makeAssignNode(makeDerefNode((yyvsp[-3].no)), (yyvsp[-1].no)); }
#line 2094 "y.tab.c"
    break;

  case 84: /* AsgStmt: Field ASSIGN expr SEMICOLON  */
#line 199 "control.y"
                                      { (yyval.no) = makeAssignNode((yyvsp[-3].no), (yyvsp[-1].no)); }
#line 2100 "y.tab.c"
    break;

  case 85: /* IfStmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 202 "control.y"
                                                             {(yyval.no) = makeIfElseNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 2106 "y.tab.c"
    break;

  case 86: /* IfStmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 203 "control.y"
                                                   {(yyval.no) = makeIfNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2112 "y.tab.c"
    break;

  case 87: /* WhileStmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 206 "control.y"
                                                         {(yyval.no) = makeWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2118 "y.tab.c"
    break;

  case 88: /* RepeatStmt: REPEATT Slist UNTILL '(' expr ')' SEMICOLON  */
#line 209 "control.y"
                                                            {(yyval.no)=makeRepeatNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2124 "y.tab.c"
    break;

  case 89: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 212 "control.y"
                                                        {(yyval.no)=makeDoWhileNode((yyvsp[-5].no),(yyvsp[-2].no));}
#line 2130 "y.tab.c"
    break;

  case 90: /* expr: expr PLUS expr  */
#line 215 "control.y"
                                        {(yyval.no) = makeOperatorNode('+',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2136 "y.tab.c"
    break;

  case 91: /* expr: expr MINUS expr  */
#line 216 "control.y"
                                        {(yyval.no) = makeOperatorNode('-',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2142 "y.tab.c"
    break;

  case 92: /* expr: expr MUL expr  */
#line 217 "control.y"
                                                {(yyval.no) = makeOperatorNode('*',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2148 "y.tab.c"
    break;

  case 93: /* expr: expr DIV expr  */
#line 218 "control.y"
                                                {(yyval.no) = makeOperatorNode('/',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2154 "y.tab.c"
    break;

  case 94: /* expr: expr MOD expr  */
#line 219 "control.y"
                                                {(yyval.no) = makeOperatorNode('%',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2160 "y.tab.c"
    break;

  case 95: /* expr: '(' expr ')'  */
#line 220 "control.y"
                                                {(yyval.no) = (yyvsp[-1].no);}
#line 2166 "y.tab.c"
    break;

  case 96: /* expr: NUM  */
#line 221 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2172 "y.tab.c"
    break;

  case 97: /* expr: ID  */
#line 222 "control.y"
                                                        {(yyval.no) = makeVariableUseNode((yyvsp[0].str));}
#line 2178 "y.tab.c"
    break;

  case 98: /* expr: STRINGG  */
#line 223 "control.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2184 "y.tab.c"
    break;

  case 99: /* expr: expr LT expr  */
#line 224 "control.y"
                                                {(yyval.no) = makeCOperatorNode('<',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2190 "y.tab.c"
    break;

  case 100: /* expr: expr GT expr  */
#line 225 "control.y"
                                {(yyval.no) = makeCOperatorNode('>',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2196 "y.tab.c"
    break;

  case 101: /* expr: expr LE expr  */
#line 226 "control.y"
                                {(yyval.no) = makeCOperatorNode('L',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2202 "y.tab.c"
    break;

  case 102: /* expr: expr GE expr  */
#line 227 "control.y"
                                {(yyval.no) = makeCOperatorNode('G',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2208 "y.tab.c"
    break;

  case 103: /* expr: expr NE expr  */
#line 228 "control.y"
                                {(yyval.no) = makeCOperatorNode('N',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2214 "y.tab.c"
    break;

  case 104: /* expr: expr EQ expr  */
#line 229 "control.y"
                                {(yyval.no) = makeCOperatorNode('E',(yyvsp[-2].no),(yyvsp[0].no));}
#line 2220 "y.tab.c"
    break;

  case 105: /* expr: ID '[' expr ']'  */
#line 230 "control.y"
                                                {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-3].str)), (yyvsp[-1].no));}
#line 2226 "y.tab.c"
    break;

  case 106: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 231 "control.y"
                                        {(yyval.no) = makeArrayAccessNode(makeVariableUseNode((yyvsp[-6].str)), makeConnectNode((yyvsp[-4].no),(yyvsp[-1].no)));}
#line 2232 "y.tab.c"
    break;

  case 107: /* expr: AMPERSAND ID  */
#line 232 "control.y"
                                                {(yyval.no) = makeAddrNode((tnode*)makeVariableUseNode((yyvsp[0].str)));}
#line 2238 "y.tab.c"
    break;

  case 108: /* expr: MUL expr  */
#line 233 "control.y"
                                { (yyval.no) = makeDerefNode((yyvsp[0].no)); }
#line 2244 "y.tab.c"
    break;

  case 109: /* expr: ID '(' ')'  */
#line 234 "control.y"
                                                        {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-2].str)),NULL);}
#line 2250 "y.tab.c"
    break;

  case 110: /* expr: ID '(' ArgList ')'  */
#line 235 "control.y"
                                                {(yyval.no) = makeFnCallNode(makeVariableUseNode((yyvsp[-3].str)),(yyvsp[-1].no));}
#line 2256 "y.tab.c"
    break;

  case 111: /* expr: Field  */
#line 236 "control.y"
                  { (yyval.no) = (yyvsp[0].no); }
#line 2262 "y.tab.c"
    break;

  case 112: /* expr: NULLL  */
#line 237 "control.y"
                 { (yyval.no) = makeConstantNode(0); (yyval.no)->typeEntry = TLookup("null"); }
#line 2268 "y.tab.c"
    break;


#line 2272 "y.tab.c"

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

#line 240 "control.y"


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
