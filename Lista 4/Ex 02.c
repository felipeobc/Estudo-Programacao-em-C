#include <stdio.h>
#include <stdlib.h>

int main (){

    int Numeros[5], i;

    for(i = 0; i < 5; i++){
        printf("Digite %d Numero: ", i);
        scanf("%d", &Numeros[i]);
    }
    printf("Numeros digitados: ");
    for(i = 0; i < 5; i++){

        printf("%d ", Numeros[i]);

    }
    system("pause");
    return 0;



}
