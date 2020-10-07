
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
     CONSTANTE_CARACTER = 264,
     TIPO_DE_DATO = 265,
     OP_ASIGANCION = 266,
     OP_IGUALDAD = 267,
     OP_OR = 268,
     OP_AND = 269,
     OP_RELACIONAL = 270,
     SIZEOF = 271,
     OP_INCREMENTO_DECREMENTO = 272,
     OP_CORRIMIENTO = 273,
     OP_ACCESO = 274,
     ESPEC_DE_CLASE = 275,
     CALIFICADOR_DE_TIPO = 276,
     STRUCT_O_UNION = 277,
     ESPECIFICADOR_ENUM = 278,
     IF = 279,
     SWITCH = 280,
     ELSE = 281,
     WHILE = 282,
     DO = 283,
     FOR = 284,
     CASE = 285,
     DEFAULT = 286,
     CONTINUE = 287,
     BREAK = 288,
     RETURN = 289,
     GOTO = 290,
     ERROR = 291
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
#line 96 "tp_4.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


