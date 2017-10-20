/*
Escreva um algoritmo que calcula a soma de prefixos de um vetor. A soma de prefixos de um vetor V em S pode ser
definida por:
S[0] = V[0];
S[i] = V[i] + V[i-1] + ... + V[0]
*/
#include <stdio.h>
#include <stdlib.h>

//void FazerVetor(int *Vetor, int N);
//void MostrarVetor(int *Vetor, int N);

int main(){
    int *V, Tamanho, i, j, k, *S;

    printf("Digite o tamanho do seu vetor: ");
    scanf("%d", &Tamanho);

    V = (int *)calloc(Tamanho,sizeof(int));
    S = (int *)calloc(Tamanho,sizeof(int));

    for(i = 0; i < Tamanho; i++){
        printf("Digite a %d Posicao: ", i+1);
        scanf("%d", &V[i]);
    }

    S[0] = 0;
    for(i = 1, j = 0; i < Tamanho; i++,j++){
            S[j] = V[i] + V[i - 1];
    }
    printf("S = {");
    for(i = 0; i < Tamanho; i++){
        printf("%d ", S[i]);
    }

    printf("}\n");

    free(V);
    free(S);
    system("pause");
    return 0;
}

