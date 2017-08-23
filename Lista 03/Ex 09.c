#include <stdio.h>
#include <stdlib.h>

int main(){

    int Numero, Quantidade_Numeros, Indice, Aux_Max = 0, Aux_Min = 0;

    printf("Digite a quantidade de Numeros que queira digitar: ");
    scanf("%d", &Quantidade_Numeros);

    for(Indice = 0; Indice < Quantidade_Numeros; Indice++){

        printf("Digite o %d numero: ", Indice+1);
        scanf("%d", &Numero);

        if(Numero % 2 == 1) {
            printf("%d ", Numero);

        }
    }


    system("pause");
    return 0;


}

