#include <stdio.h>
#include <stdlib.h>

int main() {

    int Quantidade_Numero, Numeros, Indice, Aux_Max, Quantidade;
    Quantidade = 0;
    Aux_Max = 0;

    printf("Digite uma quantidade de numeros para serem lidos: ");
    scanf("%d", &Quantidade_Numero);

    for(Indice = 1; Indice <= Quantidade_Numero; Indice++){

        printf("Digite o %d numero: ", Indice);
        scanf("%d", &Numeros);

        if(Numeros > Aux_Max){

            Aux_Max = Numeros;
            Quantidade += 1;

        }
        if(Aux_Max != Aux_Max){

            Quantidade = 0;
        }
        if(Numeros == Aux_Max){

            Quantidade += 1;
        }

    }
    printf("O maior numero: %d\n", Aux_Max);
    printf("Ele foi digitado:  %d\n", Quantidade);

}
