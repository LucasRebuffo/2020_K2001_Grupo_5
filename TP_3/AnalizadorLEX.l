%option noyywrap

%{
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"

Lista listaIdentificadores = NULL;
Lista listaLiteralesCadenas = NULL;
Lista listaPalabrasReservadas = NULL;
Lista listaConstDecimales = NULL;
Lista listaConstOctales = NULL;
Lista listaConstHexadecimales = NULL;
Lista listaConstReales = NULL;
Lista listaOperadoresDeC = NULL;
Lista listaCaracteresDePuntuacion = NULL;
Lista listaComentarios = NULL;
Lista listaNoReconocidos = NULL;

int numeroDeLinea = 0;
%}

constDecimales                [1-9][0-9]*
constOctales                  0[0-7]*
constHexadecimales            0[xX][0-9a-fA-F]+
constReales                   [0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?|[0-9]+\.([eE][\+\-]?[0-9]+)?|[0-9]([eE][\+\-]?[0-9]+)?
constCaracter                 '[ -~]'|'\\[abefnrtv\\\'\"\?]'
literalCadena                 \"[ -~]*\"
palabrasReservadas            auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while
identificadores               [_a-zA-Z][_a-zA-Z0-9]*
caracteresDePuntuacion        [,\.;:\?\(\)\[\]\{\}]
operadoresDeC                 [=!&\*\+\-/|%><\?]
comentarios                   \/\*(\*+[^\*\/]|[^\*])*\*+\/
saltoDeLinea                  \n

%%

{identificadores}             {agregarAListaCant(yytext, listaIdentificadores);}
{literalCadena}               {agregarAListaLong(yytext, listaLiteralesCadenas);}
{palabrasReservadas}          {agregarAListaOrden(yytext, listaPalabrasReservadas);}
{constDecimales}              {agregarAListaInts(atoi(yytext), listaConstDecimales);}
{constOctales}                {agregarAListaInts(atoi(yytext), listaConstOctales);}
{constHexadecimales}          {agregarAListaInts(yytext, listaConstHexadecimales);}
{constReales}                 {agregarAListaFloats(atof(yytext), listaConstReales);}
{operadoresDeC}               {agregarAListaCant(yytext, listaOperadoresDeC);}
{caracteresDePuntuacion}      {agregarAListaCant(yytext, listaCaracteresDePuntuacion);}
{comentarios}                 {agregarAListaLinea(yytext, listaComentarios);}
{saltoDeLinea}                {numeroDeLinea++;}  
{otros}                       {agregarAListaNoRecon(yytext, listaOtros);}

%%

int main() {
    yyin = fopen("entrada.txt", "r"); 
    yyout = fopen("salida.txt", "w");
    yylex();

return 0;
}
