#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int x, y, z, opcao;


    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);

    printf("1 -> Geometrico\n2 -> Ponderado\n3 -> Harmonico\n4 -> Aritimetica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){

        case 1: printf("Geometrica\n");
                printf("Valor: %d\n ", cbrt(x + y + z) );
                break;


        case 2: printf("Ponderada\n");
                printf("Valor: %d\n ", (x+2*y+3*z)/6);
                break;

        case 3: printf("Harmonica\n");
                printf("Valor: %d\n ", 1/(1/x + 1/y + 1/z));
                break;

        case 4: printf("Aritimetica\n");
                printf("Valor: %d\n ", (x+y+z)/3);
                break;
    }
    system("pause");
    return 0;

}



