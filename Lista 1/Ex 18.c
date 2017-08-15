#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Metros_Cubicos, Litros;

    printf("Digite o volume me Metros Cubicos: ");
    scanf("%lf", &Metros_Cubicos);

    Litros = Metros_Cubicos * 1000;

    printf("O volume em Litros: %.2f L\n", Litros);
    system("pause");
    return 0;




}

