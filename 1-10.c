#include <stdio.h>
#include <stdlib.h>

float calcularArea(int altura, int baseMenor, int baseMaior) {

    return (float)((baseMenor + baseMaior) * altura) / 2;

}

int checarBaseMenor (int baseMenor) {

    do {
        printf("Digite o valor da base menor:");
        scanf("%d", &baseMenor);

    } while (baseMenor <= 0);
    {
        return baseMenor;
    }
}

int checarBaseMaior (int baseMaior) {

    do {
        printf("Digite o valor da base maior:");
        scanf("%d", &baseMaior);
    } while (baseMaior <= 0);
    {
        return baseMaior;
    }
    
}

int checarAltura(int altura) {

    do {
        printf("Digite o valor da altura:");
        scanf("%d", &altura);
    } while (altura <= 0);
    {
        return altura;
    }
    
}

int main () {

    int baseMenor;
    baseMenor = checarBaseMenor(baseMenor);

    int baseMaior;
    baseMaior = checarBaseMaior(baseMaior);

    int altura;
    altura = checarAltura(altura);

    float area;
    area = calcularArea(altura, baseMenor, baseMaior);

    printf("Valor da área: %f", area);

    return 0;
}