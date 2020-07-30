#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"

struct Nodo 
{
    char cadena[100];
    struct Nodo * next;
};

typedef struct Nodo* Lista;


void insertar(Lista * list , char* cadena)
{
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    strcpy(nuevo->cadena , cadena);
    nuevo->next =*list; 
    *list = nuevo;

    printf ( "Se agrego la cadena %s a las lista \n", nuevo->cadena);
}

void mostrar(Lista list)
{
    if ( list != NULL)
    {
        while(list !=  NULL )
        {
            printf("%s\n", list->cadena);
            list = list->next;
        }
    }
    else
    {
        printf("La lista esta vacia \n");
    }
}

void borrarLista (Lista * list)
{
    struct Nodo* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->next;
        free(current);
    }
}