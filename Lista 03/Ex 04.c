#include <stdio.h>
#include <stdlib.h>

int main (){

    int Repetidor;

  printf("Contagem: ");

    Repetidor = 0 ;
    while(Repetidor <= 100000){

        printf("%d ", Repetidor);

        Repetidor += 1000;

    }
    printf("FIM\n");


    system("pause");
    return 0;
}


