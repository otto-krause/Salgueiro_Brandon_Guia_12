#include <stdio.h>
#include <stdlib.h>


int lector();
int lector1();
int main()
{
    printf("Los numeros ingresados son: \n%d\n%d", lector(), lector1());
    return 0;
}
int lector()
{
    int a;
    printf("ingrese un numero: ");
    scanf("%d", &a);
    return (a);
}
int lector1()
{
    int b;
    printf("ingrese un numero: ");
    scanf("%d", &b);
    return (b);
}
