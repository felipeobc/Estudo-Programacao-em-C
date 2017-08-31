#include <stdio.h>
#include <stdlib.h>

int main() {

    int Vetor[6], i;

    for(i = 0; i < 6; i++){
        printf("Digite o %d Numero: ", i);
        scanf("%d", &Vetor[i]);

    }
    printf("Inversor do Vetor: ");

    for(i = 5; i >= 0; i--){
        printf("%d ", Vetor[i]);
    }
    system("pause");
    return 0;

}
