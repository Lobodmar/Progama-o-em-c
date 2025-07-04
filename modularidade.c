#include <stdio.h>

// Função genérica para entrada de dados
void entradaDados() {
    printf("Função entradaDados executada.\n");
}

// Função genérica para cálculo da média
float calcularMedia() {
    return 7.5; // valor fictício só como exemplo
}

// Função genérica para exibir dados
void exibirMedia(float media) {
    printf("A média é: %.2f\n", media);
}

int main() {
    entradaDados();
    float media = calcularMedia();
    exibirMedia(media);

    return 0;
}
