#include <stdio.h>
#include <stdlib.h>

int main (){

    int Vetor[10], Vetor_Quadrado[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite %d Numero: ", i);
        scanf("%d", &Vetor[i]);
    }

    printf("Numeros digitados: ");

    for(i = 0; i < 10; i++){
        printf("%d ", Vetor[i]);
    }

    for(i = 0; i < 10; i++){
        Vetor_Quadrado[i] = pow(Vetor[i],2);
    }
    printf("Numeros ao quadrados: ");

    for(i = 0; i < 10; i++){
        printf("%d ", Vetor_Quadrado[i]);
    }
    system("pause");
    return 0;



}

