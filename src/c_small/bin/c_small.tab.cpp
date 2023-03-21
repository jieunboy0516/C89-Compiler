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

#include "c_small.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_KW_AUTO = 3,                    /* KW_AUTO  */
  YYSYMBOL_KW_DOUBLE = 4,                  /* KW_DOUBLE  */
  YYSYMBOL_KW_INT = 5,                     /* KW_INT  */
  YYSYMBOL_KW_STRUCT = 6,                  /* KW_STRUCT  */
  YYSYMBOL_KW_BREAK = 7,                   /* KW_BREAK  */
  YYSYMBOL_KW_ELSE = 8,                    /* KW_ELSE  */
  YYSYMBOL_KW_LONG = 9,                    /* KW_LONG  */
  YYSYMBOL_KW_SWITCH = 10,                 /* KW_SWITCH  */
  YYSYMBOL_KW_CASE = 11,                   /* KW_CASE  */
  YYSYMBOL_KW_ENUM = 12,                   /* KW_ENUM  */
  YYSYMBOL_KW_REGISTER = 13,               /* KW_REGISTER  */
  YYSYMBOL_KW_TYPEDEF = 14,                /* KW_TYPEDEF  */
  YYSYMBOL_KW_CHAR = 15,                   /* KW_CHAR  */
  YYSYMBOL_KW_EXTERN = 16,                 /* KW_EXTERN  */
  YYSYMBOL_KW_RETURN = 17,                 /* KW_RETURN  */
  YYSYMBOL_KW_UNION = 18,                  /* KW_UNION  */
  YYSYMBOL_KW_CONST = 19,                  /* KW_CONST  */
  YYSYMBOL_KW_FOR = 20,                    /* KW_FOR  */
  YYSYMBOL_KW_SIGNED = 21,                 /* KW_SIGNED  */
  YYSYMBOL_KW_VOID = 22,                   /* KW_VOID  */
  YYSYMBOL_KW_DEFUALT = 23,                /* KW_DEFUALT  */
  YYSYMBOL_KW_GOTO = 24,                   /* KW_GOTO  */
  YYSYMBOL_KW_SIZEOF = 25,                 /* KW_SIZEOF  */
  YYSYMBOL_KW_VOLATILE = 26,               /* KW_VOLATILE  */
  YYSYMBOL_KW_DO = 27,                     /* KW_DO  */
  YYSYMBOL_KW_IF = 28,                     /* KW_IF  */
  YYSYMBOL_KW_STATIC = 29,                 /* KW_STATIC  */
  YYSYMBOL_KW_WHILE = 30,                  /* KW_WHILE  */
  YYSYMBOL_T_LSQUAREBRACKET = 31,          /* T_LSQUAREBRACKET  */
  YYSYMBOL_T_RSQUAREBRACKET = 32,          /* T_RSQUAREBRACKET  */
  YYSYMBOL_T_LBRACKET = 33,                /* T_LBRACKET  */
  YYSYMBOL_T_RBRACKET = 34,                /* T_RBRACKET  */
  YYSYMBOL_T_LCURLYBRACKET = 35,           /* T_LCURLYBRACKET  */
  YYSYMBOL_T_RCURLYBRACKET = 36,           /* T_RCURLYBRACKET  */
  YYSYMBOL_T_PERIOD = 37,                  /* T_PERIOD  */
  YYSYMBOL_T_HYPHON = 38,                  /* T_HYPHON  */
  YYSYMBOL_T_EXCLAIM = 39,                 /* T_EXCLAIM  */
  YYSYMBOL_T_EXPONENT = 40,                /* T_EXPONENT  */
  YYSYMBOL_T_QUESTION = 41,                /* T_QUESTION  */
  YYSYMBOL_T_COMMA = 42,                   /* T_COMMA  */
  YYSYMBOL_T_SEMICOLON = 43,               /* T_SEMICOLON  */
  YYSYMBOL_T_LESSTHAN = 44,                /* T_LESSTHAN  */
  YYSYMBOL_T_GREATERTHAN = 45,             /* T_GREATERTHAN  */
  YYSYMBOL_T_AND = 46,                     /* T_AND  */
  YYSYMBOL_T_PERCENT = 47,                 /* T_PERCENT  */
  YYSYMBOL_T_PLUS = 48,                    /* T_PLUS  */
  YYSYMBOL_T_MINUS = 49,                   /* T_MINUS  */
  YYSYMBOL_T_TIMES = 50,                   /* T_TIMES  */
  YYSYMBOL_T_DIVIDE = 51,                  /* T_DIVIDE  */
  YYSYMBOL_T_TILDE = 52,                   /* T_TILDE  */
  YYSYMBOL_T_COLON = 53,                   /* T_COLON  */
  YYSYMBOL_T_VERTICALBAR = 54,             /* T_VERTICALBAR  */
  YYSYMBOL_T_EQUALS = 55,                  /* T_EQUALS  */
  YYSYMBOL_T_HASH = 56,                    /* T_HASH  */
  YYSYMBOL_T_NUMBER = 57,                  /* T_NUMBER  */
  YYSYMBOL_T_DECIMAL_CONST = 58,           /* T_DECIMAL_CONST  */
  YYSYMBOL_T_OCTAL_CONST = 59,             /* T_OCTAL_CONST  */
  YYSYMBOL_T_HEX_CONST = 60,               /* T_HEX_CONST  */
  YYSYMBOL_T_CHAR_CONST = 61,              /* T_CHAR_CONST  */
  YYSYMBOL_T_IDENTIFIER = 62,              /* T_IDENTIFIER  */
  YYSYMBOL_T_E = 63,                       /* T_E  */
  YYSYMBOL_T_SUFFIX_F = 64,                /* T_SUFFIX_F  */
  YYSYMBOL_T_SUFFIX_L = 65,                /* T_SUFFIX_L  */
  YYSYMBOL_T_SUFFIX_U = 66,                /* T_SUFFIX_U  */
  YYSYMBOL_T_DOUBLE_QUOTE = 67,            /* T_DOUBLE_QUOTE  */
  YYSYMBOL_T_SINGLE_QUOTE = 68,            /* T_SINGLE_QUOTE  */
  YYSYMBOL_T_LITERAL_STRING = 69,          /* T_LITERAL_STRING  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_ROOT = 71,                      /* ROOT  */
  YYSYMBOL_TOPLEVEL = 72,                  /* TOPLEVEL  */
  YYSYMBOL_FUNCTION_DEF = 73,              /* FUNCTION_DEF  */
  YYSYMBOL_COMPOUND_STATEMENT = 74,        /* COMPOUND_STATEMENT  */
  YYSYMBOL_STATEMENT_LIST = 75,            /* STATEMENT_LIST  */
  YYSYMBOL_DECLARATION_LIST = 76,          /* DECLARATION_LIST  */
  YYSYMBOL_STATEMENT = 77,                 /* STATEMENT  */
  YYSYMBOL_DECLARATION = 78,               /* DECLARATION  */
  YYSYMBOL_JUMP_STATEMENT = 79,            /* JUMP_STATEMENT  */
  YYSYMBOL_ITERATION_STATEMENT = 80,       /* ITERATION_STATEMENT  */
  YYSYMBOL_IF_STATEMENT = 81,              /* IF_STATEMENT  */
  YYSYMBOL_EXPRESSION = 82,                /* EXPRESSION  */
  YYSYMBOL_CONSTANT = 83,                  /* CONSTANT  */
  YYSYMBOL_TYPE = 84                       /* TYPE  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   69

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  29
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  58

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    77,    77,    80,    81,    84,    87,    88,    89,    95,
      99,   105,   109,   115,   116,   117,   118,   121,   122,   126,
     130,   131,   132,   135,   138,   141,   142,   143,   144,   148
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
  "\"end of file\"", "error", "\"invalid token\"", "KW_AUTO", "KW_DOUBLE",
  "KW_INT", "KW_STRUCT", "KW_BREAK", "KW_ELSE", "KW_LONG", "KW_SWITCH",
  "KW_CASE", "KW_ENUM", "KW_REGISTER", "KW_TYPEDEF", "KW_CHAR",
  "KW_EXTERN", "KW_RETURN", "KW_UNION", "KW_CONST", "KW_FOR", "KW_SIGNED",
  "KW_VOID", "KW_DEFUALT", "KW_GOTO", "KW_SIZEOF", "KW_VOLATILE", "KW_DO",
  "KW_IF", "KW_STATIC", "KW_WHILE", "T_LSQUAREBRACKET", "T_RSQUAREBRACKET",
  "T_LBRACKET", "T_RBRACKET", "T_LCURLYBRACKET", "T_RCURLYBRACKET",
  "T_PERIOD", "T_HYPHON", "T_EXCLAIM", "T_EXPONENT", "T_QUESTION",
  "T_COMMA", "T_SEMICOLON", "T_LESSTHAN", "T_GREATERTHAN", "T_AND",
  "T_PERCENT", "T_PLUS", "T_MINUS", "T_TIMES", "T_DIVIDE", "T_TILDE",
  "T_COLON", "T_VERTICALBAR", "T_EQUALS", "T_HASH", "T_NUMBER",
  "T_DECIMAL_CONST", "T_OCTAL_CONST", "T_HEX_CONST", "T_CHAR_CONST",
  "T_IDENTIFIER", "T_E", "T_SUFFIX_F", "T_SUFFIX_L", "T_SUFFIX_U",
  "T_DOUBLE_QUOTE", "T_SINGLE_QUOTE", "T_LITERAL_STRING", "$accept",
  "ROOT", "TOPLEVEL", "FUNCTION_DEF", "COMPOUND_STATEMENT",
  "STATEMENT_LIST", "DECLARATION_LIST", "STATEMENT", "DECLARATION",
  "JUMP_STATEMENT", "ITERATION_STATEMENT", "IF_STATEMENT", "EXPRESSION",
  "CONSTANT", "TYPE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-52)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       0,   -52,     6,     0,   -52,   -51,   -52,   -52,   -21,   -20,
     -19,     2,   -52,     8,    30,   -16,   -15,   -52,    14,    -2,
     -52,   -52,   -52,   -52,   -52,   -41,   -52,   -52,   -52,   -52,
     -23,   -52,    -3,     8,     8,   -52,   -52,   -52,    26,   -52,
     -42,   -52,     5,    11,    12,   -52,   -52,     8,     8,    30,
      30,    -4,    17,   -52,   -52,   -52,     9,   -52
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    29,     0,     2,     3,     0,     1,     4,     0,     0,
       0,    22,     5,     0,     0,     0,     0,    13,     0,     0,
       9,    11,    14,    16,    15,     0,    25,    26,    27,    28,
       0,    24,     0,     0,     0,     6,    10,     7,     0,    12,
       0,    19,     0,     0,     0,     8,    17,     0,     0,    22,
      22,     0,     0,    23,    20,    18,     0,    21
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,   -52,    37,    38,    36,   -52,   -14,    40,   -52,
     -52,   -52,   -25,   -52,    -9
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    17,    18,    19,    20,    21,    22,
      23,    24,    30,    31,     5
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      32,    46,    25,     1,    36,     1,     6,     1,    43,    44,
      25,     8,     9,    47,    10,    13,    11,    33,    34,    13,
      41,    40,    51,    52,    36,    14,    15,    42,    16,    14,
      15,    13,    16,    11,    37,    53,    54,    11,    48,    55,
       7,    14,    15,    13,    16,    49,    50,    13,    12,    11,
      35,    56,    57,    14,    15,    38,    16,    14,    15,    39,
      16,    11,    45,     0,     0,    11,    26,    27,    28,    29
};

static const yytype_int8 yycheck[] =
{
      14,    43,    11,     5,    18,     5,     0,     5,    33,    34,
      19,    62,    33,    55,    34,    17,    35,    33,    33,    17,
      43,    62,    47,    48,    38,    27,    28,    30,    30,    27,
      28,    17,    30,    35,    36,    49,    50,    35,    33,    43,
       3,    27,    28,    17,    30,    34,    34,    17,    10,    35,
      36,    34,    43,    27,    28,    19,    30,    27,    28,    19,
      30,    35,    36,    -1,    -1,    35,    58,    59,    60,    61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    71,    72,    73,    84,     0,    73,    62,    33,
      34,    35,    74,    17,    27,    28,    30,    74,    75,    76,
      77,    78,    79,    80,    81,    84,    58,    59,    60,    61,
      82,    83,    77,    33,    33,    36,    77,    36,    75,    78,
      62,    43,    30,    82,    82,    36,    43,    55,    33,    34,
      34,    82,    82,    77,    77,    43,    34,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    77,    77,    78,    78,    79,
      80,    80,    80,    81,    82,    83,    83,    83,    83,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     5,     3,     3,     4,     1,
       2,     1,     2,     1,     1,     1,     1,     3,     5,     3,
       5,     7,     0,     5,     1,     1,     1,     1,     1,     1
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
  case 2: /* ROOT: TOPLEVEL  */
