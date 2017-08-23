#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero, Quantidade_Numeros, Indice, Soma, Repetidor;

    printf("Digite a quantidade de numeros para a contagem: ");
    scanf("%d", &Quantidade_Numeros);

    Soma = 0;
    Repetidor = 0 ;
    while(Repetidor <=  Quantidade_Numeros){

        Soma += Repetidor;

        Repetidor ++;

    }

    printf("FIM\n");
    printf("A soma dos n Numeros: %d\n", Soma);

    system("pause");
    return 0;
}




