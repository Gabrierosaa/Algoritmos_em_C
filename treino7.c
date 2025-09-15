#include <stdio.h>
#include <math.h>  
int main(void) {
    float raio1, raio2, area1, area2, areaTotal;
    printf("Digite o valor do raio 1: ");
    scanf("%f", &raio1);
    printf("Digite o valor do raio 2: ");
    scanf("%f", &raio2);
    area1 = M_PI * raio1 * raio1;
    area2 = M_PI * raio2 * raio2;
    areaTotal = area1 + area2;
    printf("A area total dos dois circulos e: %.2f\n", areaTotal);
    return 0;
}
