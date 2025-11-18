#include <stdio.h>
void main()
{
    int i, valor;
    int negativos = 0;
    int somaPositivos = 0;
    for (i = 1; i <= 50; i++)
    {
        printf("Digite o %dº valor inteiro: ", i);
        scanf("%d", &valor);
        if (valor >= 0)
        {
            somaPositivos += valor;
        }
        else
        {
            negativos++;
        }
    }
    printf("\nSoma dos positivos: %d", somaPositivos);
    printf("\nQuantidade de negativos: %d", negativos);
}