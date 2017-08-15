#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Numero;

    printf("Digite um numeor: ");
    scanf("%lf", &Numero);

    printf("O valor do quadrado e: %.2f\n", pow(Numero,2));
    system("pause");
    return 0;

}