#line 77 "src/c_small.y"
               { g_root = (yyvsp[0].FuncDefPtr);}
#line 1184 "bin/c_small.tab.cpp"
    break;

  case 3: /* TOPLEVEL: FUNCTION_DEF  */
#line 80 "src/c_small.y"
                       {(yyval.FuncDefPtr) = (yyvsp[0].FuncDefPtr);}
#line 1190 "bin/c_small.tab.cpp"
    break;

  case 4: /* TOPLEVEL: TOPLEVEL FUNCTION_DEF  */
#line 81 "src/c_small.y"
                                {(yyval.FuncDefPtr) = (yyvsp[0].FuncDefPtr);}
#line 1196 "bin/c_small.tab.cpp"
    break;

  case 5: /* FUNCTION_DEF: TYPE T_IDENTIFIER T_LBRACKET T_RBRACKET COMPOUND_STATEMENT  */
#line 84 "src/c_small.y"
                                                                         {(yyval.FuncDefPtr) = new FuncDef((yyvsp[-4].datatype), *(yyvsp[-3].str), (yyvsp[0].CompoundStatPtr));}
#line 1202 "bin/c_small.tab.cpp"
    break;

  case 6: /* COMPOUND_STATEMENT: T_LCURLYBRACKET STATEMENT_LIST T_RCURLYBRACKET  */
