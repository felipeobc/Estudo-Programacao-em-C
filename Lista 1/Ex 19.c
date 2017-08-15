#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Metros_Cubicos, Litros;

    printf("Digite o volume me Litros: ");
    scanf("%lf", &Litros);

    Metros_Cubicos = Litros / 1000;

    printf("O volume em Metros Cubicos: %.2f m³\n", Metros_Cubicos);
    system("pause");
    return 0;
}
