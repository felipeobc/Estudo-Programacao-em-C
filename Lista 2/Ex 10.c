#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {

    double Altura;
    char Sexo;

    printf("Digite a altura da pessoa: ");
    scanf("%lf", &Altura);

    printf("Fale qual seu sexo?\nH -> Homem\nM-> Mulher\n");
    getchar();
    scanf("%c", &Sexo);

    switch(Sexo){

        case 'h': printf("Seu peso ideal e: %0.2f", (72.7*Altura)-58);
                    break;
        case 'm': printf("Seu peso ideal e: %0.2f", (62.1*Altura)-44.7);
                    break;

    }
    system("pause");
    return 0;

}
