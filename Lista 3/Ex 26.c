#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero, Indice;

    printf("Digite um numero: ");
    scanf("%d", &Numero);

    for(Indice = Numero; Indice <= 1000; Indice ++){

        if(Numero % 11 == 0){
            printf("%d", Indice);
            break;
        }

        if(Numero % 13 == 0){
            printf("%d", Indice);
            break;
        }

        if(Numero % 15 == 0){
            printf("%d", Indice);
            break;
        }
    }
    system("pause");
    return 0;
}
