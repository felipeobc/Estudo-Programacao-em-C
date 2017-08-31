#include <stdio.h>
#include <stdlib.h>

int main() {

    int Vetor[10], i, Negativo=0,Soma=0;

    for(i = 0; i < 10; i++){
       printf("Digite  %d Numero: ", i+1);
       scanf("%d", &Vetor[i]);
    }
    for(i = 0; i < 10; i++){
        if(Vetor[i] <= -1 ){
            Negativo += 1;
        }
    }
    printf("Contem %d numeros negativos\n", Negativo);

    for(i = 0; i < 10; i++){
       if(Vetor[i] > 0){
        Soma += Vetor[i];
       }
    }
    printf("A Soma dos numeros positivos: %d\n", Soma);

}
