#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero, Indice;

    printf("Digite um numero: ");
    scanf("%d", &Numero);

    printf("Numeros que sao divisiveis por %d: ", Numero);
    for(Indice = 1; Indice <= Numero; Indice ++){

        if(Numero % Indice == 0){

            printf("%d ", Indice);
        }
    }
    printf("\n");
    system("pause");
    return 0;


}
