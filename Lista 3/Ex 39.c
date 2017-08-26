#include <stdio.h>
#include <stdlib.h>

int main() {

    double Base, Altura, Area = 0;

    printf("Digite Altura do triangulo: ");
    scanf("%d", &Altura);
    printf("Digite Base do triangulo: ");
    scanf("%d", &Base);

    if((Base < Altura) || (Altura <= 0)){
        printf("Altura Invalida!\n");

    }else{

        Area = (Base * Altura) / 2;
        printf("Valor da Area: %d\n", Area);
    }

    system("pause");
    return 0;

}
