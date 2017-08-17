#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int Dia, Mes, Ano;

    printf("Digite o Dia: ");
    scanf("%d", &Dia);
    printf("Digite o Mes: ");
    scanf("%d", &Mes);
    printf("Digite o Ano: ");
    scanf("%d", &Ano);



    if((Dia >= 1) && (Dia <=31)){

        Dia = Dia;

    }else if((Mes == 2) && (Dia >=30)){

        printf("O mes de Fevereiro so vai ate 29 ano bissexto e 28 nao bissexto !!\n");

    }
    if((Mes >= 1) && (Mes <=12)){

        Mes = Mes;

    }else{
        printf("Mes Invalido!!\n");
    }
    if(Ano % 4 == 0){
        printf("Ano Bissexto\n");
    }else if (Ano % 400 == 0){
        printf("Ano Bissexto\n");
    }else if (Ano % 100 == 1){
        printf("Ano Bissexto\n");
    }else{
        printf("Esse ano nao e bissexto\n");
    }

    printf("Voce digitou %d/%d/%d", Dia, Mes, Ano);


    system("pause");
    return 0;

}


