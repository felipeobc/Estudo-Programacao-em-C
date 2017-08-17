#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero1, Numero2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &Numero1, &Numero2);

    if(Numero1 < Numero2){

        printf("O %d e maior que %d\n", Numero2, Numero1);

    }else{ printf("O %d e maior que %d\n", Numero1, Numero2);

    }

    system("pause");

    return 0;

}
