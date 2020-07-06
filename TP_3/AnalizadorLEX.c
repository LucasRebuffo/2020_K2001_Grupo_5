%{
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "lib.h"

//* falta nombre en donde estan las comillas

struct "" ** listaIdentificadores = NULL; 
struct "" ** listaLiteralesCadenas = NULL;
struct "" ** listaPalabrasReservadas = NULL;
struct "" ** listaConstDecimales = NULL;
struct "" ** listaConstOctales = NULL;
struct "" ** listaConstHexadecimales = NULL;
struct "" ** listaConstReales = NULL;
struct "" ** listaOperadoresDeC = NULL;
struct "" ** listaCaracteresDePuntuacion = NULL;
struct "" ** listaComentarios = NULL;
struct "" ** listaOtros = NULL;

int i = 0;
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
comentarios                   \/\/(.)*

%%

{identificadores}             agregarAListaCant(yytext, listaIdentificadores);
{literalCadena}               agregarAListaLong(yytext, listaLiteralesCadenas);
{palabrasReservadas}          agregarAListaOrden(yytext, listaPalabrasReservadas);
{constDecimales}              agregarAListaInts(atoi(yytext), listaConstDecimales);
{constOctales}                agregarAListaInts(atoi(yytext), listaConstOctales);
{constHexadecimales}          agregarAListaInts(atof(yytext), listaConstHexadecimales);
{constReales}                 agregarAListaFloats(atof(yytext), listaConstReales);
{operadoresDeC}               agregarAListaCant(yytext, listaOperadoresDeC);
{caracteresDePuntuacion}      agregarAListaCant(yytext, listaCaracteresDePuntuacion);
{comentarios}                 agregarAListaLinea(yytext, listaComentarios);
{otros}                       agregarAListaNoRecon(yytext, listaOtros);

%%

int main() {
    yyin = fopen("entrada.txt", "r"); 
    yyout = fopen("salida.txt", "w");
    yylex();

return 0;
}
