#include <stdio.h>
#include <stdlib.h>

int main (){

    int ponto_x, Ponto_y, R;

    printf("Digite a Posicao do ponto X:");
    scanf("%d", &ponto_x);
    printf("Digite a Posicao do ponto Y:");
    scanf("%d", &Ponto_y);

    R = sqrt(pow(ponto_x,2) + pow(Ponto_y,2));

    printf("Coordenada R: %d", R);

    system("pause");
    return 0;



}

