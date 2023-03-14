#include <stdio.h>
#include <stdlib.h>

float somarNumeros(float n1, float n2) {
    return n1 + n2;
}

float subtrairNumeros(float n1, float n2) {
    return n1 - n2;
}

float multiplicarNumeros(float n1, float n2) {
    return n1 * n2;
}

float dividirNumeros(float n1, float n2) {
    return n1 / n2;
}

float receberValor1(float n1) {

    printf("\nDigite o primeiro valor:");
    scanf("%f", &n1);
    return n1;
}

float receberValor2(float n2) {
    printf("\nDigite o segundo valor:");
    scanf("%f", &n2);
    return n2;
}

int escolherOpcao(int opcao) {

    printf("\nEscolha uma das opções:");
    printf("\n1 - Somar");
    printf("\n2 - Subtrair");
    printf("\n3 - Multiplicar");
    printf("\n4 - Dividir");
    printf("\n0 - Sair\n");
    scanf("%d", &opcao);
    fflush(stdin);
    return opcao;
}


int main() {

    int opcao;

    do
    {

    float n1;
    n1 = receberValor1(n1);

    float n2;
    n2 = receberValor2(n2);

    opcao = escolherOpcao(opcao);
    
    float resposta;
    
        switch (opcao)
    {
    case 1:
        resposta = somarNumeros(n1, n2);
        printf("A soma equivale a: %.2f\n", resposta);
        break;

    case 2:
        resposta = subtrairNumeros(n1, n2);
        printf("A subtração equivale a: %.2f\n", resposta);
        break;
    
    case 3:
        resposta = multiplicarNumeros(n1, n2);
        printf("A multiplicação equivale a: %.2f\n", resposta);
        break;
    
    case 4:
        resposta = dividirNumeros(n1, n2);
        printf("A divisão equivale a: %.2f\n", resposta);
        break;
    
    default:
    printf("Valor inválido\n");
        break;
    }

    } while (opcao != 0);

    printf("\nObrigado por utilizar!\n");
    

}