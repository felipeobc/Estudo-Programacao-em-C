#include <stdio.h>
#include <stdlib.h>

int main (){

    double K, C;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &C);

    K = C + 273.15;

    printf("O valor da temperatura em Kelvin: %.2f\n", K);
    system("pause");
    return 0;


}
