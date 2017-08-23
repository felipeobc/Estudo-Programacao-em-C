#include <stdio.h>
#include <stdlib.h>

int main(){

    int Numero, Indice, Aux_Max = 0, Aux_Min = 0;

    for(Indice = 0; Indice < 10; Indice++){

        printf("Digite o %d numero: ", Indice+1);
        scanf("%d", &Numero);

        if(Numero >= Aux_Max){

            Aux_Max = Numero;

        }else{

            Aux_Min = Numero;
        }

    }
    printf("O maior Numero digitado: %d\n ", Aux_Max);
    printf("O menor Numero digitado: %d\n ", Aux_Min);

    system("pause");
    return 0;

}

