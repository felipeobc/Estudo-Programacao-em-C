#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero, i;

    for(i = 1; i > 0; i++){

        printf("Digite um Numero: ");
        scanf("%d", &Numero);

        if(Numero > 0){
            printf("%d ", Numero);
        }else{
            printf("Numero Negativo!!!\n");
            break;
        }
    }
    system("pause");
    return 0;

}

