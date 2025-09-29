#include <stdio.h>

int main(void) {
    float raio, area;
    printf("Entre com o valor do raio: ");
    scanf("%f", &raio);
    area = 3.14 * raio * raio;
    printf("A area do circulo é: %.2f\n", area);
    return 0;
}
