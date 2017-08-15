#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Real, Dolar, Cotacao;

    printf("digite o valor do Real: ");
    scanf("%lf", &Real);
    printf("digite a cotacao do Dolar: ");
    scanf("%lf", &Dolar);

    Cotacao = Real * Dolar;

    printf("Valor do Dolar $: %.2f\n", Cotacao);
    system("pause");

    return 0;

}
