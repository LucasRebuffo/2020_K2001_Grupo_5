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

declaracion: especificadoresDeDeclaracion listaDeDeclaradores
;
especificadoresDeDeclaracion: especificadorDeClaseDeAlmacenamiento especificadoresDeDeclaracion
                              |especificadorDeTipo especificadoresDeDeclaracion
                              |calificadorDeTipo especificadoresDeDeclaracion
;
listaDeDeclaradores: declarador 
                    |listaDeDeclaradores ',' declarador
;
declarador: decla 
            |decla '=' inicializador
;                                                            
inicializador: expresionDeAsigancion
              |'{' listaDeInicializadores ',' '}'
;
listaDeInicializadores: inicializador
                        |listaDeInicializadores ',' inicializador
;                                     
especificadorDeClaseDeAlmacenamiento: 'typedef'
                                      |'static'
                                      |'auto'
                                      |'register'
                                      |'extern'
;
especificadorDeTipo: 'void'
                    |'char'
                    |'short'
                    |'int'
                    |'long'
                    |'float'
                    |'double'
                    |'signed'
                    |'unsigned'
                    |especificadorStruct_Union
                    |especificadorEnum
                    |nombreDeTypedef
;
calificadorDeTipo: 'const'
                  |'volatile'
;
especificadorStruct_Union: struct_union IDENTIFICADOR '{' listaDeDeclaracionesStruct '}'
                          |struct_union IDENTIFICADOR
;
struct_union: 'struct'
              |'union'
;
listaDeDeclaracionesStruct: declaracionStruct 
                            |listaDeDeclaracionesStruct declaracionStruct
;
declaracionStruct: listaDeCalificadores declaradoresStruct ';'
;
listaDeCalificadores: especificadorDeTipo listaDeCalificadores
                      |calificadorDeTipo listaDeCalificadores
;
declaradoresStruct: declaStruct 
                    |declaradoresStruct ',' declaStruct
;
declaStruct: decla
            |decla ':' expresionConstante
;
decla: puntero declaradorDirecto
;
puntero: listaCalificadoresTipos
        |listaCalificadoresTipos puntero
;
listaCalificadoresTipos: calificadorDeTipo
                        |listaCalificadoresTipos calificadorDeTipo
;
declaradorDirecto: IDENTIFICADOR
                  |'(' decla ')'
                  |declaradorDirecto '[' expresionConstante ']'
                  |declaradorDirecto '(' listaTiposParametro ')'
                  |declaradorDirecto '(' listaDeIdentificadores ')'
;
listaTiposParametro: listaDeParametros
                    |listaDeParametros ',' listaDeParametros
;
listaDeParametros: declaracionDeParametro
                  |listaDeParametros ',' declaracionDeParametro
;
declaracionDeParametro: especificadoresDeDeclaracion decla
                        |especificadoresDeDeclaracion declaradorAbstracto
;
listaDeIdentificadores: IDENTIFICADOR
                        | listaDeIdentificadores ',' IDENTIFICADOR
;
especificadorDeEnum: 'enum' IDENTIFICADOR '{' listaDeEnumeradores '}'
                    |'enum' IDENTIFICADOR
;
listaDeEnumeradores: enumerador 
                    |listaDeEnumeradores ',' enumerador
;
enumerador: constanteDeEnumeracion
            |constanteDeEnumeracion '=' expresionConstante
;
constanteDeEnumeracion: IDENTIFICADOR
;
nombreDeTypedef: IDENTIFICADOR
;
nombreDeTipo: listaDeCalificadores declaradorAbstracto
;
declaradorAbstracto: puntero
                    |puntero declaradorAbstractoDirecto
;
declaradorAbstractoDirecto: '(' declaradorAbstracto ')'
                            |declaradorAbstractoDirecto '[' expresionConstante ']'
                            |declaradorAbstractoDirecto '(' listaTiposParametro ')'
;                                               
;                                                                                                                                                                                                                                                                                                                                                                                                                       


%%



int main (int argc, char const* argv[])
{

}