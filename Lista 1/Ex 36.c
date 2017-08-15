#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main (){

    int altura, raio, volume;

    printf("Digite o valor do Raio: ");
    scanf("%d", &raio);
    printf("Digite o valor da Altura: ");
    scanf("%d", &altura);

    volume = PI*altura*pow(raio,2);

    printf("Volume do Cilindro: %d\n", volume);
    system("pause");

    return 0;


}
