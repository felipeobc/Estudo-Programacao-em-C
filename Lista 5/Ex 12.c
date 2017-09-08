#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char Palavra[20], Vogais[11] = "aeiouAEIOU", Troca;
    int i, j, tamanho1, tamanho2, Total_Vogal=0;

    printf("Preencha com uma string: ");
    scanf("%s", Palavra);
    setbuf(stdin,NULL);

    tamanho1 = strlen(Palavra);
    tamanho2 = strlen(Vogais);


    for(i = 0; i < tamanho1 ; i++){
        for(j = 0; j < tamanho2; j++){
            if(Palavra[i] == Vogais[j]){
                Total_Vogal++;
            }
        }
    }
    for(i = 0; i < tamanho1 ; i++){
        for(j = 0; j < tamanho2; j++){
            if(Palavra[i] == Vogais[j]){
                printf("Troque por uma Consoante ou Vogal: ");
                scanf("%c", &Troca);
                Palavra[i] = Troca;
                setbuf(stdin,NULL);
            }
        }
    }
    printf("Quantidade de Vogais: %d\n", Total_Vogal);
    printf("Palavra Reencrita: %s\n", Palavra);
    system("pause");
    return 0;


}



