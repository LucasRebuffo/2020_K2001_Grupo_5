%{

#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tabla.h"

#define YYDEBUG 1 
// PARA UTILIZAR EL DEBUG DE BISON

// PROTORIPO DE FUNCIONES QUE SE VAN A USAR EN EL ANÁLISIS
int yylex (); // --> COMUNICA EL ARCHIVO .l CON EL .y
int yyerror (char*); // --> MUESTRA EL MENSAJE DE ERROR CUANDO HAY ERROR SINTÁCTICO
int printError(char*, int); // --> MUESTRA CUANDO HAY ERROR LEXICO
void variableNoDeclarada(char* nombreVariable); // --> MUESTRA ERROR DE SI UNA VARIABLE NO SE DECLARO

FILE* yyin; // --> ARCHIVO DE ENTRADA
FILE* yyout; // --> ARCHIVO DE SALIDA

// ESTA VARIABLES SE UTILIZAN PARA OBTENER LOS TIPOS DE DATOS
char* tempVar = NULL;
char* tempPointer = NULL;

// Por que es un array de 20 Funcion si La estructura Funcion ya es recursiva (lista) ??
// O sea, aca se crea un array de 20 listas de parametros de funciones (puede ser entonces que se puedan guardar hasta 20 funciones)
Funcion* parameters[20]; // --> VA GUARDANDO LOS PARAMETROS CUANDO SE RECONOCEN
int pos = 0; // --> CONTADOR PARA LOS PARAMETROS

unsigned cantLineas; // --> CONTADOR DE LINEAS EN EL CÓDIGO. 

%}
// %type define el campo que le corresponde a cada no terminal en la variable yylval. Se usa durante el proceso de evaluación/validaciones semánticas
// %token define lo mismo pero para los terminales

// valorString se usa para guardar strings
%type <valorString> declarador_directo
%type <valorString> decla
%type <valorString> declarador
%type <valorString> especificadores_declaracion
%type <valorString> error

// Para las ctes en el .l teniamos CHAR STRING NUM_REAL y NUM_ENTERO

// No tienen un valor semántico asociado, directamente se guarda el string (ver linea )

%token <mystruct> NUM_ENTERO
%token <mystruct> NUM_REAL
%token <valorString> TIPO_DATO
%token <valorString> ID
%token ASIG_MULT
%token ASIG_DIV
%token ASIG_MOD
%token ASIG_SUMA
%token ASIG_RESTA
%token ASIG_DESP_IZQ
%token ASIG_DESP_DER
%token ASIG_AND_BIN
%token ASIG_XOR_BIN
%token ASIG_OR_BIN
%token OP_INC
%token OP_DEC
%token OP_IGUALDAD
%token OP_DESIGUALDAD
%token OP_AND
%token OP_OR
%token OP_MENOR_IGUAL
%token OP_MAYOR_IGUAL
%token OP_DESP_IZQ
%token OP_DESP_DER
%token OP_MIEMBRO_PUNT

// CHAR y STRING usaban el mismo campo: un string

%token <valorString> CHAR
%token <valorString> STRING

%token SIZEOF
%token <valorString> CLASE_ALM
%token CALIF_TIPO
%token STRUCT_UNION
%token ENUM
%token <valorString> CONTINUE
%token <valorString> BREAK
%token <valorString> IF
%token <valorString> ELSE
%token <valorString> SWITCH
%token <valorString> FOR
%token <valorString> DO
%token <valorString> WHILE
%token <valorString> CASE
%token <valorString> DEFAULT
%token <valorString> RETURN 
%token <valorString> GOTO


// ESTRUCTURA PARA PODER VALIDAR OPERACIONES SINTÁCTICAS
%union {
  struct yylval_struct
    {
        int tipo;
        int valorEntero;
        float valorReal;
        char* valorCaracter;
    } mystruct;// Este campo se usa para guardar info (datos agrupados en un struct comun) de las constantes (enteras, decimales y caracteres)

    char*  valorString;// Este campo se usa para guardar strings
}

%%

input:   /* vacio */
       | input line
        
;

