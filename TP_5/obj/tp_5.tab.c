
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "../src/tp_5.y"


#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tabla.h"

#define YYDEBUG 1
// PROTORIPO DE FUNCIONES QUE SE VAN A USAR EN EL ANÁLISIS
int yylex (); // --> COMUNICA EL ARCHIVO .l CON EL .y
int yyerror (char*); // --> MUESTRA EL MENSAJE DE ERROR CUANDO HAY ERROR SINTÁCTICO
int printError(char*, int); // --> MUESTRA CUANDO HAY ERROR LEXICO
void variableNoDeclarada(char* nombreVariable); // --> MUESTRA ERROR DE SI UNA VARIABLE NO SE DECLARO

unsigned count = 0;

FILE* yyin; // --> ARCHIVO DE ENTRADA
FILE* yyout; // --> ARCHIVO DE SALIDA

// ESTA VARIABLES SE UTILIZAN PARA OBTENER LOS TIPOS DE DATOS
char* tempVar = NULL;
char* tempPointer = NULL;

Funcion* parameters[20]; // --> VA GUARDANDO LOS PARAMETROS CUANDO SE RECONOCEN
int pos = 0; // --> CONTADOR PARA LOS PARAMETROS
unsigned cantLineas; // --> CONTADOR DE LINEAS EN EL CÓDIGO



/* Line 189 of yacc.c  */
#line 104 "tp_5.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM_ENTERO = 258,
     NUM_REAL = 259,
     TIPO_DATO = 260,
     ID = 261,
     ASIG_MULT = 262,
     ASIG_DIV = 263,
     ASIG_MOD = 264,
     ASIG_SUMA = 265,
     ASIG_RESTA = 266,
     ASIG_DESP_IZQ = 267,
     ASIG_DESP_DER = 268,
     ASIG_AND_BIN = 269,
     ASIG_XOR_BIN = 270,
     ASIG_OR_BIN = 271,
     OP_INC = 272,
     OP_DEC = 273,
     OP_IGUALDAD = 274,
     OP_DESIGUALDAD = 275,
     OP_AND = 276,
     OP_OR = 277,
     OP_MENOR_IGUAL = 278,
     OP_MAYOR_IGUAL = 279,
     OP_DESP_IZQ = 280,
     OP_DESP_DER = 281,
     OP_MIEMBRO_PUNT = 282,
     CHAR = 283,
     STRING = 284,
     SIZEOF = 285,
     CLASE_ALM = 286,
     CALIF_TIPO = 287,
     STRUCT_UNION = 288,
     ENUM = 289,
     CONTINUE = 290,
     BREAK = 291,
     IF = 292,
     ELSE = 293,
     SWITCH = 294,
     FOR = 295,
     DO = 296,
     WHILE = 297,
     CASE = 298,
     DEFAULT = 299,
     RETURN = 300,
     GOTO = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 86 "../src/tp_5.y"

  struct yylval_struct
    {
        int tipo;
        int valorEntero;
        float valorReal;
        char* valorCaracter;
    } mystruct;

    char*  valorString;



