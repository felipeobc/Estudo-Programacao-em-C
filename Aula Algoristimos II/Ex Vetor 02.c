#include <stdio.h>
#include <stdlib.h>
#define N 50

int main () {

     int Indice, Vetor[N], Numeros_Medidas = 0, Aux ;

    printf("Digite quantos numeros voce quer armazenar: ");
    scanf("%d", &Numeros_Medidas);

    for(Indice = 0; Indice < Numeros_Medidas; Indice++){
        printf("Digite o %d Numero: ", Indice +1);
        scanf("%d", &Vetor[Indice]);

    }

    for(Indice = Numeros_Medidas - 1; Indice >= 0; Indice--){

        Aux = Vetor[Indice];
        Vetor[Indice] = Vetor[Indice - 1];
        Vetor_Aux[Indice - 1] = Aux;

    }
    printf("Vetor Trocado: ");
    for(Indice = 0 ; Indice < Numeros_Medidas; Indice++){

        printf("%d ", Vetor[Indice]);


    }
    printf("\n");
    system("pause");
    return 0;
}
