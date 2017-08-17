#include <stdio.h>
#include <stdlib.h>

int main() {
    double Nota_Laboratorio, Nota_Semestral, Nota_Final, Media;

    printf("Digite o Valor das tres Notas: ");
    scanf("%lf %lf %lf", &Nota_Laboratorio, &Nota_Semestral, &Nota_Final);

    Nota_Laboratorio *= 2;
    Nota_Semestral *= 3;
    Nota_Final *= 5;

    Media = (Nota_Laboratorio + Nota_Semestral + Nota_Final) / 6 ;

    if(Media <= 2.9){

        printf("Aluno reprovado !!\n ");

    }if((Media == 3.0) || (Media <= 4.9)){

        printf("Aluno recuperacao  !!\n ");

    }if(Media >= 5.0){

        printf("Aluno aprovado!!\n");
    }
    system("pause");
    return 0;

}
