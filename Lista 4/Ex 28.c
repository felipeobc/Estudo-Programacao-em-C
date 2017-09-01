#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    int vetor1[10], vetor2[10], vetor[10], i, aux1=0, aux2=0;

    for(i = 0; i < 10; i++){
        printf("Vetor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            vetor1[aux1] = vetor[i];
            aux1++;
        }else{
            vetor2[aux2] = vetor[i];
            aux2++;
        }
    }
    printf("Vetor1: ");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor1[i]);
    }
    printf("Vetor2: ");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor2[i]);
    }
    system("pause");
    return 0;

}
