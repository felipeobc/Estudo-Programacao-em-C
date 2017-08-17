#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numero;

    printf("Digite um numero: ");
    scanf("%d", &Numero);

    if(Numero % 3 == 0){

        printf("Esse numero e divisivel por 3 !!\n ");

    }else{

        printf("Esse numero nao e divisivel por 3 !!\n ");

    }

    if(Numero % 5 == 0){

        printf("Esse numero e divisivel por 5 !!\n ");

    }else{

        printf("Esse numero nao e divisivel por 5 !!\n ");

    }
    system("pause");
    return 0;


}
