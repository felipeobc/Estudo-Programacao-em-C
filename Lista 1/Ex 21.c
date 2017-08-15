#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Quilograma, Libra;
    printf("Digite a massa em Libra: ");
    scanf("%lf", &Libra);

    Quilograma = Libra *0.45;

    printf("Valor da Massa em Quilograma: %.2f Kg\n", Quilograma);
    system("pause");
    return 0;

}
