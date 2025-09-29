#include <stdio.h>

int main (void) {
    float temp;
    printf("Entre com a temperatura: ");
    scanf("%f", &temp);
    if(temp < 15) {
        printf("Esta frio");
    }
}