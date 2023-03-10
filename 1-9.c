#include <stdio.h>
#include <stdlib.h>

float calcularArea(int base, int altura)
{

    return (float)(base * altura) / 2; // casting
}

int checarBase(int base)
{

    do
    {
        printf("\nDigite o valor da base:");
        scanf("%d", &base);
    } while (base <= 0);
    {
        return base;
    }
}

int checarAltura(int altura)
{

    do
    {
        printf("\nDigite o valor da altura:");
        scanf("%d", &altura);
    } while (altura <= 0);
    {
        return altura;
    }
}

int main()
{

    int base;
    base = checarBase(base);

    int altura;
    altura = checarAltura(altura);

    float area = calcularArea(base, altura);

    printf("\nÁrea do triângulo: %.2f", area);
    printf("\n\n\n");

    return 0;
}
