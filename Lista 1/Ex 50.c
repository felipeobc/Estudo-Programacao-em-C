#include <stdio.h>
#include <stdlib.h>

int main (){

    int idade, Ano_Nascimento, Ano_Atual;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &Ano_Nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &Ano_Atual);

    idade = Ano_Atual - Ano_Nascimento;

    printf("Idade : %d", idade);

    return 0;
}
