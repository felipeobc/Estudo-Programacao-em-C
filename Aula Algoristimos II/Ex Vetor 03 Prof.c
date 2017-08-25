#include<stdio.h>

void interseccao(int A[], int a, int B[], int b, int C[], int *c);
void mostrar(int C[], int c);

int main (){
    int A[5] ={3,9,2,6};
    int a = 4;

    int B[4] = {2,6,1};
    int b = 3;

    int C[4];
    int c = 0 ;

    interseccao(A, a, B, b, C, &c);
    mostrar(C, c);

    return 0;
}

void interseccao(int A[], int a, int B[], int b, int C[], int *c){ 
    int i, j;
    for (i = 0; i < a; i++){
        for (j = 0; j < b; j++)
            if (A[i] == B[j]) {
                C[(*c)++] = A[i];
            }
    }

}
void mostrar(int C[], int c){
    int i;
    printf("Intersecção: ");
    for (i = 0; i < c; i++)
        printf("%d ", C[i]);
}
