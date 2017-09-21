//Dadas duas matrizes A e B. Calcule a multiplicação das matrizes C = AxB

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void DigitarMatriz(int A[][2]);
void ImprimeMatriz(int MA[][2]);
void Multiplica(int X[][2], int Y[][2], int Z[][2]);
int main (){

    int Matriz_A[2][2], Matriz_B[2][2], Matriz_C[2][2],i,j,k;

    printf("Digite o Valor Matriz(A)\n");
    DigitarMatriz(Matriz_A);

    printf("\n");

    printf("Digite o Valor Matriz(B)\n");
    DigitarMatriz(Matriz_B);

    printf("\n");

    printf("Matriz A\n");
    ImprimeMatriz(Matriz_A);

    printf("\n");

    printf("Matriz B\n");
    ImprimeMatriz(Matriz_B);

    //Multimplicação  de Matrizes
   Multiplica(Matriz_C, Matriz_A, Matriz_B);

    printf("\n");

    printf("Matriz C\n");
    ImprimeMatriz(Matriz_C);

    system("pause");
    return 0;

}
void DigitarMatriz(int A[][2]){
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Matriz A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}
void ImprimeMatriz(int MA[][2]){
    int i,j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("[%d] ", MA[i][j]);
        }
        printf("\n");
    }
}
void Multiplica(int X[][2], int Y[][2], int Z[][2]){
    int i, j, k;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            X[i][j] = 0;
            for(k = 0; k < 2; k++){
                    X[i][j] = Y[k][j] * Z[i][k];

            }
        }
    }
}
