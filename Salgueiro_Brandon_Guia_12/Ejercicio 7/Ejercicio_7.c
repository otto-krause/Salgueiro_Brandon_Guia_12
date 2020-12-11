#include <stdio.h>
#include <stdlib.h>
int tuba(int num1, int num2);

int main ()
{
   int num1=0, num2=0, retorno;
   printf("Ingrese un valor: ");
   scanf("%d", &num1);
   printf("Ingrese un valor: ");
   scanf("%d", &num2);
   printf( "El mayor es: %d\n", tuba(num1, num2));

   return 0;
}

int tuba(int num1, int num2)
 {
   int retorno;

   if (num1>num2)
   {
    retorno = num1;
   }
   else if (num1<num2)
   {
    retorno = num2;
   }
      else
      {
          printf("%d Es igual a %d\n", num1, num2);
          retorno= num1;
      }

   return retorno;
}
