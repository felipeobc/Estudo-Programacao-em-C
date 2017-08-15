#include <stdio.h>
#include <stdlib.h>

int main (){

    double F, C;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &F);

    C = 5.0 *(F - 32.0)/9.0;

    printf("O valor da temperatura em Celsius: %.2f\n", C);
    system("pause");

    return 0;

}
