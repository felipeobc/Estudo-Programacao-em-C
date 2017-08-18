#include <stdio.h>
#include <stdlib.h>
#define N 50

int main () {

     int Indice, Numeros_Int[N], Numeros_Medidas = 0;

    printf("Digite quantos numeros voce quer armazenar: ");
    scanf("%d", &Numeros_Medidas);

    for(Indice = 0; Indice < Numeros_Medidas; Indice++){
        printf("Digite o %d Numero: ", Indice +1);
        scanf("%d", &Numeros_Int[Indice]);

    }
        printf("Vetor Digitado V[%d] = ", Numeros_Medidas);

    for (Indice = 0; Indice < Numeros_Medidas; Indice++){

            printf("%d ", Numeros_Int[Indice]);
    }

        printf("\nVetor Alaterado V[%d] =  ", Numeros_Medidas);

    for (Indice = Numeros_Medidas -1 ; Indice >= 0; Indice--){

            printf("%d ", Numeros_Int[Indice]);
    }
    printf("\n");
    system("pause");
    return 0;
}


