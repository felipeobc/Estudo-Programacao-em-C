#include <stdio.h>
#include <stdlib.h>

int main (){

    double K, C;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%lf", &K);

    C = K - 273.15;

    printf("O valor da temperatura em Celsius: %.2f\n", C);
    system("pause");
    return 0;


}