line:  /* Vacio */
      | declaracion ';' {tempVar = NULL; tempPointer = NULL;}
      | sentencia
      | error finDeLinea { yyerrok; yyerror(""); pos = 0;}
;

finDeLinea:   ';'
            | '\n'
            | '}'
            | '{'
            | '('
            | ')'
            | '['
            | ']'
;            
const:   NUM_ENTERO {$<mystruct>$.tipo = $<mystruct>1.tipo; $<mystruct>$.valorEntero = $<mystruct>1.valorEntero; }
       | NUM_REAL {$<mystruct>$.tipo = $<mystruct>1.tipo; $<mystruct>$.valorReal = $<mystruct>1.valorReal;} 
       | CHAR     {{$<mystruct>$.tipo = $<mystruct>1.tipo; $<mystruct>$.valorCaracter = $<mystruct>1.valorCaracter;} } 
       | const_enum
;

const_enum: ID {  Simbolo* aux = devolverSimbolo($<valorString>1);
                    if(aux) {
                      if(! strcmp(aux->tipoDato, "int") || ! strcmp(aux->tipoDato, "unsigned") || ! strcmp(aux->tipoDato, "long")){ 
                        $<mystruct>$.tipo = 0; $<mystruct>$.valorEntero = aux->valor.valEnt ;}
                    else if(! strcmp(aux->tipoDato, "float") || ! strcmp(aux->tipoDato, "double")){
                      $<mystruct>$.tipo = 1; $<mystruct>$.valorReal = aux->valor.valReal ;}
                    else if(! strcmp(aux->tipoDato, "char")){
                      $<mystruct>$.tipo = 2; $<mystruct>$.valorCaracter = aux->valor.valChar ;}
                    }
                    else{
                      variableNoDeclarada($<valorString>1);
                        }
             }
;

expresion:   exp_asignacion
           | expresion ',' exp_asignacion
;

exp_asignacion:   exp_condicional
                | exp_unaria op_asignacion exp_asignacion
;

exp_condicional:   exp_OR_log
                 | exp_OR_log '?' expresion ':' exp_condicional
;

op_asignacion:   '='          
               | ASIG_MULT    
               | ASIG_DIV     
               | ASIG_MOD     
               | ASIG_SUMA    
               | ASIG_RESTA   
               | ASIG_DESP_IZQ
               | ASIG_DESP_DER
               | ASIG_AND_BIN 
               | ASIG_XOR_BIN 
               | ASIG_OR_BIN  
;

exp_OR_log:   exp_AND_log
            | exp_OR_log OP_OR exp_AND_log
;

exp_AND_log:   exp_OR_in
             | exp_AND_log OP_AND exp_OR_in
;

exp_OR_in:   exp_OR_ex
           | exp_OR_in '|' exp_OR_ex 
;

exp_OR_ex:   exp_AND
           | exp_OR_ex '^' exp_AND 
;

exp_AND:   exp_igualdad
         | exp_AND '&' exp_igualdad 
;

exp_igualdad:   exp_relacional
              | exp_igualdad OP_IGUALDAD    exp_relacional  
              | exp_igualdad OP_DESIGUALDAD exp_relacional  
;

exp_relacional:   exp_desp
                | exp_relacional      '<'       exp_desp  
                | exp_relacional      '>'       exp_desp  
                | exp_relacional OP_MENOR_IGUAL exp_desp  
                | exp_relacional OP_MAYOR_IGUAL exp_desp  
;

exp_desp:   exp_aditiva
          | exp_desp OP_DESP_IZQ exp_aditiva  
          | exp_desp OP_DESP_DER exp_aditiva  
;

exp_aditiva:   exp_multip {$<mystruct>$ = $<mystruct>1;}
             | exp_aditiva '+' exp_multip { if($<mystruct>1.tipo==$<mystruct>3.tipo)
    { 
        if($<mystruct>1.tipo==1)
    
        {
            $<mystruct>$.valorEntero=$<mystruct>1.valorEntero+$<mystruct>3.valorEntero;
        }
        
        else if($<mystruct>1.tipo==2)
        
        {
            $<mystruct>$.valorReal=$<mystruct>1.valorReal+$<mystruct>3.valorReal;
        }

        else{
           
        }
    }  
    else
    {
        fprintf(yyout ,"\nLos operandos son de distinto tipo en linea %d\n" , cantLineas);
    }     
}  
             | exp_aditiva '-' exp_multip   
