#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero, Quantidade_Numeros, Indice;
    printf("Digite a quantidade de numeros para a contagem: ");
    scanf("%d", &Quantidade_Numeros);

    int Repetidor;

  printf("Contagem: ");

    Repetidor = 1 ;
    while(Repetidor <=  Quantidade_Numeros){

        printf("%d ", Repetidor);

        Repetidor ++;

    }
    printf("FIM\n");


    system("pause");
    return 0;
}




