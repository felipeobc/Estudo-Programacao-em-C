#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int largura, comprimeto, area;
    double preco, preco_tela;

    printf("Digite a largura do terreno: ");
    scanf("%d", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%d", &comprimeto);
    printf("Preço da tela: ");
    scanf("%lf", &preco_tela);

    area = comprimeto * largura;

    preco = area * preco_tela;

    printf("\nValor da cerca R$: %.2f ", preco);

    return 0;




}