#line 87 "src/c_small.y"
                                                                   {(yyval.CompoundStatPtr) = new CompoundStatement(0,(yyvsp[-1].StatListPtr));  }
#line 1208 "bin/c_small.tab.cpp"
    break;

  case 7: /* COMPOUND_STATEMENT: T_LCURLYBRACKET DECLARATION_LIST T_RCURLYBRACKET  */
#line 88 "src/c_small.y"
                                                                     {(yyval.CompoundStatPtr) = new CompoundStatement((yyvsp[-1].DecListPtr),0);  }
#line 1214 "bin/c_small.tab.cpp"
    break;

  case 8: /* COMPOUND_STATEMENT: T_LCURLYBRACKET DECLARATION_LIST STATEMENT_LIST T_RCURLYBRACKET  */
#line 89 "src/c_small.y"
                                                                                    {(yyval.CompoundStatPtr) = new CompoundStatement((yyvsp[-2].DecListPtr),(yyvsp[-1].StatListPtr));  }
#line 1220 "bin/c_small.tab.cpp"
    break;

  case 9: /* STATEMENT_LIST: STATEMENT  */
#line 95 "src/c_small.y"
                          {(yyval.StatListPtr) = new StatList();
                           (yyval.StatListPtr)->addToList((yyvsp[0].StatPtr));
                                    std::cout << "start" << std::endl; Context test = Context(); std::cout << (yyval.StatListPtr)->codeprint(test) << std::endl;; std::cout << "done" << std::endl; 
                          }
