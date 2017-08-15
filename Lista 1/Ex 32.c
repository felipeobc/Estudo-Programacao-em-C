#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int Numero, Soma;

    printf("Digite um nuemro inteiro:");
    scanf("%d", &Numero);

    Soma = ((Numero-1)*3) + ((Numero+1)*2);

    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro  %d\n ", Soma);
    system("pause");

    return 0;

}
