#include <stdio.h>
#include <stdlib.h>

int main (){

    double Nota1, Nota2;

    printf("Digite as duas notas do aluno: ");
    scanf("%lf %lf", &Nota1, &Nota2);

    if (((Nota1 < 0) || (Nota1 >10)) &&(( Nota2 < 0) || (Nota2 > 10))){
        printf("Nota incorreta !!!\n ");

    } else{

        printf("As notas estao corretas!!\n ");
        printf("Madia das notas: %0.2f \n", (Nota1 + Nota2)/2);
    }
    system("pause");
    return 0;


}
