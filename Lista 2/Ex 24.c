#include <stdio.h>
#include <stdlib.h>

int main() {

    double Valor_Produto;
    int Estado;

    printf("Digite o valor do produto R$: ");
    scanf("%lf", &Valor_Produto);
    printf("ESTADO\n");
    printf("1 -> Minas Gerais\n2 -> Sao Paulo\n3 -> Rio de Janeiro\n4 -> Mato Grosso do Sul\n");
    printf("Informe o Estado: ");
    scanf("%d", &Estado);

    switch(Estado){

        case 1: printf("Minas Gerais\n");
                printf("Valor do produto: %0.2f\n ", Valor_Produto * 0.07);
                break;


        case 2: printf("Sao Paulo\n");
                printf("Valor do produto: %0.2f\n ", Valor_Produto * 0.17);
                break;

        case 3: printf("Rio de Janeiro\n");
                printf("Valor do produto: %0.2f\n ", Valor_Produto * 0.15);
                break;

        case 4: printf("Mato Grosso do Sul\n");
                printf("Valor do produto: %0.2f\n ", Valor_Produto * 0.8);
                break;
    }
    system("pause");
    return 0;

}


