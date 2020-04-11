#include <stdio.h>
#include <stdlib.h>

#define INICIAL 0
#define ESTADO1 1
#define ESTADO2 2
#define ESTADO3 3
#define ESTADO4 4
#define ERROR 5

int main(int argc, char const *argv[])
{
   int estado = INICIAL;     
   int actualChar = 0 ;
   char buffer[30];
   FILE* f = fopen( argv[1] , "r" );  // abro archivo a para leer


   while( actualChar != EOF )  //lee hasta que sea final de archivo
   {
      actualChar = getc( f );  // tomo primer caracter del archivo

      while( actualChar != ',' || actualChar != EOF ) // itero hasta que salga ',' o se termine el archivo
      {
         strcat( buffer , actualChar ); //concateno letra al final de buffer
         
         switch (estado)  // me fijo el estado actual y lo llevo al estado siguiente
         {
         case INICIAL:
            if (actualChar == '0')
            {
               estado = ESTADO2;
            }
            else if (actualChar >= '1' && actualChar <= '9')
            {
               estado = ESTADO1;           
            }
            else
            {
               estado = ERROR;
            }
            break;

         case ESTADO1:
            if (actualChar >= '0' && actualChar <= '9')
            {
               estado = ESTADO1;
            }
            else
            {
               estado = ERROR;
            } 
            break;

         case ESTADO2:
            if (actualChar >= '0' && actualChar <= '7')
            {
               estado = ESTADO2;
            }
            else if (actualChar == 'x'  || actualChar == 'X')
            {
               estado = ESATDO3;
            }
            else
            {
               estado = ERROR;
            }
            break;
            
         case ESTADO3:
            if (actualChar >= '0' && actualChar <= '9' || actualChar >= 'a' && actualChar <= 'f' || actualChar >= 'A' && actualChar <= 'F')
            {
               estado = ESTADO4;
            }
            else
            {
               estado = ERROR;
            }
            break;
            
         case ESTADO4:
            if (actualChar >= '0' && actualChar <= '9' || actualChar >= 'a' && actualChar <= 'f' || actualChar >= 'A' && actualChar <= 'F')
            {
               estado = ESTADO4;
            }
            else
            {
               estado = ERROR;
            }
            break;

         case ERROR:
            
            break;
         }

         actualChar = getc( f );
      }

       //imprimo los resultados y vacio el buffer
         if(estado == ERROR)
         {
            printf ("%s  no es una palabra válida" , buffer);
            strcpy(buffer , "");           
         }
         else if (estado == ESTADO1)
         {
            printf ("%s  es un numero decimal" , buffer);
            strcpy(buffer , ""); 
         }
         else if (estado == ESTADO2)
         {
            printf ("%s  es un numero octal" , buffer);
            strcpy(buffer , ""); 
         }
          else if (estado == ESTADO4)
         {
            printf ("%s  es un numero hexadecimal" , buffer);
            strcpy(buffer , ""); 
         }

         //vuelvo al estado inicial
         estado = INICIAL;



   }

   fclose(f); //cierro el archivo


   return 0;
}
