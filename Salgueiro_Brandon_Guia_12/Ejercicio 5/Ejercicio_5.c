#include <stdio.h>
#include <stdlib.h>

int Res_total(int res[4], int I);

int main()
{
    int I=0, res[4];

    printf("La suma total de las resistencias es: %d", Res_total(res[4], I));
    return 0;
}
int Res_total(int res[4], int I)
{
    for(I;I<5;I++)
    {
        printf("Ingrese el valor de una resistencia: ");
        scanf("%d",&res[I]);
    }
    int Res_total= res[0]+res[1]+res[2]+res[3]+res[4];
    return Res_total;
}

