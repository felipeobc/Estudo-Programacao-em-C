#include <stdio.h>
#include <stdlib.h>

int main(){
    int Vetor[5], i, Maior, Menor, Posicao_Maior, Posicao_Menor;

    for(i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i +1);
        scanf("%d", &Vetor[i]);
    }
       Maior = Menor = Vetor[0];
    for(i = 0; i < 5; i++){
        if(Maior < Vetor[i] ){
            Maior = Vetor[i];
            Posicao_Maior = i;
        }else{
            Menor = Vetor[i];
            Posicao_Menor = i;
        }
    }
    printf("Maior numero do vetor %d, posicao %d \n", Maior, Posicao_Maior+1);
    printf("Menor numero do vetor %d, posicao %d\n", Menor, Posicao_Menor+1);
    system("pause");
    return 0;
}
