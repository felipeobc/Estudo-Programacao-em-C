#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Jardas, Metros;
    printf("Digite o comprimento em Jardas: ");
    scanf("%lf", &Jardas);

    Metros = 0.91 *Jardas;

    printf("Valor em Metros: %.2f m\n", Metros);
    system("pause");
    return 0;

}
