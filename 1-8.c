#include <stdio.h>
#include <stdlib.h>

float calcularPerimetro(float lado) {
    return lado * 4;
}

float calcularArea(float lado) {
    return lado*lado;
}


int main() {

    float lado;

    printf("\nDigite o valor do lado:");
    scanf("%f",&lado);

    float perimetro = calcularPerimetro(lado);
    float area = calcularArea(lado);

    printf("\nPerimetro do quadrado: %.2f \n", perimetro);
    printf("\nÁrea do quadrado: %.2f", area);


    printf("\n\n\n\n\n");

    return 0;

}