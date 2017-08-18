#include <stdio.h>
#include <stdlib.h>
#define N 50

int main () {

     int Indice, Numeros_Int[N], Soma_Media = 0, Media, Mostrar = 0, Numeros_Medidas;

    printf("Digite quantos numeros voce quer armazenar: ");
    scanf("%d", &Numeros_Medidas);

    for(Indice = 0; Indice < Numeros_Medidas; Indice++){
        printf("Digite o %d Numero: ", Indice +1);
        scanf("%d", &Numeros_Int[Indice]);

        Soma_Media += Numeros_Int[Indice];

    }

    Media = Soma_Media / Numeros_Medidas;
    printf("Valor da media: %d\n", Media);

    for (Indice = 0; Indice < Numeros_Medidas; Indice++){

        if(Numeros_Int[Indice] > Media){
                Mostrar += 1;

        }
    }
    printf("Exite: %d", Mostrar);

    system("pause");
    return 0;
}

