#include <stdio.h>
#include <stdlib.h>

int main (){

    int Matriz[5][5], i, j, Valor, Posicao_i, Posicao_j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Matriz [%d][%d]: ", i , j);
            scanf("%d", &Matriz[i][j]);
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%d]", Matriz[i][j]);
        }
        printf("\n");
    }
    Volta:
    printf("Digite um nuemro na Matriz: ", Valor);
    scanf("%d", &Valor);

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(Valor == Matriz[i][j]){
                Valor = Matriz[i][j];
                Posicao_i = i;
                Posicao_j = j;
                printf("Posicao [%d][%d]\n", Posicao_i, Posicao_j);
                break;
            }else{
                printf("Valor nao econtrado\n");
                goto Volta;
            }

        }
    }
    system("pause");
    return 0;

}

