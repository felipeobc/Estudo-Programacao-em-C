#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int Codigo_Produto, Quantidade;
    double Valor_Final;

    printf("Escolha seu lanche!\n");
    printf("100 -> Cachorro Quente R$: 1.20\n101 -> Bauru Simples R$: 1.30\n102 -> Bauru com Ovo R$: 1.50\n103 -> Hamburguer R$: 1.20\n104 -> Cheeseburger R$: 1.70\n105 -> Suco R$: 2.20\n106 -> Refrigerante R$: 1.00\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &Codigo_Produto);


    switch(Codigo_Produto){

        case 100:   printf("Cachorro Quente\n");
                    printf("informe a quantidade: ");
                    scanf("%d", &Quantidade);
                    printf("Quantidade: %d \nValor a pagar: %0.2f\n ", Quantidade, Valor_Final = Quantidade * 1.20);
                    break;

        case 101:   printf("Bauru Simples\n");
                    printf("informe a quantidade: ");
                    scanf("%d", &Quantidade);
                    printf("Quantidade: %d \nValor a pagar: %0.2f\n ", Quantidade, Valor_Final = Quantidade * 1.30);
                    break;

        case 102:   printf("Bauru com Ovo\n");
                    printf("informe a quantidade: ");
                    scanf("%d", &Quantidade);
                    printf("Quantidade: %d \nValor a pagar: %0.2f\n ", Quantidade, Valor_Final = Quantidade * 1.50);
                    break;

        case 103:   printf("Hamburguer\n");
                    printf("informe a quantidade: ");
                    scanf("%d", &Quantidade);
                    printf("Quantidade: %d \nValor a pagar: %0.2f\n ", Quantidade, Valor_Final = Quantidade * 1.20);
                    break;

        case 104:   printf("Cheeseburguer\n");
                    printf("informe a quantidade: ");
                    scanf("%d", &Quantidade);
                    printf("Quantidade: %d \nValor a pagar: %0.2f\n ", Quantidade, Valor_Final = Quantidade * 1.70);
                    break;

        case 105:   printf("Suco\n");
                    printf("informe a quantidade: ");
                    scanf("%d", &Quantidade);
                    printf("Quantidade: %d \nValor a pagar: %0.2f\n ", Quantidade, Valor_Final = Quantidade * 2.20);
                    break;

        case 106:   printf("Refrigerante\n");
                    printf("informe a quantidade: ");
                    scanf("%d", &Quantidade);
                    printf("Quantidade: %d \nValor a pagar: %0.2f\n ", Quantidade, Valor_Final = Quantidade * 1.00);
                    break;
    }
    system("pause");
    return 0;

}




