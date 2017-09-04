#include <stdio.h>
#include <stdlib.h>

int main (){
    int Matriz[4][4], i, j, Quantidade=0;

    for(i = 0; i < 4; i++ ){
        for(j = 0; j < 4; j++){
            printf("Posicao[%d][%d]: ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
        }
    }

    for(i = 0; i < 4; i++ ){
        for(j = 0; j < 4; j++){
            printf("[%d]", Matriz[i][j]);

        }
        printf("\n");

    }
    for(i = 0; i < 4; i++ ){
        for(j = 0; j < 4; j++){
            if(Matriz[i][j] > 10){
                Quantidade++;
            }
        }
    }
    printf("A matriz contem %d Numeros maiores que 10\n", Quantidade);
    system("pause");
    return 0;
}
