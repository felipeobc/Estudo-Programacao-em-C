#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int Numero1, Numero2, Numero3, Soma;

    printf("Digite 3 Nuemros inteiros: ");
    scanf("%d %d %d", &Numero1, &Numero2, &Numero3);

    Soma = pow(Numero1,2) + pow(Numero2,2) + pow(Numero3,2);

    printf("A soma dos quadrados dos 3 numeros e: %d", Soma);
    system("pause");

    return 0;


}
