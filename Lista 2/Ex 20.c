#include <stdio.h>
#include <stdlib.h>

int main (){

    int Lado_A, Lado_B, Lado_C;

    printf("Digite o valor do lado A do triangulo: : ");
    scanf("%d", &Lado_A);
    printf("Digite o valor do lado B do triangulo: : ");
    scanf("%d", &Lado_B);
    printf("Digite o valor do lado C do triangulo: : ");
    scanf("%d", &Lado_C);

    if(Lado_A == Lado_B == Lado_C){

        printf("Triangulo Equilatero\n ");

    }
    if((Lado_A == Lado_B)||(Lado_A == Lado_C)||(Lado_B == Lado_C)) {

        printf("Triangulo Isosceles\n ");

    } else{

        printf("Triangulo Escaleno\n ");

    }
    system("pause");
    return 0;


}

