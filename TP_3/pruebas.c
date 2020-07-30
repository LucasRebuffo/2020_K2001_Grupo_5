/* This program will demonstrate inserting a node at the beginning of a linked list */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"

int main(int argc, char *argv[]) 
{
  Lista lista = NULL;

  insertarFinal(&lista , "hola");
  insertarFinal(&lista , "56464");
  insertarFinal(&lista , "6454");
  insertarFinal(&lista , "645");
  insertarFinal(&lista , "andaaaaaaa");

  mostrarEnumerado(&lista);


  system("pause");
  return 0;
}
