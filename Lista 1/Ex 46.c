#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main () {

    int Numero, Centena, Dezena, Unidade;

    printf("Digitre tres numeros: ");
    scanf("%d", &Numero);

    Centena = Numero/100;
    Numero = Numero%100;
    Dezena = Numero/10;
    Unidade = Numero%10;

    printf("Numero Invertido: %d%d%d\n", Unidade, Dezena, Centena);
    system("pause");
    return 0;
}

