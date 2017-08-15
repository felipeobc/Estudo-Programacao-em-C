#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Quilograma, Libra;
    printf("Digite a massa em Quilograma: ");
    scanf("%lf", &Quilograma);

    Libra = Quilograma/0.45;

    printf("Valor da Massa em Libra: %.2f Li", Libra);
    system("pause");
    return 0;

}
