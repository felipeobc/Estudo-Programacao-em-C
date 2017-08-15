#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int Numero;

    printf("Digite um nuemro inteiro:");
    scanf("%d", &Numero);

    printf("Antecessor: %d\n ", Numero-1 );
    printf("Sucessro: %d\n ", Numero+1 );
    system("pause");

    return 0;

}
