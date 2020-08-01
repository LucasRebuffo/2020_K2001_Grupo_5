/* This program will demonstrate inserting a node at the beginning of a linked list */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"

int main(int argc, char *argv[]) 
{
  Lista lista = NULL;
  int cont;
  char cadena[100+1];
  printf("Ingrese cantidad de elementos de la lista\n");
  scanf("%d",&cont);
  for (int i = 0; i < cont; i++)
  {
    printf("Ingrese una cadena\n");
    scanf("%s", cadena);
    insertaOrdenado(&lista , cadena);
  }

  printf("Su lista es: \n");
  mostrar(&lista);

  
  
  system("pause");
  return 0;
}

