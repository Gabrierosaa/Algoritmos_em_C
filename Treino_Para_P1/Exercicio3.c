#include <stdio.h>

int main(void) {
    int i;
    printf("Entre com seu numero: ");
    scanf("%d", &i);
    i % 2 == 0 ? printf("O numero %d e par\n", i) : printf("O numero %d e impar\n", i);
    return 0;
}