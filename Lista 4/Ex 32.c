#include <stdio.h>
#include <stdlib.h>

int main (){

    int VetorX[5], VetorY[5], i, Soma=0, Multiplica=0, Multiplicar=0, j, k, Vetor_Aux[5];

    for(i = 0; i < 5; i++){
        printf("VetorX %d: ", i+1);
        scanf("%d", &VetorX[i]);
    }
    for(i = 0; i < 5; i++){
        printf("VetorY %d: ", i+1);
        scanf("%d", &VetorY[i]);
    }
    for(i = 0; i < 5; i++){
        Soma += VetorX[i] + VetorY[i];
    }
    printf("Soma dos Veotores: %d\n", Soma);

    for(i = 0; i < 5; i++){
        Multiplica = VetorX[i] * VetorY[i];
        Multiplicar += Multiplica;
    }
    for(i = 0; i < 5; i++){
        Multiplica = VetorX[i] * VetorY[i];
        Multiplicar += Multiplica;
    }
    printf("A multiplicação entre os vetores: %d\n", Multiplicar);
    for(i=0,k=0;i<5;i++)
        for(j=0;j<5;j++)
            if (VetorX[j] == VetorY[i]) {
                Vetor_Aux[k] = VetorX[i];
                k++;
            }
    for(i = 0; i < 5; i++){
        printf("%d : ", Vetor_Aux[i]);

    }

    system("pause");


    return 0;
}
