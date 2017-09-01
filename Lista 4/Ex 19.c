#include <stdio.h>
#include <stdlib.h>

int main() {

    int Vetor[50], i, Numero;
        printf("Vetor: ");

    for(i = 0; i < 50; i++){
            Vetor[i] = (i+5*i)%(i+1);
        printf("%d ",Vetor[i]);

    }
    system("pause");
    return 0;

}


