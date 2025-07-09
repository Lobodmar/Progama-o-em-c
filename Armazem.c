#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo;

    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade:\n");
    scanf("%f", &umidade);

    printf("Entre com o estoque atual:\n");
    scanf("%u", &estoque);

    printf("Entre com o estoque mínimo:\n");
    scanf("%u", &estoqueMinimo);

    if (temperatura > 30) {
        printf("Temperatura está alta\n");
    } else {
        printf("Temperatura está dentro dos parâmetros\n");
    }

    if (umidade > 50) {
        printf("Umidade elevada\n");
    } else {
        printf("Umidade dentro dos parâmetros\n");
    }

    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo\n");
    } else {
        printf("Estoque normal\n");
    }

    return 0;
}
