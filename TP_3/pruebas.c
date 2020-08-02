/* This program will demonstrate inserting a node at the beginning of a linked list */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"

int main(int argc, char *argv[]) 
{
  Lista7 lista = NULL;
  int cont;
  char *caracter;
  printf("Ingrese cantidad de elementos de la lista\n");
  scanf("%d",&cont);
  for (int i = 0; i < cont; i++)
  {
    printf("Ingrese una cadena\n");
    scanf("%s" , caracter);
    insertarEnLista7(&lista , caracter);
  }

  

  printf("Su lista es: \n");
  mostrarLista7(&lista);

  
  
  system("pause");
  return 0;
}

