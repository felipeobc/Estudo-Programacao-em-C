#include <stdio.h>
#include <stdlib.h>

int main(){
    int Vetor[5], i, Codigo;

    for(i = 0; i < 5; i++){
        printf("Digite o %d Numero: ", i+1);
        scanf("%d", &Vetor[i]);
    }
    printf("Escolha uma Opcao\n");
    do{
        printf("Opecao 0\nOpacao 1\nOpcao 2\n");
        printf("Escolha: ");
        scanf("%d", &Codigo);

        if(Codigo == 0){
            printf("Fim do Programa!!\n");
            break;
        }
        if((Codigo != 1 ) && (Codigo != 2)){
            printf("Codigo incorreto!!\n");
        }


    }while((Codigo != 1 ) && (Codigo != 2) );
    printf("Vetor: ");
    switch(Codigo){

        case 1: for(i = 0; i <5; i++){
                    printf("%d ", Vetor[i]);
                }
                break;
        case 2: for(i = 4; i >= 0; i--
        ){
                    printf("%d ", Vetor[i]);
                }
                break;
    }
    system("pause");
    return 0;

}
