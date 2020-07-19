%{
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "lib.h"

struct ListaCant ** listaIdentificadores = NULL;
struct ListaLong ** listaLiteralesCadenas = NULL;
struct ListaOrden ** listaPalabrasReservadas = NULL;
struct ListaInts ** listaConstDecimales = NULL;
struct ListaInts ** listaConstOctales = NULL;
struct ListaInts ** listaConstHexadecimales = NULL;
struct ListaFloats ** listaConstReales = NULL;
struct ListaCant ** listaOperadoresDeC = NULL;
struct ListaCant ** listaCaracteresDePuntuacion = NULL;
struct ListaLinea ** listaComentarios = NULL;
struct ListaNoRecon ** listaOtros = NULL;

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
