#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int Lateral, Soma;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%d", &Lateral);

    Soma = pow(Lateral,2);

    printf("A area do quadrado e: %d\n ", Soma);
    system("pause");

    return 0;


}
