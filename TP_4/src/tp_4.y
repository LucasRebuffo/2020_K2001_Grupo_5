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

expresion:  expresionDeAsigancion
           |expresion ',' expresionDeAsigancion
;
expresionDeAsigancion:  expresionCondicional
                      |expresionUnaria operadorAsigancion expresionDeAsigancion
;
expresionCondicional: expresionOLogico
                      |expresionOLogico '?' experesion ':' expresionCondicional
;
operadorAsigancion: TOKEN_ASIGNACION
;
expresionOLogico: expresionYLogico
                  |expresionOLogico '|''|' expresionYLogico
;
expresionYLogico: expresionOInclusivo
                  |expresionYLogico '&''&' expresionOInclusivo
;
expresionOInclusivo:  experesionOExcluyente
                      |expresionOInclusivo '|' experesionOExcluyente
;
experesionOExcluyente: experesionY
                      |experesionOExcluyente '^' experesionY
;
experesionY: expresionDeIgualdad
            |experesionY '&' expresionDeIgualdad
;
expresionDeIgualdad: experesionRelacional
                    |expresionDeIgualdad '=''=' experesionRelacional
                    |expresionDeIgualdad '!''=' experesionRelacional
;
experesionRelacional: experesionDeCorrimiento
                     |experesionRelacional '<' experesionDeCorrimiento
                     |experesionRelacional '>' experesionDeCorrimiento
                     |experesionRelacional '<''=' experesionDeCorrimiento
                     |experesionRelacional '>''=' experesionDeCorrimiento
;
experesionDeCorrimiento: experesionAditiva
                        |experesionDeCorrimiento '<''<' experesionAditiva
                        |experesionDeCorrimiento '>''>' experesionAditiva
;
experesionAditiva: expresionMultiplicativa
                  |experesionAditiva '+' expresionMultiplicativa
                  |experesionAditiva '-' expresionMultiplicativa
;
expresionMultiplicativa: expresionDeConversion
                        |expresionMultiplicativa '*' expresionDeConversion
                        |expresionMultiplicativa '/' expresionDeConversion
                        |expresionMultiplicativa '%' expresionDeConversion
;
expresionDeConversion: expresionUnaria
                      |'('nombreDeTipo')' expresionDeConversion
;
expresionUnaria: expresionSufijo
                |'+''+' expresionUnaria
                |'-''-' expresionUnaria
                |operadorUnario expresionDeConversion
                |'sizeof' expresionUnaria
                |'sizeof' '('nombreDeTipo')'
;
nombreDeTipo: 
;
operadorUnario: '&'
                |'*'
                |'+'
                |'-'
                |'|'
                |'~'                                                                                                                                                  
;
expresionSufijo: experesionPrimaria
                |expresionSufijo '[' expresion ']'
                |expresionSufijo '(' listaArgumentos ')'
                |expresionSufijo '.' IDENTIFICADOR
                |expresionSufijo '+''+'
                |expresionSufijo '-''-'
;
listaArgumentos: expresionDeAsigancion
                |listaArgumentos ',' expresionDeAsigancion
;
experesionPrimaria: IDENTIFICADOR
                    |CONSTANTE_DECIMAL
                    |CONSTANTE_HEXA
                    |CONSTANTE_OCTAL
                    |CONSTANTE_REAL
                    |LITERAL_CADENA
                    |'(' experesion ')'
;
                                                     




%%



int main (int argc, char const* argv[])
{

}