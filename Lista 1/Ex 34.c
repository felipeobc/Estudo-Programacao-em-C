#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main (){

    int Raio, Circulo;

    printf("Digite o valor do Raio: ");
    scanf("%d", &Raio);

    Circulo = PI*pow(Raio,2);


    printf("A area do Circulo e: %d\n ", Circulo);
    system("pause");

    return 0;


}
