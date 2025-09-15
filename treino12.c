#include <stdio.h>

int main(void) {
    int salario;

    printf("Entre com o salario: ");
    scanf("%d", &salario); 

    if (salario >= 2000) {
        printf("Voce recebe R$ %d. Entao voce paga impostos.\n", salario);
    } else {
        printf("Voce recebe R$ %d. Por ser pobre demais nao paga nada.\n", salario);
    }
    return 0;
}
