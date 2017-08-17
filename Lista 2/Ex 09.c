#include <stdio.h>
#include <stdlib.h>

int main() {

    double Salario, Emprestimo;

    printf("Digite o Salario: ");
    scanf("%lf", &Salario);
    printf("Digite o valor do emprestimo: ");
    scanf("%lf", &Emprestimo);


    if(Emprestimo > Salario * 0.20){
            printf("Emprestimo nao concedido\n ");

    }else{
        printf("Emprestimo concedido\n");

    }
    system("pause");
    return 0;

}
