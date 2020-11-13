#include <stdlib.h>
#include <stdio.h> 

#ifndef TABLA_H
#define TABLA_H

enum {VAR, FUNC};


typedef struct Funcion{
    char*  tipoDatoParam;
    struct Funcion* sig;
} Funcion;

typedef union TipoValor {
    int      valEnt; 
    double   valReal;
    char*    valChar;
    Funcion* func;
} TipoValor;

typedef struct Simbolo{
    char* nombre;
    char* tipoDato;
    int   tipoID;
    TipoValor valor;

    struct Simbolo* sig;  
} Simbolo;

Simbolo* crearSimbolo(char*, char*, int);
void     insertarSimbolo(Simbolo*);
Funcion* crearParametro(char*);
void     insertarParametro(Funcion**, Funcion*);
Simbolo* devolverSimbolo(char*);
void     mostrarTabla(FILE*);
void     mostrarParametros(FILE*, Funcion*);
char*    toUpper(char*);
void     cambiarValor(Simbolo*, TipoValor);
void     guardarParametro(Funcion* [20] , Funcion* parameter);

extern Simbolo* tablaSimbolos;

#endif