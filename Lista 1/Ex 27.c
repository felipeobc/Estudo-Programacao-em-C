#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Metros_Quadrados, Hectares;
    printf("Digite o comprimento em Hectares: ");
    scanf("%lf", &Hectares);

    Metros_Quadrados = Hectares * 10000;

    printf("Valor em Metros Quadrados: %f m\n", Metros_Quadrados);
    system("pause");
    return 0;

}
