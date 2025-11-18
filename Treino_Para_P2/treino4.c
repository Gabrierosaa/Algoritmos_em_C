#include <stdio.h>
void main()
{
    int i;
    int valores[10];
    float soma = 0;
    float media;
    int maior, menor;
    int acima = 0, abaixo = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    media = soma / 10;
    maior = valores[0];
    menor = valores[0];
    for (i = 0; i < 10; i++)
    {
        if (valores[i] > maior)
            maior = valores[i];
        if (valores[i] < menor)
            menor = valores[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (valores[i] > media)
            acima++;
        if (valores[i] < media)
            abaixo++;
    }
    printf("\nMedia: %.2f", media);
    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    printf("\nAcima da media: %d", acima);
    printf("\nAbaixo da media: %d", abaixo);
}