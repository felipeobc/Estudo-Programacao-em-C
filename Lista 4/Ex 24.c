#include <stdio.h>
#include <stdlib.h>

int main() {

    int Aluno[10], Altura[10], i, alt, alu;

    for(i = 0; i < 5; i++){
        printf("Aluno %d: ", i+1);
        scanf("%d", &Aluno[i]);
        printf("Altura: ");
        scanf("%d", &Altura[i]);
    }
    alu = Aluno[0];
    alt = Altura [0];

    for(i = 1; i < 10; i++){
        if(alu < Aluno[i]){
            alu  = Aluno[i];
        }

    }
    for(i = 1; i < 10; i++){
        if(alt < Altura[i]){
            alu  = Altura[i];
        }

    }
    printf("Aluno mais alto: %d, Altura: %d\n", alu, alt);

    system("pause");
    return 0;
}

