#include <stdio.h>

int main (void) {
    int idade;
    printf("Entre com sua idade: ");
    scanf("%d", &idade);
    idade >= 18 ? printf("Voce e maior de idade") : printf("Voce e menor de idade");
}