#line 1229 "bin/c_small.tab.cpp"
    break;

  case 10: /* STATEMENT_LIST: STATEMENT_LIST STATEMENT  */
#line 99 "src/c_small.y"
                                          {(yyvsp[-1].StatListPtr)->addToList((yyvsp[0].StatPtr));
                           (yyval.StatListPtr) = (yyvsp[-1].StatListPtr);
                                    std::cout << "start" << std::endl; Context test = Context(); std::cout << (yyval.StatListPtr)->codeprint(test) << std::endl;; std::cout << "done" << std::endl;  
                           }
#line 1238 "bin/c_small.tab.cpp"
    break;

  case 11: /* DECLARATION_LIST: DECLARATION  */
#line 105 "src/c_small.y"
                              {(yyval.DecListPtr) = new DecList();
                           (yyval.DecListPtr)->addToList((yyvsp[0].DecPtr));
                                    std::cout << "start" << std::endl; Context test = Context(); std::cout << (yyval.DecListPtr)->codeprint(test) << std::endl;; std::cout << "done" << std::endl; 
                          }
#line 1247 "bin/c_small.tab.cpp"
    break;

  case 12: /* DECLARATION_LIST: DECLARATION_LIST DECLARATION  */
#line 109 "src/c_small.y"
                                             {(yyvsp[-1].DecListPtr)->addToList((yyvsp[0].DecPtr));
                           (yyval.DecListPtr) = (yyvsp[-1].DecListPtr);
                                    std::cout << "start" << std::endl; Context test = Context(); std::cout << (yyval.DecListPtr)->codeprint(test) << std::endl;; std::cout << "done" << std::endl;  
                           }
