
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFICADOR = 258,
     LITERAL_CADENA = 259,
     CONSTANTE_DECIMAL = 260,
     CONSTANTE_OCTAL = 261,
     CONSTANTE_HEXA = 262,
     CONSTANTE_REAL = 263,
     TIPO_DE_DATO = 264,
     OP_ASIGANCION = 265,
     OP_IGUALDAD = 266,
     OP_OR = 267,
     OP_AND = 268,
     OP_RELACIONAL = 269,
     SIZEOF = 270,
     OP_INCREMENTO_DECREMENTO = 271,
     OP_CORRIMIENTO = 272,
     OP_ACCESO = 273,
     ESPEC_DE_CLASE = 274,
     CALIFICADOR_DE_TIPO = 275,
     STRUCT_O_UNION = 276,
     ESPECIFICADOR_ENUM = 277,
     IF = 278,
     SWITCH = 279,
     ELSE = 280,
     WHILE = 281,
     DO = 282,
     FOR = 283,
     CASE = 284,
     DEFAULT = 285,
     CONTINUE = 286,
     BREAK = 287,
     RETURN = 288,
     GOTO = 289,
     ERROR = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 14 "../src/tp_4.y"

  long int entero;
  char* cadena;
  double real;



/* Line 1676 of yacc.c  */
#line 95 "tp_4.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


