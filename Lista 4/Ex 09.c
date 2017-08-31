#include <stdio.h>
#include <stdlib.h>

int main() {

    int Vetor[6], i;

    for(i = 0; i < 6; i++){
        volta:
        printf("Digite %d numero inteiro e par: ", i);
        scanf("%d", &Vetor[i]);

        if(Vetor[i] % 2 == 1){
            printf("Numero Invalido\n");
            goto volta;
        }
    }
    for(i = 5; i >= 0; i--){
        printf("%d ", Vetor[i]);
    }
}
