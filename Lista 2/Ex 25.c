#include <stdio.h>
#include <stdlib.h>

int main() {

    int A, B, C, Delta, x1, x2;

    printf("Ax^2 +-Bx +- C\n");
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    printf("%dx^2 +-%dx +- %d\n", A, B, C);

    Delta = pow(B,2) - 4* A * C;

    if(A == 0){

         printf("Nao e uma fucao do segundo grau!\n");

    }else if(Delta < 0){

        printf("Nao exete Raiz\n");

    }else if(Delta = 0){

        printf("Raiz Unica\n");
        x1 = (-B + sqrt(Delta))/2*A;
        x2 = (-B - sqrt(Delta))/2*A;

        printf("Raiz: %d e %d \n", x1, x2);

    }else if(Delta > 0){

         printf(" Duas Raiz\n");
        x1 = (-B + sqrt(Delta))/2*A;
        x2 = (-B - sqrt(Delta))/2*A;

        printf("Raiz: %d e %d \n", x1, x2);

    }
    system("pause");
    return 0;


}
