#include <stdio.h>
#include <stdlib.h>

int main(){

    int Matriz1[4][4], Matriz2[4][4], i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &Matriz1[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%d]", Matriz1[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            Matriz2[i][j] = Matriz1[i][j];
        }
    }
    printf("\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%d]", Matriz2[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;

}
