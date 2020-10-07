%{
  #include <stdio.h>
  #include <math.h>  
  #include <string.h>
  int yylex();
  int yyerror (char *s);
  int yywrap(){
    return (1);
  }

  int nroLinea = 1;
%}

%union {
  long int entero;
  char* cadena;
  double real;
}

%token <cadena> IDENTIFICADOR
%token <cadena> LITERAL_CADENA
%token <entero> CONSTANTE_DECIMAL
%token <entero> CONSTANTE_OCTAL
%token <entero> CONSTANTE_HEXA
%token <real>  CONSTANTE_REAL
%token <cadena> CONSTANTE_CARACTER
%token <cadena> TIPO_DE_DATO
%token <cadena> OP_ASIGANCION
%token <cadena> OP_IGUALDAD
%token <cadena> OP_OR
%token <cadena> OP_AND
%token <cadena> OP_RELACIONAL
%token <cadena> SIZEOF
%token <cadena> OP_INCREMENTO_DECREMENTO
%token <cadena> OP_CORRIMIENTO
%token <cadena> OP_ACCESO
%token <cadena> ESPEC_DE_CLASE
%token <cadena> CALIFICADOR_DE_TIPO
%token <cadena> STRUCT_O_UNION
%token <cadena> ESPECIFICADOR_ENUM
%token <cadena> IF
%token <cadena> SWITCH
%token <cadena> ELSE
%token <cadena> WHILE
%token <cadena> DO
%token <cadena> FOR
%token <cadena> CASE
%token <cadena> DEFAULT
%token <cadena> CONTINUE
%token <cadena> BREAK
%token <cadena> RETURN
%token <cadena> GOTO
%token <entero> ERROR



%%

input:    /* vacio */
        | input line
;

line:     '\n' {nroLinea++}
          | sentencia '\n' {nroLinea++}
;

/* -------------------------Expresiones----------------------------------*/

expresion:    expAsignacion
            | expresion ',' expAsignacion
;
expAsignacion:    expCondicional
                | expUnaria operAsignacion expAsignacion
;
expCondicional:   expOr
                | expOr '?' expresion ':' expCondicional
;
operAsignacion:   OP_ASIGANCION
                | '='
;
expOr:    expAnd
        | expOr OP_OR expAnd
;
expAnd:   expIgualdad
        | expAnd OP_AND expIgualdad
;
expIgualdad:    expRelacional
              | expIgualdad OP_IGUALDAD expRelacional
;
expRelacional:    expCorrimiento
                | expRelacional OP_RELACIONAL expCorrimiento
                | expRelacional '<' expCorrimiento
                | expRelacional '>' expCorrimiento
;
expCorrimiento:   expAditiva
                | expCorrimiento OP_CORRIMIENTO expAditiva
;
expAditiva:   expMultiplicativa
            | expAditiva '+' expMultiplicativa
            | expAditiva '-' expMultiplicativa
;
expMultiplicativa:    expDeConversion
                    | expMultiplicativa '*' expDeConversion
                    | expMultiplicativa '/' expDeConversion
                    | expMultiplicativa '%' expDeConversion
;
expDeConversion:    expUnaria
                  | '(' TIPO_DE_DATO')' expDeConversion 
;
expUnaria:    expPostfijo
            | OP_INCREMENTO_DECREMENTO expUnaria
            | operUnario expDeConversion
            | SIZEOF expUnaria
            | SIZEOF '(' TIPO_DE_DATO ')'
;
operUnario:   '&'
            | '*'
            | '-'
            | '!'
            | '+'
            | '~'
;
expPostfijo:    expPrimaria
              | expPostfijo '[' expresion ']'
              | expPostfijo '(' listaArgumentosOP ')'
              | expPostfijo '.' IDENTIFICADOR
              | expPostfijo OP_INCREMENTO_DECREMENTO
              | expPostfijo OP_ACCESO
;
listaArgumentosOP:  /* vacio */
                  | listaArgumentos
