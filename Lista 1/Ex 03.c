#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero1, Numero2, Numero3, Soma;

    printf("Digite Tres numeros: ");
    scanf("%d %d %d", &Numero1, &Numero2, &Numero3);

    Soma = Numero1+ Numero2 + Numero3;

    printf("A soma dos numeros e: %d\n", Soma);

    system("pause");
    return 0;


}