#line 1256 "bin/c_small.tab.cpp"
    break;

  case 13: /* STATEMENT: COMPOUND_STATEMENT  */
#line 115 "src/c_small.y"
                              {(yyval.StatPtr) = (yyvsp[0].CompoundStatPtr);}
#line 1262 "bin/c_small.tab.cpp"
    break;

  case 14: /* STATEMENT: JUMP_STATEMENT  */
#line 116 "src/c_small.y"
                          {(yyval.StatPtr) = (yyvsp[0].StatPtr); }
#line 1268 "bin/c_small.tab.cpp"
    break;

  case 15: /* STATEMENT: IF_STATEMENT  */
#line 117 "src/c_small.y"
                        {(yyval.StatPtr) = (yyvsp[0].StatPtr);}
#line 1274 "bin/c_small.tab.cpp"
    break;

  case 16: /* STATEMENT: ITERATION_STATEMENT  */
#line 118 "src/c_small.y"
                               {(yyval.StatPtr) = (yyvsp[0].StatPtr);}
#line 1280 "bin/c_small.tab.cpp"
    break;

  case 17: /* DECLARATION: TYPE T_IDENTIFIER T_SEMICOLON  */
#line 121 "src/c_small.y"
                                            {(yyval.DecPtr) = new Declaration((yyvsp[-2].datatype), *(yyvsp[-1].str), 0);}
#line 1286 "bin/c_small.tab.cpp"
    break;

  case 18: /* DECLARATION: TYPE T_IDENTIFIER T_EQUALS EXPRESSION T_SEMICOLON  */
#line 122 "src/c_small.y"
                                                                {(yyval.DecPtr) = new Declaration((yyvsp[-4].datatype), *(yyvsp[-3].str), (yyvsp[-1].ExpPtr));}
