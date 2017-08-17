#include <stdio.h>
#include <stdlib.h>

int main() {

    int Idade, Tempo_Servico;

    printf("Digite sua idade: ");
    scanf("%d", &Idade);
    printf("Digite o tempo de servico: ");
    scanf("%d", &Tempo_Servico);

    if(Idade >= 65){
        printf("Pode se aposentar por idade\n");
    }else if(Tempo_Servico >=30){
        printf("Pode se aposentar por tempo de trabalho\n");
    }else if((Idade >= 60) &&(Tempo_Servico >= 25)){
        printf("Ainda nao pode se aposentar\n");
    }else{
        printf("Ainda nao pode se aposentar\n");
    }
    system("pause");
    return 0;

}
