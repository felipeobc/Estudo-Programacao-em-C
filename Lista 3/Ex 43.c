#include <stdio.h>
#include <stdlib.h>

int main (){

    int Idade, i, Media, Soma=0;

    for(i = 1; i > 0; i++){

        printf("Digite um Numero: ");
        scanf("%d", &Idade);

        if(Idade > 0){
            Soma += Idade;
            printf("%d\n ", Idade);
        }else{
            Media = Soma /i;
            printf("Media das Idade: %d \n", Media);
            break;
        }
    }
    system("pause");
    return 0;

}

