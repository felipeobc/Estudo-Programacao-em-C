#include <stdio.h>
#include <stdlib.h>

int main (){

    int vetorA[10], vetorB[10], i, Vetor_Aux[10], aux=0, j;

    for(i = 0; i < 10; i++){
        printf("VetorA %d: ", i+1);
        scanf("%d", &vetorA[i]);
    }
    for(i = 0; i < 10; i++){
        printf("VetorB %d: ", i+1);
        scanf("%d", &vetorB[i]);
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(vetorA[i] == vetorB[j]){
                Vetor_Aux[aux++] = vetorA[i];

            }
        }
    }
    printf("Numeros Iguais nos Vetores: ");
    for(i = 0; i < aux; i++){
            printf("%d ", Vetor_Aux[i]);

    }
    system("pause");
    return 0;
}
