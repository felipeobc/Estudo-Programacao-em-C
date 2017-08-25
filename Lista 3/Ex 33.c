#include <stdio.h>
#include <stdlib.h>

int main () {

    int Numero1, Numero2, Indice, Numero;
    printf("Didite 1 numero: ");
    scanf("%d", &Numero1);
    printf("Didite 2 numero: ");
    scanf("%d", &Numero2);
    printf("Digite o numero de multiplos: ");
    scanf("%d", &Numero);

    for(Indice = 0; Indice < Numero; Indice++){

        if(Indice % Numero1 == 0){
            printf("%d ", Indice);
        }
        if(Indice % Numero2 == 0){
            printf("%d ", Indice);
        }
    }
    system("pause");
    return 0;

    system("pause");
    return 0;


}

