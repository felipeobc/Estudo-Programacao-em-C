#include <stdio.h>
#include <stdlib.h>

int main (){

    int Vetor[10], i, Maior, Menor;

    for(i = 0; i < 10; i++){
        printf("Digite %d Numero: ", i);
        scanf("%d", &Vetor[i]);
    }
    Maior = Vetor[0];

    for(i = 0; i < 10; i++){
        if(Maior < Vetor[i] ){
            Maior = Vetor[i];
        }
    }

    for(i = 0; i < 10; i++){
        if(Maior == Vetor[i] ){
            printf("Posicao %d: \n", i );
        }
    }


    printf("Maior numero do vetor: %d\n", Maior);


    system("pause");
    return 0;


}



