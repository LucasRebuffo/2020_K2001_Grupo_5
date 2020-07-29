/* 
    Listas.h
*/
#include <math.h>
#include <stdio.h>
#include <string.h>

typedef struct nodo
{
    char identificador[20];
    int apariciones;
    NodoContador * siguiente;
}NodoContador;

typedef struct lista
{
    NodoContador * inicio;
}ListaContador;

ListaContador *  iniciarListaContador()
{
    ListaContador * lista;
    lista->inicio = NULL;
    return lista;
}

NodoContador * crearNodoContador (char identificador[20])
{
    NodoContador * aux = (NodoContador *) malloc(sizeof(NodoContador));
    strcpy (aux->identificador , identificador);
    aux->apariciones = 1;
    aux->siguiente = NULL;
    
    return aux;
}

void agregarNodoContador (ListaContador * lista , NodoContador * nuevo )
{
    if( lista == NULL)
    {
        lista->inicio = nuevo;
    }
    else
    {
        NodoContador * aux = lista->inicio;
        while(aux->siguiente  != NULL)
        {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
    }
    
}


void ordenarListaContador ( ListaContador * lista)
{
    NodoContador * pivote = NULL;
    NodoContador * actual = NULL;
    char aux[20] ;
    pivote = lista->inicio;
    while (pivote != NULL)
    {
        actual = pivote->siguiente;
        while (actual != NULL)
        {
            if(strcasecmp(pivote->identificador,actual->identificador ) >= 0)
            {
                strcpy(aux, pivote->identificador);
                strcpy(pivote->identificador, actual->identificador);
                strcpy(actual->identificador,aux);
            }

            actual = actual->siguiente;
        }
        pivote = pivote->siguiente;
    }
    
}

typedef struct nodo
{
    char valor[100];
    NodoCadena * siguiente;
}NodoCadena;

typedef struct lista
{
    NodoCadena * primero;
}ListaCadena;

ListaCadena * iniciarListaCadena()
{
    ListaCadena * lista;
    lista->primero = NULL; 
    return lista;
}

NodoCadena * crearNodoCadena (char valor[100])
{
    NodoCadena * aux = (NodoCadena * ) malloc(sizeof(NodoCadena));
    strcpy(aux->valor , valor);
    aux->siguiente = NULL;
    return aux;
}

void agregarNodoCadena (ListaCadena * lista , NodoCadena * nuevo )
{
    if( lista == NULL)
    {
        lista->primero = nuevo;
    }
    else
    {
        NodoCadena * aux = lista->primero;
        while(aux->siguiente  != NULL)
        {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
    }
    
}

void ordenarListaCadena ( ListaCadena * lista)
{
    NodoCadena * pivote = NULL;
    NodoCadena * actual = NULL;
    char aux[20] ;
    pivote = lista->primero;
    while (pivote != NULL)
    {
        actual = pivote->siguiente;
        while (actual != NULL)
        {
            if(strcasecmp(pivote->valor,actual->valor ) >= 0)
            {
                strcpy(aux, pivote->valor);
                strcpy(pivote->valor, actual->valor);
                strcpy(actual->valor,aux);
            }

            actual = actual->siguiente;
        }
        pivote = pivote->siguiente;
    }
    
}
