#include <stdio.h>
#include <stdlib.h>

int main (){

    int R1, R2, R, i;


    for(i = 1; i > 0; i++){
        printf("Digite o valor de R1: ");
        scanf("%d", &R1);
        printf("Digite o valor de R2: ");
        scanf("%d", &R2);

        if((R1 > 0)&&(R2 > 0)){
            R += (R1 * R2) / R1 + R2;
            printf("R = %d\n ", R);

        }else{
            printf("Resistor Negativo\n");
            break;
        }
    }
    system("pause");
    return 0;

}


