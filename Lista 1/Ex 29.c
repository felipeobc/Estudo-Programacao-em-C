#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Nota1, Nota2, Nota3, Nota4, Soma;

    printf("Digite as 4 notas do aluno: ");
    scanf("%lf %lf %lf %lf", &Nota1, &Nota2, &Nota3, &Nota4);

    Soma = (Nota1 + Nota2 + Nota3 + Nota4)/4;

    printf("Nota final do aluno e: %.2f\n", Soma);
    system("pause");

    return 0;

}
