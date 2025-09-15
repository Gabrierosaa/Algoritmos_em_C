#include <stdio.h>

int main(void){
    int nota;
    printf("Entre com sua nota");
    scanf("%d", &nota);
    nota >= 6 ? printf("Voce foi aprovado") : printf("Voce foi reprovado");
    return 0;
}