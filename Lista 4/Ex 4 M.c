#include <stdio.h>
#include <stdlib.h>2

int main (){

    int Matriz[4][4], i, j, Maior, Posicao_i, Posicao_j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Matriz [%d][%d]: ", i , j);
            scanf("%d", &Matriz[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%d]", Matriz[i][j]);
        }
        printf("\n");
    }
    Maior = Matriz[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(Maior < Matriz[i][j]){
                Maior = Matriz[i][j];
                Posicao_i = i;
                Posicao_j = j;
            }

        }
    }
    printf("Valor Maior na Matriz: %d\n", Maior);
    printf("Posicao [%d][%d]\n", Posicao_i, Posicao_j);
    system("pause");
    return 0;

}
