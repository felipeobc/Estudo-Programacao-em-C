#include <stdio.h>
#include <stdlib.h>

int main (){

    int VetorA[10], VetorB[10], VetorC[10], i, aux;

    for(i = 0; i < 10; i++){
        printf("VetorA %d: ", i+1);
        scanf("%d", &VetorA[i]);
    }

    for(i = 0; i < 10; i++){
        printf("VetorB %d: ", i+1);
        scanf("%d", &VetorB[i]);
    }
    for(i = 0; i < 10; i+2){
           aux = VetorA[i];
        if(aux % 2 == 0){
            VetorC[i] = aux;
        }
    }
    aux = 0;
    for(i = 1; i < 10; i+2){
           aux = VetorA[i];
        if(aux % 2 == 1){
            VetorC[i] = aux;
        }
    }
    printf("VetorC: ");
    for(i = 0; i < 10; i++){
           printf("%d ", VetorC[i]);
    }
    system("pause");
    return 0;


}
