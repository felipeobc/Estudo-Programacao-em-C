#include <stdio.h>
#include <stdlib.h>

int main() {

    int Vetor[100], i;

    for(i = 0; i < 100; i++){
        Vetor[i] = i;
    }

    printf("Vetor que sao multiplos de 7: ");
    for(i = 0; i < 100; i++){
        if(Vetor[i] % 7 == 0);
        printf("%d ", Vetor[i]);
    }
    system("pause");
    return 0;
}


