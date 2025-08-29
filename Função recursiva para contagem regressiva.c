#include <stdio.h>

// Função recursiva para contagem regressiva
void recursivo(int numero) {
    if (numero > 0) {
        printf("%d\n", numero);
        recursivo(numero - 1); // chamada recursiva
    } else {
        printf("Fim da contagem!\n");
    }
}

int main() {
    int quantidade = 10;

    printf("=== Contagem regressiva ===\n");
    recursivo(quantidade);

    return 0;
}
