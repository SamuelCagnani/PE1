#include <stdio.h>                  
#include <stdlib.h>

float calcularArea(int base, int altura) {

    return (float)(base * altura) / 2; // casting
}

int main() {

    int base;
    int altura;

    do {
        printf("\nDigite o valor da base:");
        scanf("%d", &base);

        printf("\nDigite o valor da altura:");
        scanf("%d", &altura);

    } while ((base <= 0) || (altura <= 0)); 
    {
           float area = calcularArea(base, altura);

           printf("\nÁrea do triângulo: %.2f", area);
           printf("\n\n\n");

           return 0; 
    }
    
}

