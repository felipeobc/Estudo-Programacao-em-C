#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m, d, c, u;

    printf("\n\nInforme o numero\n");
    scanf("%d",&n);

    m=n/1000;
    c=n/100-10*m;
    d=n/10-100*m-10*c;
    u=n/1-1000*m-100*c-10*d;

    printf("\n%d\n%d\n%d\n%d\n",m,c,d,u);
    return 0;
}
