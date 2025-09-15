#include <stdio.h> 

int main(void) {
    int numero;
    printf("Digite um numero:");
    scanf("%d", &numero);
    if (numero % 2 == 0) { // se o numero for par
        printf("O numero e par\n");
    } else { // se o numero for impar
        printf("O numero e impar\n");
    }
}