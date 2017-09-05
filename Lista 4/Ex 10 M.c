#include <stdio.h>
#include <stdlib.h>

int main(){

    int Matriz[3][3], i, j, Soma=0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
               Soma += Matriz[i][j];
            }
        }
    }
    printf("Soma dos valores acima da diagonal : %d\n", Soma);
    system("pause");
    return 0;
}


