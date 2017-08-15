#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Jardas, Metros;
    printf("Digite o comprimento em Metros: ");
    scanf("%lf", &Metros);

    Jardas = Metros /0.91;

    printf("Valor em Jardas: %.2f Jar\n", Jardas);
    system("pause");
    return 0;

}
