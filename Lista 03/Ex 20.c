#include <stdio.h>
#include <stdlib.h>

int main(){

    int Quantidade_Numeros, Indice, Numero, Quantidade_Par;
    Quantidade_Par = 0;
    printf("Digite a quantidade de nuemros a serem lidos: ");
    scanf("%d", &Quantidade_Numeros);

    for(Indice = 0; Indice < Quantidade_Numeros; Indice++){

        printf("Digite o %d numero: ", Indice +1);
        scanf("%d", &Numero);
        if(Numero == 1000){
            break;
        }
        if(Numero % 2 == 0){
            Quantidade_Par += 1;
        }
    }
    printf("Quantidade de numeros: %d\n", Quantidade_Numeros);
    printf("Quantidade de numeros pares: %d\n", Quantidade_Par);
    system("pause");
    return 0;



}
