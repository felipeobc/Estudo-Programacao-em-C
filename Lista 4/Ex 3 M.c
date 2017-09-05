#include <stdio.h>
#include <stdlib.h>

int main (){

    int Matriz[4][4], i, j, Produto;
    Matriz[0][0] = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            Matriz[i][j] = i*j;
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%d]", Matriz[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
