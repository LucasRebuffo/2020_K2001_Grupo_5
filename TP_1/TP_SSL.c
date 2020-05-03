#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INICIAL 0
#define ESTADO1 1
#define ESTADO2 2
#define ESTADO3 3
#define ESTADO4 4
#define ESTADO5 5
#define ERROR 6
#define FILA 6
#define COL 5

int buscarEnTabla(int tabla[][COL] , int estado , int actualChar ) // busca en tabla el siguiente estado dado un estado actual y un caracter
{
   int res;
   for (int i = 0; i < COL; i++)
   {
      switch (tabla[estado][i])  // me fijo el estado actual y lo llevo al estado siguiente
         {
         case INICIAL:
            if (actualChar == '0')
            {
               res = ESTADO2;
            }
            else if (actualChar >= '1' && actualChar <= '9')
            {
               res = ESTADO1;
            }
            else
            {
               res = ERROR;
            }
            break;

         case ESTADO1:
            if (actualChar >= '0' && actualChar <= '9')
            {
               res = ESTADO1;
            }
            else
            {
               res = ERROR;
            }
            break;

         case ESTADO2:
            if (actualChar >= '0' && actualChar <= '7')
            {
               res = ESTADO3;
            }
            else if (actualChar == 'x'  || actualChar == 'X')
            {
               res = ESTADO4;
            }
            else
            {
               res = ERROR;
            }
            break;

         case ESTADO3:
            if(actualChar >= '0' && actualChar <= '7')
            {
                res = ESTADO3;
            }
            else
            {
                res =ERROR;
            }

         case ESTADO4:
            if ((actualChar >= '0' && actualChar <= '9') || (actualChar >= 'a' && actualChar <= 'f') || (actualChar >= 'A' && actualChar <= 'F'))
            {
               res = ESTADO5;
            }
            else
            {
               res = ERROR;
            }
            break;

         case ESTADO5:
            if ( (actualChar >= '0' && actualChar <= '9') ||(actualChar >= 'a' && actualChar <= 'f') || (actualChar >= 'A' && actualChar <= 'F'))
            {
               res = ESTADO5;
            }
            else
            {
               res = ERROR;
            }
            break;

         case ERROR:

               res = ERROR;
            break;
         
         }
   }
   return res;
}

int main()
{
   int estado = INICIAL; 
   int actualChar ;

// llenar tabla
   int tabla[FILA][COL] = {{ESTADO2,ESTADO1,ESTADO1,ERROR,ERROR} ,
                     {ESTADO1,ESTADO1,ESTADO1,ERROR,ERROR} ,
                     {ERROR,ESTADO3,ERROR,ESTADO4,ERROR} ,
                     {ESTADO3,ESTADO3,ERROR,ERROR,ERROR} ,
                     {ESTADO5,ESTADO5,ESTADO5,ERROR,ESTADO5} , 
                     {ESTADO5,ESTADO5,ESTADO5,ERROR,ESTADO5}};

   FILE* f = fopen( "entrada.txt" , "rb" );  // abro archivo a para leer
   FILE* w = fopen( "salida.txt" , "w");  //abro archivo para escribir
   if(f == NULL)
   {
       perror("Error en la apertura de archivo");
       return 1;
   }

   actualChar = getc(f); //leo un caracter

   while( actualChar != EOF )  //lee hasta que sea final de archivo
   {
      while (actualChar != ',') //leo hasta que aparezca una coma
      {
         estado = buscarEnTabla(tabla , estado ,actualChar); //busco proximo estado

         putc ( actualChar , w); //imprimo en archivo salida

         actualChar = getc(f); // leo el siguiente
      }
      //imprimo el resultado
      if(estado == ESTADO1)
      {
         fputs(" es decimal\n" , w );
         
      }
      if(estado == ESTADO3)
      {
         fputs (" es octal\n" , w);
      }
      if(estado == ESTADO5)
      {
         fputs (" es hexadecimal\n" , w);
      }
      else
      {
         fputs (" no es reconocible\n" , w);
      }

      estado = INICIAL; // regreso al estado inicial
      actualChar=getc(f); // leo la cadena siguiente
   }
   fclose(f); //cierro el archivo lectura
   fclose(w); //cierro archivo salida

   return 0;
}
