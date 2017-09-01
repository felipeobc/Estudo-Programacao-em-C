#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetorA[10], vetorB[10], vetorC[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite os %d valor do vertorA: ", i+1);
        scanf("%d", &vetorA[i]);
    }
    for(i = 0; i < 10; i++){
        printf("Digite os %d valor do vertorB: ", i+1);
        scanf("%d", &vetorB[i]);
    }
    printf("VetorC: ");
    for(i = 0; i < 10; i++){
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%d ", vetorC[i]);
    }
    system("pause");
    return 0;
}