;

exp_multip:   exp_conversion {$<mystruct>$ = $<mystruct>1;}
            | exp_multip '*' exp_conversion   
            | exp_multip '/' exp_conversion   
            | exp_multip '%' exp_conversion   
;

exp_conversion:   exp_unaria {$<mystruct>$ = $<mystruct>1;}
                | '(' nombre_tipo ')' exp_conversion exp_unaria 
;

exp_unaria:   exp_sufijo {$<mystruct>$ = $<mystruct>1;}
            | OP_INC exp_unaria           
            | OP_DEC exp_unaria           
            | op_unario exp_conversion
            | SIZEOF exp_unaria
            | SIZEOF '(' nombre_tipo ')'  
;

op_unario:   '&'
           | '*' 
           | '+'
           | '-'
           | '~'
           | '!'
;

exp_sufijo:   exp_primaria {$<mystruct>$ = $<mystruct>1;}
            | exp_sufijo '[' expresion ']'        
            | exp_sufijo '(' lista_argumentos ')' 
            | exp_sufijo '.' ID                   
            | exp_sufijo OP_MIEMBRO_PUNT ID       
            | exp_sufijo OP_INC                   
            | exp_sufijo OP_DEC                   
;

lista_argumentos:   exp_asignacion
                  | lista_argumentos ',' exp_asignacion
;

exp_primaria:   const {$<mystruct>$ = $<mystruct>1;}
              | STRING              
              | '(' expresion ')'            
;


declaracion: especificadores_declaracion lista_declaradores
;

especificadores_declaracion:   CLASE_ALM           especificadores_declaracion_opc  {$<valorString>$ = strdup($<valorString>1);}
                             | especificador_tipo  especificadores_declaracion_opc  {$<valorString>$ = strdup($<valorString>1);}
                             | CALIF_TIPO          especificadores_declaracion_opc  {$<valorString>$ = strdup($<valorString>1);}
;

especificadores_declaracion_opc:   /* Vacio */
                                 | especificadores_declaracion
;

lista_declaradores:   declarador                        { Simbolo* aux = devolverSimbolo($<valorString>1);
                                                          if(aux == NULL){
                                                            fprintf(yyout, "\nSe declara la variable: \'%s\' de tipo: \'%s\' en linea %d\n", $<valorString>1, tempVar , cantLineas);
                                                            insertarSimbolo(crearSimbolo(tempVar,$<valorString>1,VAR));}
                                                          else{
                                                            fprintf(yyout,"\nERROR:Doble declaracion del simbolo |%s| en linea %d \n", $<valorString>1 , cantLineas);
                                                          }
                                                        }   

                    | declarador ',' lista_declaradores { Simbolo* aux = devolverSimbolo($<valorString>1);
                                                          if(aux == NULL){
                                                            fprintf(yyout, "\nSe declara la variable: \'%s\' de tipo: \'%s\' en linea %d\n", $<valorString>1, tempVar, cantLineas);
                                                            insertarSimbolo(crearSimbolo(tempVar,$<valorString>1,VAR));}
                                                          else{
                                                            fprintf(yyout,"\nERROR:Doble declaracion del simbolo |%s| en linea %d \n", $<valorString>1 , cantLineas);
                                                          }
                                                        }
;

declarador:   decla                   {$<valorString>$ = strdup($<valorString>1);}
            | decla '=' inicializador {$<valorString>$ = strdup($<valorString>1);}
;

inicializador:   exp_asignacion
               | '{' lista_inicializadores coma_opc '}' 
;

coma_opc:   /* Vacio */
          | ','
;

lista_inicializadores:   inicializador
                       | lista_inicializadores ',' inicializador
;

especificador_tipo:   TIPO_DATO                   {tempVar = strdup($<valorString>1);}              
                    | especificador_struct_union
                    | especificador_enum  {/*Sacamos nombre_typedef*/}
