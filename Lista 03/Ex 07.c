#include <stdio.h>
#include <stdlib.h>

int main() {

    int Numero, indice, Soma =0 ;

    printf("Digite 10 Numero inteiros\n");

    for(indice = 0; indice < 10; indice++){

        printf("Digite o %d Numero: ", indice+1);
        scanf("%d", &Numero);

        if (Numero > 0 ){

            Soma += Numero;

        }

    }

    printf("A Soma dos 10 numeros fornecidos: %d\n", Soma);
    system("pause");
    return 0;

}

