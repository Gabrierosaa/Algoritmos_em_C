#include <stdio.h>

int main(void) {
    int numero;
    printf("Digite um numero:");
    scanf("%d", &numero);
    if (numero > 0) { // se o numero for maior que 0
        printf("O numero e positivo\n");
    } else if (numero < 0) { // se o numero for menor que 0
        printf("O numero e negativo\n");
    } else {    // se o numero for igual a 0
        printf("O numero e zero\n");
    }
}