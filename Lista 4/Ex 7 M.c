#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int Matriz[4][4], i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i < j){
                Matriz[i][j] = 2*i + 7*j - 2;
            }
            if(i = j){
                Matriz[i][j] = (3*pow(i,2)) - 1;
            }
            if(i > j){
                Matriz[i][j] = (4*pow(i,3)) - (5*pow(j,2)) + 1;
            }
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
