#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero, Quantidade_Numeros, Indice, Aux_Max = 0, Aux_Min = 0;

    printf("Digite a quantidade de numeros para a contagem: ");
    scanf("%d", &Quantidade_Numeros);

    int Repetidor;

  printf("Contagem: ");

    Repetidor = 0 ;
    while(Repetidor <=  Quantidade_Numeros){

        printf("%d ", Repetidor);

        Repetidor ++;

    }
    printf("FIM\n");


    system("pause");
    return 0;
}



