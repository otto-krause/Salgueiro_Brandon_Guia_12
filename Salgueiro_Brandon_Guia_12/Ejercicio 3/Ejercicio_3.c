#include <stdio.h>
#include <stdlib.h>

float porcentaje1(float m, float f);
float porcentaje2(float m, float f);

int main()
{
    float m,f;
    printf("Ingrese el numero de postulantes masculinos: ");
    scanf("%f",&m);
    printf("Ingrese el numero de postulantes femeninos: ");
    scanf("%f",&f);
    printf("El porcentaje de masculinos es: %.3f%\nEl porcentaje de femeninos es: %.3f%", porcentaje1( m, f), porcentaje2(m, f));
    return 0;
}
float porcentaje1(float m, float f)
{

    float porcentaje1 = ((m*100)/(m+f));
    return porcentaje1;
}
float porcentaje2 (float m, float f)
{

    float porcentaje2 = ((f*100)/(m+f));
    return porcentaje2;
}
