#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Nodo 
{
    char cadena[100];
    struct Nodo * next;
};

typedef struct Nodo* Lista;

struct Nodo* crearNodo ( char* cadena )
{
    struct Nodo* nuevo = malloc(sizeof(struct Nodo));
    strcpy(nuevo->cadena , cadena);
    nuevo->next = NULL; 

    return nuevo;
}

void insertar(Lista * list , struct Nodo * nuevo)
{
    nuevo->next = list;
    list = nuevo;

    printf ( "Se agrego la cadena %s a las lista", nuevo->cadena);
}

void mostrar(Lista list)
{
    if ( list != NULL)
    {
        while(list->next !=  NULL )
        {
            printf("%s", list->next);
            list = list->next;
        }
    }
    else
    {
        printf("La lista esta vacia");
    }
}