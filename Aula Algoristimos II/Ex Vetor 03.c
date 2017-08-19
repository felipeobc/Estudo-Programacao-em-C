#include <stdio.h>
#include <stdlib.h>
#define N 50

int main () {

     int Indice, Vetor_A[N], Numeros_Medidas = 0, Vetor_B[N], Vetor_Aux[N];

    printf("Digite quantos numeros voce quer armazenar: ");
    scanf("%d", &Numeros_Medidas);

    for(Indice = 0; Indice < Numeros_Medidas; Indice++){

        printf("Digite o %d Numero do Vetor A: ", Indice +1);
        scanf("%d", &Vetor_A[Indice]);

    }

    for(Indice = 0; Indice < Numeros_Medidas; Indice++){

        printf("Digite o %d Numero do Vetor B: ", Indice +1);
        scanf("%d", &Vetor_B[Indice]);

    }

    for(Indice = 0; Indice < Numeros_Medidas; Indice++){

        if(Vetor_A[Indice] == Vetor_B[Indice]){

            Vetor_Aux[Indice] = Vetor_A[Indice];

        }
    }

    printf("Interseccao entre os vetores A e B : ");

    for(Indice = 0; Indice < Numeros_Medidas; Indice++){

        printf("%d ", Vetor_Aux[Indice]);
    }


    printf("\n");
    system("pause");
    return 0;
}



