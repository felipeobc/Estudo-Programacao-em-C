#include <stdio.h>
#include <stdlib.h>

int main () {

    int Indice,Soma_Qudrados =0, Quadrados_Soma=0, Soma=0;

    for(Indice = 1; Indice <= 10; Indice++){

        Soma_Qudrados += pow(Indice,2);
        Soma+= Indice;


    }
    Quadrados_Soma = pow(Soma,2);
    printf("Valor dos Soma dos Quadrados: %d\n", Soma_Qudrados);
    printf("Valor dos Quadrados da Soma: %d\n", Quadrados_Soma);


    system("pause");
    return 0;


}


