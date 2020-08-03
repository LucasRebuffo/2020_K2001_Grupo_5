/* This program will demonstrate inserting a node at the beginning of a linked list */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"

int main(int argc, char *argv[]) 
{
  Lista10 lista = NULL;
  int cont;
  char caracter[300+1];
  printf("Ingrese cantidad de elementos de la lista\n");
  scanf("%d",&cont);
  for (int i = 0; i < cont; i++)
  {
    printf("Ingrese una cadena\n");
    gets(caracter);
    insertarEnLista10(&lista , caracter , rand());
  }

  

  printf("Su lista es: \n");
  mostrarLista10(&lista);

  
  
  system("pause");
  return 0;
}

