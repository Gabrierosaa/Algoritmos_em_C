#include <stdio.h>
float multiplica(float x)
{
    return x * 3;
}
void main()
{
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);
    while (n <= 100)
    {
        printf("%.0f ", n);
        n = multiplica(n);
    }
    printf("%.0f", n);
}