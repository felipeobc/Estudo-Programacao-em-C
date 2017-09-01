#include <stdio.h>
#include <stdlib.h>

int main (){

    int Vetor[10], i;

    for(i = 0; i < 10; i++){
        printf("Vetor %d: ", i+1);
        scanf("%d", &Vetor[i]);
    }
    printf("Vetores Primos: ");
    for(i = 0; i < 10; i++){
        if((Vetor[i] % 2 == 0) || (Vetor[i] % 3 == 0) || (Vetor[i] % 5 == 0) || (Vetor[i] % 7 == 0)){
            printf("%d ", Vetor[i]);
        }
    }
    system("pause");
    return 0;
}
