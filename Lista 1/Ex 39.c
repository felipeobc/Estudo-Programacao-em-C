#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Premio, Ganhador1, Ganhador2, Ganhador3, Desconto;
    Premio = 780000.00;
    printf("Premio R$: %.2f\n ", Premio);

    Desconto = Premio*46/100;
    Ganhador1 = Premio - Desconto;
    printf("Ganhador 1 46%% R$: %.2f\n ", Ganhador1);

    Premio -= Ganhador1;

    Desconto = Premio*32/100;
    Ganhador2 = Premio - Desconto;
    printf("Ganhador 2 32%% R$: %.2f\n ", Ganhador2);

    Premio -= Ganhador2;

    printf("Ganhador 3  R$: %.2f\n ", Premio);



    system("pause");

    return 0;


}

