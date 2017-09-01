#include <stdio.h>
#include <stdlib.h>

int main() {

    int Vetor[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite o %d Numero: ",i+1);
        scanf("%d", &Vetor[i]);
    }
    for(i = 0; i < 10; i++){
        if(Vetor[i] < 0){
            Vetor[i] = 0;
        }
    }
    printf("Vetor: ");
    for(i = 0; i < 10; i++){
        printf("%d ", Vetor[i]);
    }
    system("pause");
    return 0;

}
