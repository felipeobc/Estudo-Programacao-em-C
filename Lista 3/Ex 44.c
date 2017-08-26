#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero, i, F =0;

    printf("Digite um numero da seguencia de Fibonacci: ");
    scanf("%d", &Numero);

    for(i = 1; i < Numero; i++){

            F += (i - 1 ) + (i - 2);
            printf("%d ", F);
        }

    system("pause");
    return 0;

}


