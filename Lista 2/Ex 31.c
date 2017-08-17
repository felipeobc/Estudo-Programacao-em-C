#include <stdio.h>
#include <stdlib.h>

int main() {

    double Peso, Altura;

    printf("Digite a sua Altura: ");
    scanf("%lf", &Altura);

    printf("Digite seu Peso: ");
    scanf("%lf", &Peso);

    if(Altura <= 1.20){
        if(Peso <= 60){
            printf("Categoria A \n");
        }else if (Peso <=90){
            printf("Categoria D\n");
        }else{
            printf("Categoria G\n");
        }

    }else if(Altura <= 1.70){
        if(Peso <= 60){
            printf("Categoria B \n");
        }else if (Peso <=90){
            printf("Categoria E\n");
        }else{
            printf("Categoria H\n");
        }

    }else if(Altura > 1.70){
        if(Peso <= 60){
            printf("Categoria C \n");
        }else if (Peso <=90){
            printf("Categoria F\n");
        }else{
            printf("Categoria I\n");
        }

    }
    system("pause");
    return 0;

}

