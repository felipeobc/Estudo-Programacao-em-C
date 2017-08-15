#include <stdio.h>
#include <stdlib.h>


int main (){

    double C, F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &C);

    F = C*(9.0/5.0) + 32.0;

    printf("Valor em Fahrenheit: %.2f\n", F);
    system("pause");
    return 0;


}
