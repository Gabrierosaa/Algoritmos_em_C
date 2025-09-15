#include <stdio.h>

int main (void) {
    int temperatura;
    printf("Entre com a temperatura: ");
    scanf("%d", &temperatura);
    if(temperatura <= 15){
        printf("Temperatura esta frio em ""%d", temperatura);
    }
}