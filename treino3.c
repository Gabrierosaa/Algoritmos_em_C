#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade); // o scanf lê a entrada do usuário e armazena na variável idade, o %d significa que é um inteiro e o & é o operador de endereço que passa o endereço da variável idade para o scanf
    printf("Sua idade e: %d\n", idade); // o %d é um especificador de formato que indica que o valor a ser impresso é um inteiro
    return 0;
}

// o & e um operador de endereco que passa o endereco da variavel idade para o scanf
// o %d e um especificador de formato que indica que o valor a ser impresso e um inteiro
// o \n e um caractere especial que representa uma nova linha