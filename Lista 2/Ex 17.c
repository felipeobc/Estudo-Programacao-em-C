#include <stdio.h>
#include <stdlib.h>

int main() {

    double Base_Maior, Base_Menor, Altura;

    printf("Digite o Valor da Base Maior: ");
    scanf("%lf", &Base_Maior);
    printf("Digite o Valor da Base Menor: ");
    scanf("%lf", &Base_Menor);
    printf("Digite o Valor da Altura: ");
    scanf("%lf", &Altura);

    if(Altura < 0){

        printf("Valor em valido para altura !!\n");

    }else{

        printf("A area do trapezio e : %0.2f \n", (Base_Maior+Base_Menor)*Altura/2 );
    }
    system("pause");
    return 0;
}
