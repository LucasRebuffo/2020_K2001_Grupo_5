%{
  #include <stdio.h>
  #include <math.h>  
  #include <string.h>
  int yylex();
  int yyerror (char *s);
  int yywrap(){
    return (1);
  }

  int nroLinea = 1
%}

%union {
  long int entero;
  char* cadena;
  double real;
  
}

%token <cadena> PALABRA_RESERVADA
%token <cadena> IDENTIFICADOR
%token <cadena> LITERAL_CADENA
%token <cadena> COMENTARIO_MULTIPLE
%token <cadena> COMENTARIO_SIMPLE
%token <entero> CONSTANTE_DECIMAL
%token <entero> CONSTANTE_OCTAL
%token <entero> CONSTANTE_HEXA
%token <real>  CONSTANTE_REAL
%token <cadena> TIPO_DE_DATO
%token <cadena> OP_ASIGANCION
%token <cadena> OP_IGUALDAD
%token <cadena> OP_OR
%token <cadena> OP_AND
%token <cadena> OP_RELACIONAL
%token <cadena> SIZEOF
%token <cadena> TIPO_DE_DATO
%token <cadena> OP_INCREMENTO_DECREMENTO
%token <entero> ERROR
 
%%

input:    /* vacio */
        | input line
;

line:     '\n'
        | declaracion '\n'
        | experesion '\n'
        | sentencia '\n'
        | definicionDeFuncion '\n'
;

expresion:  expAsignacion
;

expAsignacion:  expCondicional
                |expUnaria operAsigancion expAsignacion
;

operAsigancion: OP_ASIGANCION
;

expCondicional: expOr
                |expOr '?' expresion ':' expCondicional
;

expOr:  expAnd
        |expOr OP_OR expAnd
;

expAnd: expIgualdad
        |expAnd OP_AND expIgualdad
;

expIgualdad:  expRelacional
              |expIgualdad OP_IGUALDAD expRelacional
;

expRelacional:  expAditiva
                |expRelacional OP_RELACIONAL expAditiva
;

expAditiva: expMultiplicativa
            |expAditiva '+' expMultiplicativa
;

expMultiplicativa:  expUnaria
                    |expMultiplicativa '*' expUnaria
;

expUnaria:  expPostfijo
            |OP_INCREMENTO_DECREMENTO expUnaria
            |operUnario expUnaria
            |SIZEOF '(' TIPO_DE_DATO ')'
;

operUnario: '&'
            |'*'
            |'-'
            |'!'
            |'+'
            |'~'
;

expPostfijo:  expPrimaria
              |expPostfijo '[' experesion ']'
              |expPostfijo '(' listaArgumentos ')'
;

listaArgumentos: expAsigancion
                |listaArgumentos ',' expAsigancion
;

expPrimaria:  IDENTIFICADOR
              |CONSTANTE_DECIMAL
              |CONSTANTE_HEXA
              |CONSTANTE_OCTAL
              |CONSTANTE_REAL
              |LITERAL_CADENA
              |'(' expresion ')'
;

nombreTipo: TIPO_DE_DATO
;
              
%%



int main (int argc, char const* argv[])
{

}