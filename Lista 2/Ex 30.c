#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int x, y, z;


    printf("1 - Numero: ");
    scanf("%d", &x);
    printf("2 - Numero: ");
    scanf("%d", &y);
    printf("3 - Numero: ");
    scanf("%d", &z);


    if(x < y && x < z)
        (z < y) ? printf("%d %d %d\n", x, z, y)
                : printf("%d %d %d\n", x, y, z);
    else if(y < x && y < z)
        (x < z) ? printf("%d %d %d\n", y, x, z)
                : printf("%d %d %d\n", y, z, x);
    else
        (y < x) ? printf("%d %d %d\n", z, y, x)
                : printf("%d %d %d\n", z, x, y);




    system("pause");
    return 0;

}



