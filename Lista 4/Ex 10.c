#include <stdio.h>
#include <stdlib.h>

int main(){

    double Nota[15], Soma=0, Media=0;
    int i;
    for(i = 0; i < 15; i++){
        printf("Digite a nota final do %d Aluno", i+1);
        scanf("%lf", &Nota[i]);
        Soma = Soma + Nota[i];
    }
    Media = Soma / 15;
    printf("Valor da media geral: %0.2f", Media);
    system("pause");
    return 0;

}
