#include <stdio.h>
#include <stdlib.h>

int main (){

    int Repetidor;


    printf("Repedidor for: ");

    for(Repetidor = 0; Repetidor <= 100; Repetidor++){

        printf("%d ", Repetidor);

    }

    printf("\n");

    printf("Repedidor while: ");

    Repetidor = 0 ;
    while(Repetidor <= 100){

        printf("%d ", Repetidor);

        Repetidor ++;

    }

    printf("\n");

    printf("Repedidor do-while: ");

    Repetidor = 0;

    do{
       printf("%d ", Repetidor);

       Repetidor ++;

    }while(Repetidor <= 100);

    system("pause");
    return 0;
}

