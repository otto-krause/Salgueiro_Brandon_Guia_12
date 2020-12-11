#include <stdio.h>
#include <stdlib.h>

float octava(float num1);

int main()
{
    float num1;
    printf("Ingrese un valor entero: ");
    scanf("%f",&num1);
    printf("La octava parte es: %.3f", octava(num1));
    return 0;
}
float octava(float num1)
{
    float octava= num1/8;
    return octava;
}
