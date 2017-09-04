#include <stdio.h>
#include <stdlib.h>

int main (){
    int Matriz[5][5], i, j;


    for(i = 0; i < 4; i++ ){
        for(j = 0; j < 4; j++){
                if(i + j == 4){
                    Matriz[i][j] = 1;

                }else{
                    Matriz[i][j] = 0;
                }
        }
    }
    for(i = 0; i < 4; i++ ){
        for(j = 0; j < 4; j++){
            printf("[%d]", Matriz[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

