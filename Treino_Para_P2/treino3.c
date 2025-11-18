#include <stdio.h>
int ehPar(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}
void main()
{
    int i;
    int soma = 0;
    for (i = 85; i <= 907; i++)
    {
        if (ehPar(i))
        {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma: %d", soma);
}