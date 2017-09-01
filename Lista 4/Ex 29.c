#include <stdlib.h>
#include <stdio.h>

int main (){

    int Vetor[6], i, Soma=0, Soma1=0;

    printf("Digite 6 Numeros\n");
    for(i = 0; i < 6; i++){
        printf("Vetor %d: ", i+1);
        scanf("%d", &Vetor[i]);
    }
    printf("Valores Pares: ");
    for(i = 0; i < 6; i++){
        if(Vetor[i] % 2 == 0){
            printf("%d ", Vetor[i]);
        }
    }
    printf("\n");
    for(i = 0; i < 6; i++){
        if(Vetor[i] % 2 == 0){
            Soma += Vetor[i];
        }
    }
    printf("Soma dos valores pares: %d\n", Soma);
    printf("Valores Pares: ");
    for(i = 0; i < 6; i++){
        if(Vetor[i] % 2 == 1){
            printf("%d ", Vetor[i]);
        }
    }
    for(i = 0; i < 6; i++){
        if(Vetor[i] % 2 == 0){
            Soma1 += Vetor[i];
        }
    }
    printf("Soma dos valores pares: %d\n", Soma1);
    system("pause");
    return 0;

}
