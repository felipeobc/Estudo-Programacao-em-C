#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Metros_Quadrados, Hectares;
    printf("Digite o comprimento em Metros Quadrados: ");
    scanf("%lf", &Metros_Quadrados);

    Hectares = Metros_Quadrados * 0.0001;

    printf("Valor em Hectares: %f hec\n", Hectares);
    system("pause");
    return 0;

}
