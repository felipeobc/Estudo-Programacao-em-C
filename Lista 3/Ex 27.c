#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int n, i;
    double Soma = 0, H;

    printf("Digite o valor de (n) H(n) = 1 + 1/2 + 1/3 + 1/4 +...+ 1/n: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--){

        H =  1.0/i;
        Soma += H;
    }
    printf("Valor do Calculo Harmonico: %f\n", Soma);
    system("pause");
    return 0;
}
