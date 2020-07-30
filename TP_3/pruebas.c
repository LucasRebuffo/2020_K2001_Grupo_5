/* This program will demonstrate inserting a node at the beginning of a linked list */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    nuevo->next = *list;
    *list = nuevo;

    printf ( "Se agrego la cadena %s a las lista\n", nuevo->cadena);
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
        printf("La lista esta vacia");
    }
}

int main(int argc, char *argv[]) 
{
  Lista lista = NULL;
  struct Nodo * aux = crearNodo("Hola");
  insertar( &lista , aux);
  aux = crearNodo ("Como");
  insertar( &lista , aux);
  aux = crearNodo ("Estas ?");
  insertar( &lista , aux);

  mostrar (lista);
  
 system("pause");
  return 0;
}

