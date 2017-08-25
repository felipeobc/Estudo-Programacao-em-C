/*
Escreva uma função que recebe duas variaveis por parametro e efetue a troca dos valores das mesma ?
*/
#include <stdio.h>
#include <stdlib.h>
void Troca (int *a, int *b);

int main (){

    int V1, V2;
    printf("Digite o Valor de a: ");
    scanf("%d", &V1);
    printf("Digite o Valor de b: ");
    scanf("%d", &V2);

    Troca(&V1, &V2);

    printf("Digite o Valor de a: %d\n", V1);
    printf("Digite o Valor de b: %d\n", V2);

    system("pause");
    return 0;

}

void Troca (int *a, int *b){//ponteiro
    int aux;

    aux = *a;
    *a = *b; // Lendo o conteudo.
    *b = aux;

}
