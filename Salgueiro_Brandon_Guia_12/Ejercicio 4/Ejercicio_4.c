#include <stdio.h>
#include <stdlib.h>
float presion(float A, float B);

int main()
{

    float A,B;
    printf("Ingrese un la fuerza ejercida en N: ");
    scanf("%f",&A);
    printf("Ingrese el area en M^2: ");
    scanf("%f",&B);
    printf("La presion en P es: %.3f", presion(A, B));
    return 0;
}
float presion(float A, float B)
{
    float presion= A/B;
    return presion;
}
