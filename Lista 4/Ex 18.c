#include <stdio.h>
#include <stdlib.h>

int main() {

    int Vetor[10], i, Numero;

    for(i = 0; i < 10; i++){
        printf("Digite o %d Numero: ",i+1);
        scanf("%d", &Vetor[i]);
    }
    printf("Digite um Numeroa Inteiro: ");
    scanf("%d", &Numero);

    for(i = 0; i < 10; i++){
        if(Vetor[i] % Numero == 0){
            printf("%d ", Vetor[i]);
        }
    }

    system("pause");
    return 0;

}

