#include <stdio.h>
#include <stdlib.h>

int main (){

    int Multiplicador = 0, Repetidor;

    Repetidor = 0;

    printf("Os tres multiplos de 3: ");
    while(Repetidor < 3){

        Multiplicador += 3;

        printf("%d ", Multiplicador);

        Repetidor ++;
    }
    printf("\n");
    system("pause");
    return 0;
}
