#include <stdio.h>
#include <stdlib.h>

int main (){

    int Indice, Soma;

    for(Indice = 0; Indice < 1000; Indice ++){

        if((Indice % 3 == 0)&& (Indice % 5 == 0)){

            Soma += Indice;

        }
    }
    printf("Soma dos divisiveis por 3 e 5 abaixo de 1000: %d ", Soma);
    printf("\n");
    system("pause");
    return 0;


}