;

especificador_struct_union:   STRUCT_UNION ID_opc '{' lista_declaradores_struct '}'
                            | STRUCT_UNION ID
;

ID_opc:   /* Vacio */
        | ID
;

lista_declaradores_struct:   declaracion_struct
                           | lista_declaradores_struct declaracion_struct
;

declaracion_struct: lista_calificadores declaradores_struct ';'
;

lista_calificadores:   especificador_tipo lista_calificadores_opc
                     | CALIF_TIPO         lista_calificadores_opc
;

lista_calificadores_opc:   /* Vacio */
                         | lista_calificadores
;

declaradores_struct:   decla_struct
                     | declaradores_struct ',' decla_struct
;

decla_struct:   decla
              | decla_opc ':' exp_constante
;

decla_opc:   /* Vacio */
           | decla
;

exp_constante: exp_condicional
;

exp_constante_opc:   /* Vacio */
                   | exp_constante
;

decla: puntero_opc declarador_directo {$<valorString>$ = strdup($<valorString>2);}
;

puntero_opc:   /* Vacio */
             | puntero
;

puntero:   '*' lista_calificadores_tipos_opc
         | '*' lista_calificadores_tipos_opc puntero
;

lista_calificadores_tipos_opc:   /* Vacio */
                              | lista_calificadores_tipos
;

lista_calificadores_tipos:   CALIF_TIPO
                           | lista_calificadores_tipos CALIF_TIPO
;

declarador_directo:   ID                                                    {$<valorString>$ = strdup($<valorString>1);}
                    | '(' decla ')'                                         {$<valorString>$ = strdup($<valorString>2);}
                    | declarador_directo '[' exp_constante_opc ']'          {$<valorString>$ = strdup($<valorString>1);}
                    | declarador_directo '(' lista_tipos_param_opc ')'      {$<valorString>$ = strdup($<valorString>1);}
                    | declarador_directo '(' lista_identificadores_opc ')'  {$<valorString>$ = strdup($<valorString>1);}
;

lista_identificadores_opc:   /* Vacio */
                           | lista_identificadores
;

lista_tipos_param: lista_parametros
;

lista_parametros:   declaracion_parametro 
                  | lista_parametros ',' declaracion_parametro
;

declaracion_parametro:   especificadores_declaracion decla {
                                                              parameters[pos] = crearParametro($<valorString>1);
                                                              pos++;
                                                            }
                       | especificadores_declaracion declarador_abstracto_opc
;

declarador_abstracto_opc:   /* Vacio */
                          | declarador_abstracto
;

lista_identificadores:   ID
                       | lista_identificadores ',' ID
;

especificador_enum:   ENUM ID_opc '{' lista_enumeradores'}'
                    | ENUM ID
;

lista_enumeradores:   enumerador
                    | lista_enumeradores ',' enumerador
;

enumerador:   const_de_enumeracion
            | const_de_enumeracion '=' exp_constante
;

const_de_enumeracion: ID
;

nombre_tipo: lista_calificadores declarador_abstracto_opc
;

declarador_abstracto:   puntero
                      | puntero_opc declarador_abstracto_directo
;

declarador_abstracto_directo:   '(' declarador_abstracto ')'
                              | declarador_abstracto_directo_opc '['   exp_constante_opc   ']'
                              | declarador_abstracto_directo_opc '(' lista_tipos_param_opc ')'
;

declarador_abstracto_directo_opc:   /* Vacio */
                                  | declarador_abstracto_directo
;

lista_tipos_param_opc:   /* Vacio */
                       | lista_tipos_param
;

