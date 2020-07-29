/*
 Lib.h
 */
#include <math.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char * var;
    int apariciones;
    NodoCant * sig;
} NodoCant;

typedef struct {
    NodoCant * head;
} ListaCant;

typedef struct  {
    char * var;
    struct NodoOtros * sig;
} NodoOtros;

typedef struct  {
    struct NodoOtros * head;
} ListaOtros;



Nodo * crearNodoCant(char * var){
    NodoCant * nuevoNodo = (NodoCant *) malloc (sizeof (NodoCant));
    nuevoNodo->var = valor;
    nuevoNodo->apariciones = 1;
    nuevoNodo->sig = NULL;  
}

Nodo * crearNodoInts(char * var){
    NodoInts * nuevoNodo = (NodoInts *) malloc (sizeof (NodoInts));
    nuevoNodo->var = valor;
    nuevoNodo->sig = NULL;
}

Nodo * crearNodoFloats(char * var){
    NodoFloats * nuevoNodo = (NodoFloats *) malloc (sizeof (NodoFloats));
    nuevoNodo->var = valor;
    nuevoNodo->sig = NULL;
}

Nodo * crearNodoOtros(char * var){
    NodoOtros * nuevoNodo = (NodoOtros *) malloc (sizeof (NodoOtros));
    nuevoNodo->var = valor;
    nuevoNodo->sig = NULL;
}

void InsertarPrincipioCant(ListaCant * lista, char * var){
    Nodo * nodo = crearNodoCant(var);
    nodo->sig = lista->head;
    lista->head = nodo;
}
void InsertarPrincipioOtros(ListaOtros * lista, char * var){
    Nodo * nodo = crearNodoOtros(var);
    nodo->sig = lista->head;
    lista->head = nodo;
}

void InsertarFinalCant(ListaCant * lista, char * var){
    Nodo * nodo = crearNodoCant(var);
    if (lista->head == NULL) {
        lista->head = nodo;
    } else {
        Nodo * puntero = lista->head;
        while (puntero->sig) {
            puntero = puntero->sig;
        }
        puntero->sig = nodo;
    }
}

void InsertarFinalOtros(ListaOtros * lista, char * var){
    Nodo * nodo = crearNodoOtros(var);
    if (lista->head == NULL) {
        lista->head = nodo;
    } else {
        Nodo * puntero = lista->head;
        while (puntero->sig) {
            puntero = puntero->sig;
        }
        puntero->sig = nodo;
    }
}


















void agregarElementoAListaCant (char * valor, NodoListaCant){
    NodoListaCant * = lista;
    while ( = ){
        if (->var == valor){
            ->apariciones++;
           
        }
        return;
        valor = valor->sig;
    }
    NodoListaCant * nuevoNodo = NULL;
    nuevoNodo = (NodoListaCant *) malloc (sizeof (NodoListaCant));
    nuevoNodo->var = valor;
    nuevoNodo->apariciones = 1;
    nuevoNodo->sig = lista;
    
}





void imprimirLista ()