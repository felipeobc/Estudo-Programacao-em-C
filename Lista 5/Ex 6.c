#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int Idade;
    char Nome[20], Sexo;

    printf("Nome: ");
    scanf("%s", Nome);
    setbuf(stdin,NULL);
    printf("Qual é o Sexo\n(m)Masculino\n(f)Feminino: ");
    scanf("%c", &Sexo);
    printf("Idade: ");
    scanf("%d", &Idade);

    if((Sexo == 'f') && (Idade >= 25)){
        printf("Nome: %s\n", Nome);
        printf("ACEITO\n");

    }else{
        printf("NAO ACEITO");
    }

    system("pause");
    return 0;
}