;
listaArgumentos:    expAsignacion
                  | listaArgumentos ',' expAsignacion
;
expPrimaria:    IDENTIFICADOR
              | CONSTANTE_DECIMAL
              | CONSTANTE_HEXA
              | CONSTANTE_OCTAL
              | CONSTANTE_REAL
              | LITERAL_CADENA 
              | CONSTANTE_CARACTER
              | '(' expresion ')'
;

/* -------------------------Declaraciones----------------------------------*/

// Había implementado la gramatica de C pero es muy compleja y la simplifique para que declare los  tipos de datos primitivos

/* -------------------------Sentencias----------------------------------*/

sentencia:    sentenciaExpresion {printf("Se encontro una sentencia de expresion en linea %d \n", nroLinea); }
            | '{' sentenciaCompuesta '}'
            | IF sentenciaDeSeleccionIF {printf("Se encontro una sentencia de seleccion en linea %d \n", nroLinea);}
            | SWITCH sentenciaDeSeleccionSWITCH {printf("Se encontro una sentencia de seleccion en linea %d \n", nroLinea);}
            | sentenciaDeIteracion {printf("Se encontro una sentencia de de iteracion en linea %d \n", nroLinea);}
            | sentenciaEtiquetada {printf("Se encontro una sentencia etiquetada en linea %d \n", nroLinea);}
            | sentenciaDeSalto {printf("Se encontro una sentencia de salto en linea %d \n", nroLinea);}
            | sentenciaDeDeclaracion {printf("Se encontro una sentencia de declaracion en linea %d \n", nroLinea);}
;
sentenciaExpresion:   ';'
                    | expresion ';'
;
sentenciaCompuesta:   listaDeDeclaracionesOP listaDeSentenciasOP 
;
listaDeDeclaracionesOP: /* vacio */
                      | listaDeDeclaraciones
;
listaDeSentenciasOP:  /* vacio */
                    | listaDeSentencias
;
listaDeDeclaraciones:  sentenciaDeDeclaracion
                     | listaDeDeclaraciones sentenciaDeDeclaracion
;
listaDeSentencias:    sentencia
                    | listaDeSentencias sentencia
;
sentenciaDeSeleccionIF:   '(' expresion ')' sentencia
                      |   '(' expresion ')' sentencia ELSE sentencia                               
;
sentenciaDeSeleccionSWITCH: SWITCH '(' expresion ')' sentencia 
;
sentenciaDeIteracion:   WHILE '(' expresion ')' sentencia
                      | DO sentencia WHILE '(' expresion ')' ';'
                      | FOR '(' expresionOP ';' expresionOP ';' expresionOP ')' sentencia 
;
expresionOP:  /* vacio */
            | expresion
;
sentenciaEtiquetada:    CASE expresionConstante ':' sentencia
                      | DEFAULT ':' sentencia
                      | IDENTIFICADOR ':' sentencia
;
sentenciaDeSalto:   CONTINUE ';'
                  | BREAK ';'
                  | RETURN expresionOP ';'
                  | GOTO IDENTIFICADOR ';'
;
expresionConstante:   /* vacio */
                    | expCondicional
;
sentenciaDeDeclaracion: 	TIPO_DE_DATO  listaIdentificadores ';'	
                        | TIPO_DE_DATO  listaIdentificadores
; 
listaIdentificadores: 	identificadorA
						          | identificadorA ',' listaIdentificadores
;
identificadorA:		  IDENTIFICADOR 
						      | IDENTIFICADOR '=' expresion
                  | IDENTIFICADOR '(' listaParametros ')' 
;
listaParametros:  /* vacio */
                | TIPO_DE_DATO IDENTIFICADOR ',' listaParametros
;
 
%%

int yyerror (char *s)  
{
  printf ("%s\n", s);
}


int main (int argc, char const* argv[])
{
  #ifdef BISON_DEBUG
        yydebug = 1;
#endif
  yyparse();
}