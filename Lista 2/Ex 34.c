#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double Nota;
    int Faltas;

    printf("DIgite a nota final do aluno: ");
    scanf("%lf", &Nota);
    printf("O numero de faltas: ");
    scanf("%lf", &Faltas);

    if(Nota <= 3.9){
        if(Faltas <=20 ){
            printf("Categoria E \n");
        }else{
             printf("Categoria E \n");
        }

    }else if(Nota <= 4.9){
            if(Faltas <=20 ){
            printf("Categoria D \n");
        }else{
             printf("Categoria E \n");
        }

    }else if(Nota <= 7.4){
            if(Faltas <=20 ){
            printf("Categoria C \n");
        }else{
             printf("Categoria D \n");
        }

    }else if(Nota <= 8.9){
            if(Faltas <=20 ){
            printf("Categoria B \n");
        }else{
             printf("Categoria C \n");
        }

    }else if(Nota = 10){
            if(Faltas <=20 ){
            printf("Categoria A \n");
        }else{
             printf("Categoria B \n");
        }

    }


    system("pause");
    return 0;

}


