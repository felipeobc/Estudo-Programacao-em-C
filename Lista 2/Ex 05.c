#include <stdio.h>
#include <stdlib.h>

int main (){
    int Numero;

    printf("Digite um numero: ");
    scanf("%d", &Numero);

    if(Numero % 2 == 0){

        printf(" %d esse numero e par\n", Numero);

    }else{

        printf(" %d esse numero e impar\n", Numero);

    }
    system("pause");
    return 0;


}
