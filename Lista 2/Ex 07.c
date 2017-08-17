#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero1, Numero2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &Numero1, &Numero2);

    if(Numero1 > Numero2){
        printf("O numero %d e maior", Numero1);

    }else if(Numero2 > Numero1) {
        printf("O numero %d e maior", Numero2);
    } else if(Numero1 == Numero2){
        printf("Numeros iguais !!");

    }else{
        printf("Numeros iguais !!");
    }
    system("pause");
    return 0;
}