/* Line 214 of yacc.c  */
#line 200 "tp_5.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 212 "tp_5.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNRULES -- Number of states.  */
#define YYNSTATES  336

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      48,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,     2,     2,    68,    61,     2,
      51,    52,    66,    64,    55,    65,    71,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    47,
      62,    58,    63,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,    59,    49,    69,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    11,    13,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    48,    50,    54,    56,    62,    64,    66,
      68,    70,    72,    74,    76,    78,    80,    82,    84,    86,
      90,    92,    96,    98,   102,   104,   108,   110,   114,   116,
     120,   124,   126,   130,   134,   138,   142,   144,   148,   152,
     154,   158,   162,   164,   168,   172,   176,   178,   184,   186,
     189,   192,   195,   198,   203,   205,   207,   209,   211,   213,
     215,   217,   222,   227,   231,   235,   238,   241,   243,   247,
     249,   251,   255,   258,   261,   264,   267,   268,   270,   272,
     276,   278,   282,   284,   289,   290,   292,   294,   298,   300,
     302,   304,   310,   313,   314,   316,   318,   321,   325,   328,
     331,   332,   334,   336,   340,   342,   346,   347,   349,   351,
     352,   354,   357,   358,   360,   363,   367,   368,   370,   372,
     375,   377,   381,   386,   391,   396,   397,   399,   401,   403,
     407,   410,   413,   414,   416,   418,   422,   428,   431,   433,
     437,   439,   443,   445,   448,   450,   453,   457,   462,   467,
     468,   470,   471,   473,   475,   477,   479,   481,   483,   485,
     489,   492,   493,   495,   497,   501,   504,   508,   509,   511,
     512,   514,   517,   521,   523,   526,   532,   540,   546,   552,
     560,   570,   571,   573,   575,   580,   584,   588,   591,   594,
     598
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      73,     0,    -1,    -1,    73,    74,    -1,    -1,    98,    47,
      -1,   139,    -1,     1,    75,    -1,    47,    -1,    48,    -1,
      49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,
      54,    -1,     3,    -1,     4,    -1,    28,    -1,    77,    -1,
       6,    -1,    79,    -1,    78,    55,    79,    -1,    80,    -1,
      93,    81,    79,    -1,    82,    -1,    82,    56,    78,    57,
      80,    -1,    58,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,
      15,    -1,    16,    -1,    83,    -1,    82,    22,    83,    -1,
      84,    -1,    83,    21,    84,    -1,    85,    -1,    84,    59,
      85,    -1,    86,    -1,    85,    60,    86,    -1,    87,    -1,
      86,    61,    87,    -1,    88,    -1,    87,    19,    88,    -1,
      87,    20,    88,    -1,    89,    -1,    88,    62,    89,    -1,
      88,    63,    89,    -1,    88,    23,    89,    -1,    88,    24,
      89,    -1,    90,    -1,    89,    25,    90,    -1,    89,    26,
      90,    -1,    91,    -1,    90,    64,    91,    -1,    90,    65,
      91,    -1,    92,    -1,    91,    66,    92,    -1,    91,    67,
      92,    -1,    91,    68,    92,    -1,    93,    -1,    51,   134,
      52,    92,    93,    -1,    95,    -1,    17,    93,    -1,    18,
      93,    -1,    94,    92,    -1,    30,    93,    -1,    30,    51,
     134,    52,    -1,    61,    -1,    66,    -1,    64,    -1,    65,
      -1,    69,    -1,    70,    -1,    97,    -1,    95,    53,    78,
      54,    -1,    95,    51,    96,    52,    -1,    95,    71,     6,
      -1,    95,    27,     6,    -1,    95,    17,    -1,    95,    18,
      -1,    79,    -1,    96,    55,    79,    -1,    76,    -1,    29,
      -1,    51,    78,    52,    -1,    99,   101,    -1,    31,   100,
      -1,   106,   100,    -1,    32,   100,    -1,    -1,    99,    -1,
     102,    -1,   102,    55,   101,    -1,   118,    -1,   118,    58,
     103,    -1,    79,    -1,    50,   105,   104,    49,    -1,    -1,
      55,    -1,   103,    -1,   105,    55,   103,    -1,     5,    -1,
     107,    -1,   130,    -1,    33,   108,    50,   109,    49,    -1,
      33,     6,    -1,    -1,     6,    -1,   110,    -1,   109,   110,
      -1,   111,   113,    47,    -1,   106,   112,    -1,    32,   112,
      -1,    -1,   111,    -1,   114,    -1,   113,    55,   114,    -1,
     118,    -1,   115,    57,   116,    -1,    -1,   118,    -1,    80,
      -1,    -1,   116,    -1,   119,   123,    -1,    -1,   120,    -1,
      66,   121,    -1,    66,   121,   120,    -1,    -1,   122,    -1,
      32,    -1,   122,    32,    -1,     6,    -1,    51,   118,    52,
      -1,   123,    53,   117,    54,    -1,   123,    51,   138,    52,
      -1,   123,    51,   124,    52,    -1,    -1,   129,    -1,   126,
      -1,   127,    -1,   126,    55,   127,    -1,    99,   118,    -1,
      99,   128,    -1,    -1,   135,    -1,     6,    -1,   129,    55,
       6,    -1,    34,   108,    50,   131,    49,    -1,    34,     6,
      -1,   132,    -1,   131,    55,   132,    -1,   133,    -1,   133,
      58,   116,    -1,     6,    -1,   111,   128,    -1,   120,    -1,
     119,   136,    -1,    51,   135,    52,    -1,   137,    53,   117,
      54,    -1,   137,    51,   138,    52,    -1,    -1,   136,    -1,
      -1,   125,    -1,   140,    -1,   142,    -1,   148,    -1,   149,
      -1,   151,    -1,   152,    -1,    99,   118,   142,    -1,   141,
      47,    -1,    -1,    78,    -1,    47,    -1,    50,   143,    49,
      -1,   144,   145,    -1,   143,   144,   145,    -1,    -1,   146,
      -1,    -1,   147,    -1,    98,    47,    -1,   146,    98,    47,
      -1,   139,    -1,   147,   139,    -1,    37,    51,    78,    52,
     139,    -1,    37,    51,    78,    52,   139,    38,   139,    -1,
      39,    51,    78,    52,   139,    -1,    42,    51,    78,    52,
     139,    -1,    41,   139,    42,    51,    78,    52,    47,    -1,
      40,    51,   150,    47,   141,    47,   141,    52,   139,    -1,
      -1,    78,    -1,    98,    -1,    43,   116,    57,   139,    -1,
      44,    57,   139,    -1,     6,    57,   139,    -1,    35,    47,
      -1,    36,    47,    -1,    45,   141,    47,    -1,    46,     6,
      47,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   105,   106,   107,   108,   111,   112,
     113,   114,   115,   116,   117,   118,   120,   121,   122,   123,
     126,   141,   142,   145,   146,   149,   150,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   166,   167,
     170,   171,   174,   175,   178,   179,   182,   183,   186,   187,
     188,   191,   192,   193,   194,   195,   198,   199,   200,   203,
     204,   227,   230,   231,   232,   233,   236,   237,   240,   241,
     242,   243,   244,   245,   248,   249,   250,   251,   252,   253,
     256,   257,   258,   259,   260,   261,   262,   265,   266,   269,
     270,   271,   275,   278,   279,   280,   283,   284,   287,   296,
     306,   307,   310,   311,   314,   315,   318,   319,   322,   323,
     324,   327,   328,   331,   332,   335,   336,   339,   342,   343,
     346,   347,   350,   351,   354,   355,   358,   359,   362,   365,
     366,   369,   372,   373,   376,   377,   380,   381,   384,   385,
     388,   389,   390,   391,   392,   395,   396,   399,   402,   403,
     406,   410,   413,   414,   417,   418,   421,   422,   425,   426,
     429,   430,   433,   436,   439,   440,   443,   444,   445,   448,
     449,   452,   453,   456,   457,   458,   459,   460,   461,   462,
     477,   480,   481,   484,   485,   488,   489,   492,   493,   496,
     497,   500,   501,   504,   505,   509,   510,   511,   514,   515,
     516,   519,   520,   521,   524,   525,   526,   529,   530,   531,
     532
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM_ENTERO", "NUM_REAL", "TIPO_DATO",
  "ID", "ASIG_MULT", "ASIG_DIV", "ASIG_MOD", "ASIG_SUMA", "ASIG_RESTA",
  "ASIG_DESP_IZQ", "ASIG_DESP_DER", "ASIG_AND_BIN", "ASIG_XOR_BIN",
  "ASIG_OR_BIN", "OP_INC", "OP_DEC", "OP_IGUALDAD", "OP_DESIGUALDAD",
  "OP_AND", "OP_OR", "OP_MENOR_IGUAL", "OP_MAYOR_IGUAL", "OP_DESP_IZQ",
  "OP_DESP_DER", "OP_MIEMBRO_PUNT", "CHAR", "STRING", "SIZEOF",
  "CLASE_ALM", "CALIF_TIPO", "STRUCT_UNION", "ENUM", "CONTINUE", "BREAK",
  "IF", "ELSE", "SWITCH", "FOR", "DO", "WHILE", "CASE", "DEFAULT",
  "RETURN", "GOTO", "';'", "'\\n'", "'}'", "'{'", "'('", "')'", "'['",
  "']'", "','", "'?'", "':'", "'='", "'|'", "'^'", "'&'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'~'", "'!'", "'.'", "$accept",
  "input", "line", "finDeLinea", "const", "const_enum", "expresion",
  "exp_asignacion", "exp_condicional", "op_asignacion", "exp_OR_log",
  "exp_AND_log", "exp_OR_in", "exp_OR_ex", "exp_AND", "exp_igualdad",
  "exp_relacional", "exp_desp", "exp_aditiva", "exp_multip",
  "exp_conversion", "exp_unaria", "op_unario", "exp_sufijo",
  "lista_argumentos", "exp_primaria", "declaracion",
  "especificadores_declaracion", "especificadores_declaracion_opc",
  "lista_declaradores", "declarador", "inicializador", "coma_opc",
  "lista_inicializadores", "especificador_tipo",
  "especificador_struct_union", "ID_opc", "lista_declaradores_struct",
  "declaracion_struct", "lista_calificadores", "lista_calificadores_opc",
  "declaradores_struct", "decla_struct", "decla_opc", "exp_constante",
  "exp_constante_opc", "decla", "puntero_opc", "puntero",
  "lista_calificadores_tipos_opc", "lista_calificadores_tipos",
  "declarador_directo", "lista_identificadores_opc", "lista_tipos_param",
  "lista_parametros", "declaracion_parametro", "declarador_abstracto_opc",
  "lista_identificadores", "especificador_enum", "lista_enumeradores",
  "enumerador", "const_de_enumeracion", "nombre_tipo",
  "declarador_abstracto", "declarador_abstracto_directo",
  "declarador_abstracto_directo_opc", "lista_tipos_param_opc", "sentencia",
  "sentencia_exp", "expresion_opc", "sentencia_compuesta",
  "lista_compuesta", "lista_declaraciones_opc", "lista_sentencias_opc",
  "lista_declaraciones", "lista_sentencias", "sentencia_seleccion",
  "sentencia_iteracion", "for_opc", "sentencia_etiquetada",
  "sentencia_salto", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    59,    10,   125,
     123,    40,    41,    91,    93,    44,    63,    58,    61,   124,
      94,    38,    60,    62,    43,    45,    42,    47,    37,   126,
      33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      87,    88,    88,    88,    88,    88,    89,    89,    89,    90,
      90,    90,    91,    91,    91,    91,    92,    92,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    97,    98,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   117,
     117,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   123,   123,   124,   124,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   134,   135,   135,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   148,   149,   149,
     149,   150,   150,   150,   151,   151,   151,   152,   152,   152,
     152
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     5,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     3,     2,     2,     1,     3,     1,
       1,     3,     2,     2,     2,     2,     0,     1,     1,     3,
       1,     3,     1,     4,     0,     1,     1,     3,     1,     1,
       1,     5,     2,     0,     1,     1,     2,     3,     2,     2,
       0,     1,     1,     3,     1,     3,     0,     1,     1,     0,
       1,     2,     0,     1,     2,     3,     0,     1,     1,     2,
       1,     3,     4,     4,     4,     0,     1,     1,     1,     3,
       2,     2,     0,     1,     1,     3,     5,     2,     1,     3,
       1,     3,     1,     2,     1,     2,     3,     4,     4,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     0,     1,     1,     3,     2,     3,     0,     1,     0,
       1,     2,     3,     1,     2,     5,     7,     5,     5,     7,
       9,     0,     1,     1,     4,     3,     3,     2,     2,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    16,    17,   108,    20,     0,     0,
      18,    90,     0,    96,    96,   113,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,     0,   183,   187,
       0,    74,    76,    77,    75,    78,    79,     3,    89,    19,
     182,    21,    23,    25,    38,    40,    42,    44,    46,    48,
      51,    56,    59,    62,    66,     0,    68,    80,     0,   132,
      96,   109,   110,     6,   173,     0,   174,   175,   176,   177,
     178,     8,     9,    10,    11,    12,    13,    14,    15,     7,
       0,    20,     0,    69,    70,     0,    72,    97,    93,    95,
     112,     0,   157,     0,   207,   208,     0,     0,   201,   132,
       0,     0,   128,    66,     0,     0,     0,     0,     0,   132,
     187,   189,   188,   120,     0,   120,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    27,     0,
      71,    85,    86,     0,     0,     0,     0,     5,   136,    92,
      98,   100,     0,   133,    94,   180,   206,     0,     0,     0,
       0,     0,   202,   203,     0,     0,     0,     0,     0,   205,
     209,   210,   191,   100,   184,   189,   193,   185,   190,     0,
     121,   119,    91,   118,   169,   133,   163,   153,     0,    22,
      39,     0,    41,    43,    45,    47,    49,    50,    54,    55,
      52,    53,    57,    58,    60,    61,    63,    64,    65,    24,
      84,    87,     0,     0,    83,   138,   134,   137,   132,     0,
     179,   140,   132,   131,    73,     0,   115,   132,   162,     0,
     158,   160,     0,     0,   181,     0,     0,   204,   186,   194,
     192,   132,   165,     0,     0,     0,    82,     0,    81,   135,
     139,    99,     0,   102,   101,     0,   145,   129,   111,   116,
       0,   122,     0,   124,   156,     0,     0,   195,   197,     0,
       0,   198,     0,   171,   129,    67,    26,    88,   106,   104,
     141,   154,   132,     0,   172,   147,   148,   146,     0,   130,
       0,   117,   132,     0,   159,   161,     0,   181,     0,   166,
       0,     0,   105,     0,   150,   169,   151,   144,     0,     0,
     143,   142,   123,   125,   196,     0,   199,   168,   167,   107,
     103,   132,   149,   155,     0,   200
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    37,    79,    38,    39,    40,    41,    42,   149,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   222,    57,   108,    99,    88,   159,
     160,   264,   313,   289,    60,    61,    91,   235,   236,   116,
     191,   270,   271,   272,   299,   300,   183,   162,   163,   226,
     227,   233,   293,   294,   295,   296,   196,   297,    62,   239,
     240,   241,   117,   197,   252,   253,   298,   186,    64,    65,
      66,   110,   111,   187,   112,   188,    67,    68,   174,    69,
      70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -248
