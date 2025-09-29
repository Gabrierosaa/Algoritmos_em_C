#include <stdio.h>

int main (void) {
    float nota;
    printf("entre com usa nota: ");
    scanf("%f", &nota);
    nota >= 6 ? printf("Aprovado") : printf("Reprovado");
}