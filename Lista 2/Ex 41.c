#include <stdlib.h>
#include <stdio.h>

int main()  {

    double Peso, Altura, IMC;

    printf("Digite o seu Peso: ");
    scanf("%lf", &Peso);
    printf("Digite a sua Altura: ");
    scanf("%lf", &Altura);

    IMC = Peso/ pow(Altura,2);

    if (IMC < 18.5){

        printf("Abaixo do peso!! \n");

    }else if(IMC <= 24.9){

        printf("Saudavel\n,");

    }else if(IMC <= 29.9){

        printf("Peso em excesso \n");

    }else if(IMC <= 34.9){

        printf("Obesidade Grau I\n");

    }else if(IMC <= 39.9){

        printf("Obesidade Grau II\n");

    }else if(IMC >= 40){

        printf("Obesidade Grau III\n");

    }
    system("pause");
    return 0;
}

