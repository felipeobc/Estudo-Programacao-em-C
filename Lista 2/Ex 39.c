#include <stdio.h>
#include <stdlib.h>

int main() {

    double Salario, Reajuste;
    int Ano_Contribuicao;

    printf("Digite o salario do funcionario R$: ");
    scanf("%lf", &Salario);
    printf("Digite o tempo de servico: ");
    scanf("%d", &Ano_Contribuicao);

    if(Ano_Contribuicao < 1 ){
        if(Salario < 500){
            Reajuste = (Salario*25)/100 + Salario;

        }else if(Salario <= 1000){
            Reajuste = (Salario*20)/100 + Salario;
        }else if(Salario <= 1500){
            Reajuste = (Salario*15)/100 + Salario;
        }else if(Salario <= 2000){
            Reajuste = (Salario*10)/100 + Salario;
        }else{
            Reajuste = Salario;
        }

    }else if(Ano_Contribuicao <= 3 ){
        if(Salario < 500){
            Reajuste = (Salario*25)/100 + Salario + 100;
        }else if(Salario <= 1000){
            Reajuste = (Salario*20)/100 + Salario + 100;
        }else if(Salario <= 1500){
            Reajuste = (Salario*15)/100 + Salario + 100;
        }else if(Salario <= 2000){
            Reajuste = (Salario*10)/100 + Salario + 100;
        }else{
            Reajuste = Salario + 100;
        }

    }else if(Ano_Contribuicao <= 6 ){
        if(Salario < 500){
            Reajuste = (Salario*25)/100 + Salario + 200;
        }else if(Salario <= 1000){
            Reajuste = (Salario*20)/100 + Salario + 200;
        }else if(Salario <= 1500){
            Reajuste = (Salario*15)/100 + Salario + 200;
        }else if(Salario <= 2000){
            Reajuste = (Salario*10)/100 + Salario + 200;
        }else{
            Reajuste = Salario + 200;
        }

    }else if(Ano_Contribuicao <= 10 ){
        if(Salario < 500){
            Reajuste = (Salario*25)/100 + Salario + 300;
        }else if(Salario <= 1000){
            Reajuste = (Salario*20)/100 + Salario + 300;
        }else if(Salario <= 1500){
            Reajuste = (Salario*15)/100 + Salario + 300;
        }else if(Salario <= 2000){
            Reajuste = (Salario*10)/100 + Salario + 300;
        }else{
            Reajuste = Salario + 300;
        }
    }else if(Ano_Contribuicao > 10 ){
        if(Salario < 500){
            Reajuste = (Salario*25)/100 + Salario + 500;
        }else if(Salario <= 1000){
            Reajuste = (Salario*20)/100 + Salario + 500;
        }else if(Salario <= 1500){
            Reajuste = (Salario*15)/100 + Salario + 500;
        }else if(Salario <= 2000){
            Reajuste = (Salario*10)/100 + Salario + 500;
        }else{
            Reajuste = Salario + 500;
        }
    }
    printf("Salario Reajustado R$: %0.2f\n", Reajuste);
    system("pause");
    return 0;
}
