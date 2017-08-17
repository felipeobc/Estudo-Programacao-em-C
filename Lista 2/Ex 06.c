#include <stdlib.h>
#include <stdlib.h>

int main (){

    int Numero1, Numero2;

    printf("Digite dois nuemros: ");
    scanf("%d %d", &Numero1, &Numero2);

    if(Numero1 > Numero2 ){

        printf("O numero %d e Maior\n", Numero1);
        printf("E sua diferenca e de %d para o menor\n ", Numero1 - Numero2);
    }else{
        printf("O numero %d e Maior\n", Numero2);
        printf("E sua diferenca e de %d para o menor\n ", Numero2 - Numero1);
    }
    system("pause");
    return 0;


}
