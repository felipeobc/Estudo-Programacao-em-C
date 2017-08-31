#include <stdio.h>
#include <stdlib.h>

int main (){

    int vetor[] = {1, 0, 5, -2, -5, 7}, Soma, i;

    for(i = 0 ; i < 6; i++){
        printf("Vetor[%d]:  %d\n", i, vetor[i]);

    }

    Soma = vetor[0] + vetor[1] + vetor[5];
    printf("Valor da Soma: %d\n", Soma);

    vetor[4] = 100;
    printf("Vetor[4] = %d\n", vetor[4]);

    for(i = 0 ; i < 6; i++){
        printf("Vetor[%d]:  %d\n", i, vetor[i]);

    }
    system("pause");
    return 0;



}
