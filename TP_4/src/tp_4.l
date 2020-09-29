%{
	#include <stdlib.h>  
	#include "tp_4.tab.h"
	#include <string.h>
	//{otros}                       {printf("%s NO RECONOCIDO EN EL ANALISIS LEXICO\n", yytext);}
%}

constDecimales                [1-9][0-9]*
constOctales                  0[0-7]*
constHexadecimales            0[xX][0-9a-fA-F]+
constReales                   ([0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?)|([0-9]+\.([eE][\+\-]?[0-9]+)?)|([0-9]([eE][\+\-]?[0-9]+)?)
constCaracter                 \'(.|\n)\'
literalCadena                 \"[ -~]*\"
palabrasReservadas            break|case|continue|default|do|else|for|goto|if|return|switch|while
identificadores               [_a-zA-Z][_a-zA-Z0-9]*
caracteresDePuntuacion        [,\.;:\?\(\)\[\]\{\}]
operadoresDeC                 [=!&\*\+\-/|%><\?]
comentariosMultiple           \/\*(\*+[^\*\/]|[^\*])*\*+\/
comentariosSimple              "//".*  
tipoDeDato 					  "int"|"double"|"float"|"char"|"void"|"short"|"long"|"signed"|"unsigned"
operadorDeAsignacion          "+="|"*="|"-="|"/="|"%="|"<<="|">>="|"&="|"^="|"|="
especificadorDeClase		  "typedef"|"static"|"auto"|"register"|"extern"	
calificadorDeTipo			  "const"|"volatile"
structOUnion				  "struct"|"union"
especificadorEnum			  "enum"	
saltoDeLinea                  \n
otros                         .


%%

{tipoDeDato}				  {yylval.cadena=strdup(yytext); return TIPO_DE_DATO;printf("Se reconocio tipo de dato \n");}
{especificadorDeClase}        {yylval.cadena=strdup(yytext); return ESPEC_DE_CLASE;printf("Se reconocio especificador de clase \n");}
{calificadorDeTipo}           {yylval.cadena=strdup(yytext); return CALIFICADOR_DE_TIPO;printf("Se reconocio calificador de tipo \n");}
{especificadorEnum}           {yylval.cadena=strdup(yytext); return ESPECIFICADOR_ENUM;printf("Se reconocio especificador enum \n");}
if					          {yylval.cadena=strdup(yytext); return IF;printf("Se reconocio If \n");}
else				          {yylval.cadena=strdup(yytext); return ELSE;printf("Se reconocio else \n");}
switch			              {yylval.cadena=strdup(yytext); return SWITCH;printf("Se reconocio switch\n");}
while				          {yylval.cadena=strdup(yytext); return WHILE;printf("Se reconocio while \n");}
for					          {yylval.cadena=strdup(yytext); return FOR;printf("Se reconocio for \n");}
do					          {yylval.cadena=strdup(yytext); return DO;printf("Se reconocio do \n");}
case				          {yylval.cadena=strdup(yytext); return CASE;printf("Se reconocio case \n");}
default				          {yylval.cadena=strdup(yytext); return DEFAULT;printf("Se reconocio default \n");}
continue			          {yylval.cadena=strdup(yytext); return CONTINUE;printf("Se reconocio continue \n");}
break				          {yylval.cadena=strdup(yytext); return BREAK;printf("Se reconocio break \n");}
return				          {yylval.cadena=strdup(yytext); return RETURN;printf("Se reconocio return \n");}
goto				          {yylval.cadena=strdup(yytext); return GOTO;printf("Se reconocio goto \n");}
{structOUnion}           	  {yylval.cadena=strdup(yytext); return STRUCT_O_UNION;printf("Se reconocio struct o union \n");}
"sizeof"					  {yylval.cadena=strdup(yytext); return SIZEOF;printf("Se reconocio sizeof \n");}
{identificadores}             {yylval.cadena=strdup(yytext); return IDENTIFICADOR;printf("Se reconocio identificador \n");}
{literalCadena}               {yylval.cadena=strdup(yytext); return LITERAL_CADENA;printf("Se reconocio literal cadena \n");}
{constDecimales}              {yylval.entero = atoi(yytext); return CONSTANTE_DECIMAL;printf("Se reconocio constante decimal \n");}
{constOctales}                {yylval.entero = strtoll(yytext,NULL,8); return CONSTANTE_OCTAL;printf("Se reconocio constante octal \n");}
{constHexadecimales}          {yylval.entero = strtol(yytext,NULL,16); return CONSTANTE_HEXA;printf("Se reconocio constante hexa \n");}
{constReales}                 {yylval.real = atof(yytext); return CONSTANTE_REAL;printf("Se reconocio constante real \n");}
{constCaracter}               {return yytext[0];printf("Se reconocio constante caracater \n");}
{operadoresDeC}               {return yytext[0];printf("Se reconocio operador de c \n");}
{caracteresDePuntuacion}      {return yytext[0];printf("Se reconocio caracter de puntuacion \n");}
"=="|"!="					  {yylval.cadena=strdup(yytext); return OP_IGUALDAD;printf("Se reconocio operador de igualdad \n");}
{operadorDeAsignacion}		  {yylval.cadena=strdup(yytext); return OP_ASIGANCION;printf("Se reconocio operador de asignacion \n");}
"||"						  {yylval.cadena=strdup(yytext); return OP_OR;printf("Se reconocio operador or \n");}
"&&"						  {yylval.cadena=strdup(yytext); return OP_AND;printf("Se reconocio operador and \n");}
">="|"<="					  {yylval.cadena=strdup(yytext); return OP_RELACIONAL;printf("Se reconocio operador relacional \n");}
"++"|"--"					  {yylval.cadena=strdup(yytext); return OP_INCREMENTO_DECREMENTO;printf("Se reconocio operador incremento decremento \n");}
">>"|"<<"					  {yylval.cadena=strdup(yytext); return OP_CORRIMIENTO;printf("Se reconocio operador corrimiento \n");}
"->"						  {yylval.cadena=strdup(yytext); return OP_ACCESO;printf("Se reconocio operaador de acceso \n");}
{comentariosMultiple}         {}
{comentariosSimple}           {}
{saltoDeLinea}                {}  




%%
