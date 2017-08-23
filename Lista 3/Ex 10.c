#include <stdio.h>
#include <stdlib.h>

int main() {

    int Numero, indice, Soma =0 ;

    printf("Digite 50 Numero inteiros\n");

    for(indice = 0; indice < 50; indice++){

        printf("Digite o %d Numero: ", indice+1);
        scanf("%d", &Numero);

        if(Numero % 2 == 0){
                Soma += Numero;
        }

    }

    printf("A Soma dos numeros pares: %d\n", Soma);
    system("pause");
    return 0;

}