static const yytype_int16 yypact[] =
{
    -248,   295,  -248,   240,  -248,  -248,  -248,   -23,   138,   138,
    -248,  -248,   465,   231,   231,    47,    65,    62,    89,    43,
     101,   113,   345,   120,   485,   -16,   485,   172,  -248,   231,
     415,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
      85,  -248,  -248,    -2,   169,   176,   133,   144,    39,    83,
     134,   121,   -20,  -248,   218,   485,    15,  -248,   197,   185,
     231,  -248,  -248,  -248,  -248,   208,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
     345,  -248,   485,  -248,  -248,   415,  -248,  -248,  -248,  -248,
     210,   221,   210,   227,  -248,  -248,   485,   485,   395,   185,
     237,   485,  -248,  -248,   223,   345,   234,   255,   256,   185,
      51,   345,   231,    69,    26,    69,   -15,   252,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,   485,
    -248,  -248,  -248,   300,   485,   485,   301,  -248,   276,  -248,
     254,     5,    19,  -248,  -248,  -248,  -248,   258,    69,   305,
      53,    59,    85,  -248,   267,    88,   264,   106,   345,  -248,
    -248,  -248,  -248,   259,  -248,   345,  -248,  -248,   345,   269,
    -248,  -248,  -248,  -248,   268,   117,  -248,  -248,   485,  -248,
     169,   161,   176,   133,   144,    39,    83,    83,   134,   134,
     134,   134,   121,   121,   -20,   -20,  -248,  -248,  -248,  -248,
    -248,  -248,   124,   146,  -248,  -248,   185,   288,   185,   145,
    -248,  -248,   185,   168,  -248,   148,  -248,   -26,  -248,   -10,
    -248,   263,   345,   345,   485,   485,   345,  -248,  -248,  -248,
    -248,   185,   201,   205,   138,   485,  -248,   485,  -248,  -248,
    -248,  -248,   145,  -248,  -248,   270,   241,   485,  -248,  -248,
     -12,  -248,   286,   287,  -248,   305,   485,   309,  -248,   306,
     139,  -248,   302,   231,   485,  -248,  -248,  -248,  -248,   297,
    -248,  -248,   -28,   303,  -248,   311,  -248,   312,   316,  -248,
     304,  -248,   -26,   485,  -248,  -248,   345,   485,   310,  -248,
     317,   318,   145,   321,  -248,    22,  -248,  -248,   231,   365,
    -248,  -248,  -248,  -248,  -248,   331,  -248,  -248,  -248,  -248,
    -248,   185,  -248,  -248,   345,  -248
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,  -248,  -248,  -248,   -21,   -92,   -17,  -248,
    -248,   274,   273,   275,   279,   280,    87,   -40,   108,   135,
     -44,    -6,  -248,  -248,  -248,  -248,    35,     0,     9,   175,
    -248,  -247,  -248,  -248,   -18,  -248,   389,  -248,   173,   -96,
     292,  -248,   114,  -248,   -19,   147,   -49,  -108,   -94,  -248,
    -248,  -248,  -248,  -248,  -248,    99,   130,  -248,  -248,  -248,
     155,  -248,   349,  -235,  -248,  -248,   152,    -1,  -248,   -22,
    -131,  -248,   326,   253,  -248,  -248,  -248,  -248,  -248,  -248,
    -248
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -171
static const yytype_int16 yytable[] =
{
      63,    59,    83,    84,   106,   104,    86,   102,   194,   114,
     161,   150,   115,    87,    87,   288,   282,   190,   103,   190,
     119,   100,   195,    89,  -152,   231,   199,  -152,   231,   109,
     230,  -126,   151,   152,    80,   301,    58,  -152,   158,   274,
     158,   105,   153,   302,   230,   275,   135,   136,   137,   103,
     175,   158,    28,    90,   120,    29,     6,   219,   125,   126,
      87,   114,   221,   229,   114,   329,   154,   115,   155,   164,
     232,    92,   237,   331,     6,   170,   171,   172,   192,   166,
     177,   118,    13,    14,    15,    16,   156,   208,   209,   210,
     211,   216,   217,   218,    96,   115,   282,   115,   109,   201,
     184,   113,    15,    16,   179,   242,   127,   128,   118,    94,
     109,   243,   109,   103,   118,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   259,   173,   223,    28,    95,   263,    29,   237,
     118,     4,     5,   194,    81,   129,   130,   189,     4,     5,
     115,    81,    97,     6,   254,     8,     9,   195,   246,   131,
     132,   118,     8,     9,    98,   287,    10,    11,    12,  -164,
     263,   101,  -164,    10,    11,    12,   256,   247,   107,   257,
     113,    15,    16,   265,   315,   133,   134,   249,   273,    82,
     121,   308,   103,   123,   118,   262,    30,   268,   195,    31,
     258,   118,    32,    33,    34,   124,    31,    35,    36,    32,
      33,    34,   206,   207,    35,    36,   118,   115,   255,   266,
     263,   267,   279,   315,   280,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   122,     6,   195,   286,   212,
     213,   277,   278,   314,   157,   281,     6,   291,   285,   103,
     102,   158,  -170,   273,  -170,   165,   283,   305,   284,   102,
    -114,   103,    13,    14,    15,    16,   292,   102,   214,   215,
     103,   168,    13,    14,    15,    16,   148,   169,   103,   176,
     178,   180,   265,   292,   323,   325,   102,    71,    72,    73,
      74,    75,    76,    77,    78,     2,     3,   103,     4,     5,
       6,     7,   181,   182,   198,   324,   220,   224,   225,   228,
     234,   238,     8,     9,   244,   245,   250,   229,   292,   251,
     260,   276,   290,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   335,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   303,  -127,    29,    30,   306,     4,     5,
       6,     7,   312,   307,   309,   317,    31,   326,   321,    32,
      33,    34,     8,     9,    35,    36,   318,   319,   320,   327,
     330,   333,   328,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   334,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   200,   202,    29,    30,   203,     4,     5,
       6,    81,   204,   261,   205,    93,    31,   193,   269,    32,
      33,    34,     8,     9,    35,    36,   322,   332,     4,     5,
       6,    81,   316,    10,    11,    12,    13,    14,    15,    16,
     304,   311,     8,     9,   167,   310,   185,     0,   248,     0,
       0,     0,     0,    10,    11,    12,    30,   113,    15,    16,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
      33,    34,     0,     0,    35,    36,    30,     0,     4,     5,
       0,    81,     0,     0,     0,     0,    31,     0,     0,    32,
      33,    34,     8,     9,    35,    36,     0,     0,     4,     5,
       0,    81,     0,    10,    11,    12,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,    12,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
      33,    34,     0,     0,    35,    36,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
      33,    34,     0,     0,    35,    36
};

static const yytype_int16 yycheck[] =
{
       1,     1,     8,     9,    26,    24,    12,    24,   116,    30,
      59,    55,    30,    13,    14,   262,   251,   113,    24,   115,
      22,    22,   116,    14,    52,     6,   118,    55,     6,    29,
     161,    57,    17,    18,    57,    47,     1,    52,    66,    49,
      66,    57,    27,    55,   175,    55,    66,    67,    68,    55,
      99,    66,    47,     6,    56,    50,     5,   149,    19,    20,
      60,    82,   154,    58,    85,   312,    51,    85,    53,    60,
      51,     6,   168,    51,     5,    96,    97,    98,    52,    80,
     101,    55,    31,    32,    33,    34,    71,   127,   128,   129,
     130,   135,   136,   137,    51,   113,   331,   115,    98,   120,
      49,    32,    33,    34,   105,    52,    23,    24,    55,    47,
     110,    52,   112,   119,    55,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   226,    98,   155,    47,    47,   229,    50,   235,
      55,     3,     4,   251,     6,    62,    63,   112,     3,     4,
     168,     6,    51,     5,   198,    17,    18,   251,    52,    25,
      26,    55,    17,    18,    51,   257,    28,    29,    30,    52,
     262,    51,    55,    28,    29,    30,    52,   178,     6,    55,
      32,    33,    34,   232,   292,    64,    65,   188,   237,    51,
      21,    52,   198,    60,    55,    50,    51,    49,   292,    61,
      54,    55,    64,    65,    66,    61,    61,    69,    70,    64,
      65,    66,   125,   126,    69,    70,    55,   235,    57,    51,
     312,    53,   244,   331,   245,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    59,     5,   331,   255,   131,
     132,   242,   243,   292,    47,   246,     5,     6,   254,   255,
     267,    66,    51,   302,    53,    47,    51,   276,    53,   276,
      50,   267,    31,    32,    33,    34,   266,   284,   133,   134,
     276,    50,    31,    32,    33,    34,    58,    50,   284,    42,
      57,    47,   331,   283,   303,   307,   303,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     1,   303,     3,     4,
       5,     6,    47,    47,    52,   306,     6,     6,    32,    55,
      52,     6,    17,    18,    47,    51,    47,    58,   318,    51,
      32,    58,    52,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,   334,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    57,    57,    50,    51,    38,     3,     4,
       5,     6,    55,    47,    52,    52,    61,    47,    54,    64,
      65,    66,    17,    18,    69,    70,    55,    55,    52,    52,
      49,     6,    54,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    52,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   119,   121,    50,    51,   122,     3,     4,
       5,     6,   123,   228,   124,    16,    61,   115,   235,    64,
      65,    66,    17,    18,    69,    70,   302,   318,     3,     4,
       5,     6,   292,    28,    29,    30,    31,    32,    33,    34,
     275,   284,    17,    18,    85,   283,   110,    -1,   185,    -1,
      -1,    -1,    -1,    28,    29,    30,    51,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,
      65,    66,    -1,    -1,    69,    70,    51,    -1,     3,     4,
      -1,     6,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,
      65,    66,    17,    18,    69,    70,    -1,    -1,     3,     4,
      -1,     6,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,
      65,    66,    -1,    -1,    69,    70,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,
      65,    66,    -1,    -1,    69,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    73,     0,     1,     3,     4,     5,     6,    17,    18,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    50,
      51,    61,    64,    65,    66,    69,    70,    74,    76,    77,
      78,    79,    80,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    97,    98,    99,
     106,   107,   130,   139,   140,   141,   142,   148,   149,   151,
     152,    47,    48,    49,    50,    51,    52,    53,    54,    75,
      57,     6,    51,    93,    93,    51,    93,    99,   100,   100,
       6,   108,     6,   108,    47,    47,    51,    51,    51,    99,
     139,    51,    80,    93,   116,    57,   141,     6,    98,    99,
     143,   144,   146,    32,    78,   106,   111,   134,    55,    22,
      56,    21,    59,    60,    61,    19,    20,    23,    24,    62,
      63,    25,    26,    64,    65,    66,    67,    68,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    58,    81,
      92,    17,    18,    27,    51,    53,    71,    47,    66,   101,
     102,   118,   119,   120,   100,    47,   139,   134,    50,    50,
      78,    78,    78,    98,   150,   118,    42,    78,    57,   139,
      47,    47,    47,   118,    49,   144,   139,   145,   147,    98,
     111,   112,    52,   112,   119,   120,   128,   135,    52,    79,
      83,    78,    84,    85,    86,    87,    88,    88,    89,    89,
      89,    89,    90,    90,    91,    91,    92,    92,    92,    79,
       6,    79,    96,    78,     6,    32,   121,   122,    55,    58,
     142,     6,    51,   123,    52,   109,   110,   111,     6,   131,
     132,   133,    52,    52,    47,    51,    52,   139,   145,   139,
      47,    51,   136,   137,    92,    57,    52,    55,    54,   120,
      32,   101,    50,    79,   103,   118,    51,    53,    49,   110,
     113,   114,   115,   118,    49,    55,    58,   139,   139,   141,
      78,   139,   135,    51,    53,    93,    80,    79,   103,   105,
      52,     6,    99,   124,   125,   126,   127,   129,   138,   116,
     117,    47,    55,    57,   132,   116,    38,    47,    52,    52,
     138,   117,    55,   104,   118,   119,   128,    52,    55,    55,
      52,    54,   114,   116,   139,   141,    47,    52,    54,   103,
      49,    51,   127,     6,    52,   139
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:

/* Line 1455 of yacc.c  */
#line 106 "../src/tp_5.y"
    {tempVar = NULL; tempPointer = NULL;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 108 "../src/tp_5.y"
    { yyerrok; yyerror("");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 120 "../src/tp_5.y"
    {(yyval.mystruct).tipo = (yyvsp[(1) - (1)].mystruct).tipo; (yyval.mystruct).valorEntero = (yyvsp[(1) - (1)].mystruct).valorEntero; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 121 "../src/tp_5.y"
    {(yyval.mystruct).tipo = (yyvsp[(1) - (1)].mystruct).tipo; (yyval.mystruct).valorReal = (yyvsp[(1) - (1)].mystruct).valorReal;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 122 "../src/tp_5.y"
    {{(yyval.mystruct).tipo = (yyvsp[(1) - (1)].mystruct).tipo; (yyval.mystruct).valorCaracter = (yyvsp[(1) - (1)].mystruct).valorCaracter;} ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 126 "../src/tp_5.y"
    {  Simbolo* aux = devolverSimbolo((yyvsp[(1) - (1)].valorString));
                    if(aux) {
                      if(! strcmp(aux->tipoDato, "int") || ! strcmp(aux->tipoDato, "unsigned") || ! strcmp(aux->tipoDato, "long")){ 
                        (yyval.mystruct).tipo = 0; (yyval.mystruct).valorEntero = aux->valor.valEnt ;}
                    else if(! strcmp(aux->tipoDato, "float") || ! strcmp(aux->tipoDato, "double")){
                      (yyval.mystruct).tipo = 1; (yyval.mystruct).valorReal = aux->valor.valReal ;}
                    else if(! strcmp(aux->tipoDato, "char")){
                      (yyval.mystruct).tipo = 2; (yyval.mystruct).valorCaracter = aux->valor.valChar ;}
                    }
                    else{
                      variableNoDeclarada((yyvsp[(1) - (1)].valorString));
                        }
             ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 203 "../src/tp_5.y"
    {(yyval.mystruct) = (yyvsp[(1) - (1)].mystruct);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 204 "../src/tp_5.y"
    { if((yyvsp[(1) - (3)].mystruct).tipo==(yyvsp[(3) - (3)].mystruct).tipo)
    { 
        if((yyvsp[(1) - (3)].mystruct).tipo==1)
    
        {
            (yyval.mystruct).valorEntero=(yyvsp[(1) - (3)].mystruct).valorEntero+(yyvsp[(3) - (3)].mystruct).valorEntero;
        }
        
        else if((yyvsp[(1) - (3)].mystruct).tipo==2)
        
        {
            (yyval.mystruct).valorReal=(yyvsp[(1) - (3)].mystruct).valorReal+(yyvsp[(3) - (3)].mystruct).valorReal;
        }

        else{
           
        }
    }  
    else
    {
        fprintf(yyout ,"\nLos operandos son de distinto tipo en linea %d\n" , cantLineas);
    }     
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 230 "../src/tp_5.y"
    {(yyval.mystruct) = (yyvsp[(1) - (1)].mystruct);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 236 "../src/tp_5.y"
    {(yyval.mystruct) = (yyvsp[(1) - (1)].mystruct);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 240 "../src/tp_5.y"
    {(yyval.mystruct) = (yyvsp[(1) - (1)].mystruct);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 256 "../src/tp_5.y"
    {(yyval.mystruct) = (yyvsp[(1) - (1)].mystruct);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 269 "../src/tp_5.y"
    {(yyval.mystruct) = (yyvsp[(1) - (1)].mystruct);;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 278 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(1) - (2)].valorString));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 279 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(1) - (2)].valorString));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 280 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(1) - (2)].valorString));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 287 "../src/tp_5.y"
    { Simbolo* aux = devolverSimbolo((yyvsp[(1) - (1)].valorString));
                                                          if(aux == NULL){
                                                            fprintf(yyout, "\nSe declara la variable: \'%s\' de tipo: \'%s\' en linea %d\n", (yyvsp[(1) - (1)].valorString), tempVar , cantLineas);
                                                            insertarSimbolo(crearSimbolo(tempVar,(yyvsp[(1) - (1)].valorString),VAR));}
                                                          else{
                                                            fprintf(yyout,"\nERROR:Doble declaracion de la variable |%s| en linea %d \n", (yyvsp[(1) - (1)].valorString) , cantLineas);
                                                          }
                                                        ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 296 "../src/tp_5.y"
    { Simbolo* aux = devolverSimbolo((yyvsp[(1) - (3)].valorString));
                                                          if(aux == NULL){
                                                            fprintf(yyout, "\nSe declara la variable: \'%s\' de tipo: \'%s\' en linea %d\n", (yyvsp[(1) - (3)].valorString), tempVar, cantLineas);
                                                            insertarSimbolo(crearSimbolo(tempVar,(yyvsp[(1) - (3)].valorString),VAR));}
                                                          else{
                                                            fprintf(yyout,"\nERROR:Doble declaracion de la variable |%s| en linea %d \n", (yyvsp[(1) - (3)].valorString) , cantLineas);
                                                          }
                                                        ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 306 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(1) - (1)].valorString));;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 307 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(1) - (3)].valorString));;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 322 "../src/tp_5.y"
    {tempVar = strdup((yyvsp[(1) - (1)].valorString));;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 324 "../src/tp_5.y"
    {/*Sacamos nombre_typedef*/;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 369 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(2) - (2)].valorString));;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 388 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(1) - (1)].valorString));;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 389 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(2) - (3)].valorString));;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 390 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(1) - (4)].valorString));;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 391 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(1) - (4)].valorString));;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 392 "../src/tp_5.y"
    {(yyval.valorString) = strdup((yyvsp[(1) - (4)].valorString));;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 406 "../src/tp_5.y"
    {
                                                              parameters[pos] = crearParametro((yyvsp[(1) - (2)].valorString));
                                                              pos++;
                                                            ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 462 "../src/tp_5.y"
    { Simbolo* aux2 = devolverSimbolo((yyvsp[(2) - (3)].valorString));
                                                                      if(aux2 == NULL){
                                                                        fprintf(yyout, "\n Se declara la funcion: \'%s\' que devuelve: \'%s\' en linea %d\n", (yyvsp[(2) - (3)].valorString), (yyvsp[(1) - (3)].valorString),cantLineas);
                                                                        insertarSimbolo(crearSimbolo((yyvsp[(1) - (3)].valorString),(yyvsp[(2) - (3)].valorString),FUNC));
                                                                        Simbolo * aux = devolverSimbolo((yyvsp[(2) - (3)].valorString));
                                                                        for(int i = 0 ; i<pos ; i++){
                                                                          insertarParametro(&(aux->valor.func) , parameters[i] );
                                                                        }
                                                                        pos = 0;}
                                                                    else{
                                                                      fprintf(yyout,"\nERROR:Doble declaracion de la funcion |%s| en linea %d \n", (yyvsp[(2) - (3)].valorString) , cantLineas);
                                                                        }
                                                                    ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 509 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia IF en linea %d\n", cantLineas);;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 510 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia IF y ELSE en linea %d\n", cantLineas);;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 511 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia SWITCH en lineas %d\n",cantLineas);;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 514 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia WHILE en linea %d\n", cantLineas);;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 515 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia DO WHILE en linea %d\n" ,cantLineas);;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 516 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia FOR en linea %d\n", cantLineas);;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 529 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia CONTINUE\n");;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 530 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia BREAK\n");;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 531 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia RETURN\n");;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 532 "../src/tp_5.y"
    {fprintf(yyout, "\nSe encontro la sentencia GO TO\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2147 "tp_5.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 537 "../src/tp_5.y"


Simbolo* tablaSimbolos;


int yyerror (char *mensaje)  /* Funcion de error */
{
  fprintf (yyout, "\nError sintatico en linea %d\n", cantLineas);
}

int printError(char *mensaje, int linea)
{
  fprintf(yyout, "\nSe encontro la cadena lexicamente invalida: %s en la linea: %d\n", mensaje, linea); 
}

void variableNoDeclarada(char* nombreVariable) {
  fprintf(yyout, "\nERROR: La variable/función \'%s\' no fue declarada.\n", nombreVariable);
}

void main(){ 

    yyin = fopen("Codigo.c", "r");
    yyout = fopen("Salida.txt", "w");

    #ifdef BISON_DEBUG
       yydebug = 1;
    #endif
    
    yyparse();

    mostrarTabla(yyout);

    fclose(yyin);
    fclose(yyout);
}
