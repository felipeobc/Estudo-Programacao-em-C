#include <stdio.h>
#include <stdlib.h>

int main() {

    int Numero, indice, Media, Soma;

    printf("Digite 10 Numero inteiros\n");

    for(indice = 0; indice < 10; indice++){

        printf("Digite o %d Numero: ", indice+1);
        scanf("%d", &Numero);

         Soma+= Numero;
    }

    printf("A media dos nuemros: %d\n", Soma / 10);
    system("pause");
    return 0;

}

