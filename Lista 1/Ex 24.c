#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Metros_Quadrados, Acres;
    printf("Digite o comprimento em Metros Quadrados: ");
    scanf("%lf", &Metros_Quadrados);

    Acres = Metros_Quadrados*0.000247;

    printf("Valor em Acres: %f A\n", Acres);
    system("pause");
    return 0;

}
