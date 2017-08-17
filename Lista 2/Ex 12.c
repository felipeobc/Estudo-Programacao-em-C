#include <stdio.h>
int main() {
int num, aux, soma=0;
printf("Informe um número: ");
scanf("%d", &num);

if (num < 0 ){
 printf("Esse Nuemro é invalido!!");

}if (num > 0) {
aux = num;
while (aux > 0) {
soma += aux % 10;
aux /= 10;
}
printf("Soma dos algarismos de %d = %d\n", num, soma);
}
else
printf("Número inválido\n");
return 0;
}
