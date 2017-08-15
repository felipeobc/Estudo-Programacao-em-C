#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Metros_Quadrados, Acres;
    printf("Digite o comprimento em Acres: ");
    scanf("%lf", &Acres);

    Metros_Quadrados = Acres * 4048.58;

    printf("Valor em Metros Quadrados: %f m²\n", Metros_Quadrados);
    system("pause");
    return 0;

}