#line 1292 "bin/c_small.tab.cpp"
    break;

  case 19: /* JUMP_STATEMENT: KW_RETURN EXPRESSION T_SEMICOLON  */
#line 126 "src/c_small.y"
                                                 {(yyval.StatPtr) = new JumpStatement(*yylval.str, (yyvsp[-1].ExpPtr));
                                                  std::cout << "STATEMENT LOL" <<std::endl;}
#line 1299 "bin/c_small.tab.cpp"
    break;

  case 20: /* ITERATION_STATEMENT: KW_WHILE T_LBRACKET EXPRESSION T_RBRACKET STATEMENT  */
#line 130 "src/c_small.y"
                                                                         {(yyval.StatPtr) = new WhileStatement((yyvsp[-2].ExpPtr), (yyvsp[0].StatPtr), false);}
#line 1305 "bin/c_small.tab.cpp"
    break;

  case 21: /* ITERATION_STATEMENT: KW_DO STATEMENT KW_WHILE T_LBRACKET EXPRESSION T_RBRACKET T_SEMICOLON  */
#line 131 "src/c_small.y"
                                                                                           {(yyval.StatPtr) = new WhileStatement((yyvsp[-2].ExpPtr), (yyvsp[-5].StatPtr), true);}
#line 1311 "bin/c_small.tab.cpp"
    break;

  case 23: /* IF_STATEMENT: KW_IF T_LBRACKET EXPRESSION T_RBRACKET STATEMENT  */
#line 135 "src/c_small.y"
                                                               {(yyval.StatPtr) = new IfStatement((yyvsp[-2].ExpPtr), (yyvsp[0].StatPtr));}
#line 1317 "bin/c_small.tab.cpp"
    break;

  case 24: /* EXPRESSION: CONSTANT  */
#line 138 "src/c_small.y"
                     {(yyval.ExpPtr) = (yyvsp[0].ExpPtr);}
#line 1323 "bin/c_small.tab.cpp"
    break;

  case 25: /* CONSTANT: T_DECIMAL_CONST  */
#line 141 "src/c_small.y"
                          {(yyval.ExpPtr) = new ConstantValue(std::stoi(*yylval.str));}
#line 1329 "bin/c_small.tab.cpp"
    break;

  case 26: /* CONSTANT: T_OCTAL_CONST  */
#line 142 "src/c_small.y"
                        {(yyval.ExpPtr) = new ConstantValue(std::stoi(*yylval.str, 0, 8));}
#line 1335 "bin/c_small.tab.cpp"
    break;

  case 27: /* CONSTANT: T_HEX_CONST  */
#line 143 "src/c_small.y"
                       {(yyval.ExpPtr) = new ConstantValue(std::stoi(*yylval.str, 0 , 16));}
#line 1341 "bin/c_small.tab.cpp"
    break;

  case 28: /* CONSTANT: T_CHAR_CONST  */
#line 144 "src/c_small.y"
                       {(yyval.ExpPtr) = new ConstantValue((int)(*yylval.str)[0]);}
#line 1347 "bin/c_small.tab.cpp"
    break;

  case 29: /* TYPE: KW_INT  */
#line 148 "src/c_small.y"
             {(yyval.datatype) = yylval.datatype;}
#line 1353 "bin/c_small.tab.cpp"
    break;


#line 1357 "bin/c_small.tab.cpp"

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

#line 151 "src/c_small.y"


Node *g_root;

Node *parseAST(std::string filename)
{
  yyin = fopen(filename.c_str(), "r");
  if(yyin == NULL){
    std::cerr << "Couldn't open input file: " << filename << std::endl;
    exit(1);
  }

  // std::ifstream fs;
  // fs.open(filename.c_str());
  // std::string line ;
  // while(fs >> line)
  // {
  //   std::cout << line << std::endl;
  // }

  g_root = NULL;
  std::cout << yyparse() << std::endl;
  //std::cout << (int)(g_root == 0)<< std::endl;
  return g_root;
}



