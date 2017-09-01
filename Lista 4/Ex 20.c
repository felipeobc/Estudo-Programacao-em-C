#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

    int i, j;
    double Vetor1[10], Vetor2[10], temp;
    Vetor1[0]  = 0;
    for(i = 0; i < 10; i++){
        Vetor1[i] += 0.50;
    }

    for(i = 0; i < 10; i++){
            temp = Vetor1[i];
        if(Vetor1[i] % 2 == 1){
            Vetor2[i] = Vetor1[i];
        }


    }
    for(i = 0; i < 10; i++){
        printf("%0.2f\n", Vetor1[i]);
        printf("%0.2f\n", Vetor2[j]);
        }


    system("pause");
    return 0;
}
