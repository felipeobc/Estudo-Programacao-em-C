#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero, Quantidade_Numeros, Indice;

    printf("Digite a quantidade de numeros para a contagem: ");
    scanf("%d", &Quantidade_Numeros);

    int Repetidor;

  printf("Contagem: ");

    for(Indice = 0; Indice <= Quantidade_Numeros; Indice++){

        if(Indice % 2 == 0){
            printf("%d ", Indice);
        }
    }
    printf("FIM\n");


    system("pause");
    return 0;
}




