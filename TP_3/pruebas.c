/* This program will demonstrate inserting a node at the beginning of a linked list */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"



int main(int argc, char *argv[]) 
{
  Lista lista = NULL;
  insertar( &lista , "Hola");
  insertar( &lista , "Como");
  insertar( &lista , "Estas?");

  mostrar (lista);
  
 system("pause");
  return 0;
}

