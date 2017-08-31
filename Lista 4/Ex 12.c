#include <stdio.h>
#include <stdlib.h>

int main(){
    int Vetor[5], Maior, Menor, i, Media, Soma;



    for(i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &Vetor[i]);
        Soma += Vetor[i];
    }

    Maior = Menor = Vetor[0];
    for(i = 0; i < 5; i++){
        if(Maior < Vetor[i] ){
            Maior = Vetor[i];
        }else{
            Menor = Vetor[i];
        }
    }
    printf("Maior numero do vetor: %d\n", Maior);
    printf("Menor numero do vetor: %d\n", Menor);
    Media = Soma / 5;
    printf("Valor da media geral: %d", Media);
    system("pause");
    return 0;


}