sentencia:   sentencia_exp
           | sentencia_compuesta
           | sentencia_seleccion
           | sentencia_iteracion
           | sentencia_etiquetada
           | sentencia_salto
           | especificadores_declaracion decla sentencia_compuesta  { Simbolo* aux2 = devolverSimbolo($<valorString>2);
                                                                      if(aux2 == NULL){
                                                                        fprintf(yyout, "\n Se declara la funcion: \'%s\' que devuelve: \'%s\' en linea %d\n", $<valorString>2, $<valorString>1,cantLineas);
                                                                        insertarSimbolo(crearSimbolo($<valorString>1,$<valorString>2,FUNC));
                                                                        Simbolo * aux = devolverSimbolo($<valorString>2);
                                                                        for(int i = 0 ; i<pos ; i++){
                                                                          insertarParametro(&(aux->valor.func) , parameters[i] );
                                                                        }
                                                                        pos = 0;
                                                                        
                                                                        }
                                                                    else{
                                                                      fprintf(yyout,"\nERROR:Doble declaracion del simbolo |%s| en linea %d \n", $<valorString>2 , cantLineas);
                                                                        }
                                                                    }                                                  
;

sentencia_exp: expresion_opc ';'
;

expresion_opc:   /* Vacio */
               | expresion
;

sentencia_compuesta:    ';'
                      | '{' lista_compuesta '}'
;

lista_compuesta:   lista_declaraciones_opc lista_sentencias_opc
                 | lista_compuesta lista_declaraciones_opc lista_sentencias_opc
;

lista_declaraciones_opc:   /* Vacio */
                         | lista_declaraciones
;

lista_sentencias_opc:   /* Vacio */
                      | lista_sentencias
;

lista_declaraciones:   declaracion ';'
                     | lista_declaraciones declaracion ';'
;

lista_sentencias:   sentencia
                  | lista_sentencias sentencia
;


sentencia_seleccion:  IF '(' expresion ')' sentencia                                            {fprintf(yyout, "\nSe encontro la sentencia IF en linea %d\n", cantLineas);}
                    | IF '(' expresion ')' sentencia ELSE sentencia                             {fprintf(yyout, "\nSe encontro la sentencia IF y ELSE en linea %d\n", cantLineas);}
                    | SWITCH '(' expresion ')' sentencia                                        {fprintf(yyout, "\nSe encontro la sentencia SWITCH en lineas %d\n",cantLineas);}
;

sentencia_iteracion:  WHILE '(' expresion ')' sentencia                                         {fprintf(yyout, "\nSe encontro la sentencia WHILE en linea %d\n", cantLineas);}                                         
                    | DO sentencia WHILE '(' expresion ')' ';'                                  {fprintf(yyout, "\nSe encontro la sentencia DO WHILE en linea %d\n" ,cantLineas);}                                  
                    | FOR '(' for_opc ';' expresion_opc ';' expresion_opc ')' sentencia         {fprintf(yyout, "\nSe encontro la sentencia FOR en linea %d\n", cantLineas);}
;

for_opc:   /* Vacio */
         | expresion
         | declaracion
;

sentencia_etiquetada:  CASE exp_constante ':' sentencia  
                     | DEFAULT ':' sentencia            
                     | ID ':' sentencia  
;  
 
sentencia_salto:  CONTINUE ';'                                                                  {fprintf(yyout, "\nSe encontro la sentencia CONTINUE\n");}
                | BREAK ';'                                                                     {fprintf(yyout, "\nSe encontro la sentencia BREAK\n");}
                | RETURN expresion_opc ';'                                                      {fprintf(yyout, "\nSe encontro la sentencia RETURN\n");}  
                | GOTO ID ';'                                                                   {fprintf(yyout, "\nSe encontro la sentencia GO TO\n");}               
;  



%%

Simbolo* tablaSimbolos;


int yyerror (char *mensaje)  /* Funcion de error */
{
  fprintf (yyout, "\nError sintatico en linea %d\n", cantLineas);
}

int printError(char *mensaje, int linea)
{
  fprintf(yyout, "\nSe encontro la cadena lexicamente invalida: %s en la linea: %d\n", mensaje, linea); 
}

void variableNoDeclarada(char* nombreVariable) {
  fprintf(yyout, "\nERROR: La variable/función \'%s\' no fue declarada.\n", nombreVariable);
}

void main(){ 

    yyin = fopen("Codigo.c", "r");
    yyout = fopen("Salida.txt", "w");

    #ifdef BISON_DEBUG
       yydebug = 1;
    #endif
    
    yyparse();

    mostrarTabla(yyout);

    fclose(yyin);
    fclose(yyout);
}