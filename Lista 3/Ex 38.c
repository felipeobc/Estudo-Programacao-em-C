#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;

    printf("Teorema de pitagoras a^2 + b^2 = c\n");
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    c = sqrt(pow(a,2)+pow(b,2));

    printf("Valor de c: %d", c);

    system("pause");
    return 0;

}
