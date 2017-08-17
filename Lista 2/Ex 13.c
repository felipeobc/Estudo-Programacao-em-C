#include <stdio.h>
#include <stdlib.h>

int main() {
    double Nota1, Nota2, Nota3, Media;

    printf("Digite o Valor das tres Notas: ");
    scanf("%lf %lf %lf", &Nota1, &Nota2, &Nota3);

    Nota1 *= 0.10;
    Nota3 *= 0.20;

    Media = (Nota1 + Nota2 + Nota3) / 6;

    if(Media >= 6.0){

        printf("Aluno aprovado !!\n ");

    }else{

        printf("Aluno reprovado !!\n ");
    }
    system("pouse");
    return 0;

}

