#include <stdio.h>
#include <stdlib.h>

int main (){

    int Vetor[8], i, x, y, Soma;

    for(i = 0; i < 8; i++){
        printf("Digite %d Numero: ", i);
        scanf("%d", &Vetor[i]);
    }
    printf("Digite uma posicao: ");
    scanf("%d", &x);
    printf("Digite uma posicao: ");
    scanf("%d", &y);

    Soma = Vetor[x] + Vetor[y];

    printf("A soma das posicoes %d e %d: %d", x,y, Soma);

    system("pause");
    return 0;


}
