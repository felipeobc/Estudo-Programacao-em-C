#include <stdio.h>
#include <stdlib.h>

int main() {

    int VetorX[5], VetorY[5], P_Escalar, i;

    for(i = 0; i < 5; i++){
        printf("VetorX: ");
        scanf("%d", &VetorX[i]);
    }
    for(i = 0; i < 5; i++){
        printf("VetorY: ");
        scanf("%d", &VetorY[i]);
    }
    for(i = 0; i < 5; i++){
        P_Escalar += VetorX[i] * VetorY[i];

    }
    printf("Valor do Produto Escalar: %d\n", P_Escalar);
    system("pause");
    return 0;
}
