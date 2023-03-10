#include <stdio.h>
#include <stdlib.h>

float calcularPerimetro(float lado)
{
    return lado * 4;
}

float calcularArea(float lado)
{
    return lado * lado;
}

float checarLado(float lado)
{
    do
    {
        printf("\nDigite o valor do lado:");
        scanf("%f", &lado);
    } while (lado <= 0);
    {
        return lado;
    }
}

int main()
{

    float lado;
    lado = checarLado(lado);

    float perimetro;
    perimetro = calcularPerimetro(lado);

    float area;
    area = calcularArea(lado);

    printf("\nPerimetro do quadrado: %.2f", perimetro);
    printf("\nÁrea do quadrado: %.2f", area);
    printf("\n\n\n");

    return 0;
}