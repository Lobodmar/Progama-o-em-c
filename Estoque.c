#include <stdio.h>

int main() {
    // Nomes dos produtos
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    // Estoque inicial dos produtos
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    // Valores unitários
    float valorA = 10.50;
    float valorB = 20.40;

    // Estoque mínimo
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    // Cálculo do valor total em estoque
    double valorTotalA = estoqueA * valorA;
    double valorTotalB = estoqueB * valorB;

    // Verificação se o estoque está acima do mínimo
    int resultadoA = estoqueA >= estoqueMinimoA;
    int resultadoB = estoqueB >= estoqueMinimoB;

    // Exibindo dados dos produtos
    printf("Produto: %s\n", produtoA);
    printf("Estoque: %u unidades\n", estoqueA);
    printf("Valor unitario: R$ %.2f\n", valorA);
    printf("Valor total em estoque: R$ %.2f\n", valorTotalA);
    printf("Estoque acima do minimo? %s\n\n", resultadoA ? "SIM" : "NAO");

    printf("Produto: %s\n", produtoB);
    printf("Estoque: %u unidades\n", estoqueB);
    printf("Valor unitario: R$ %.2f\n", valorB);
    printf("Valor total em estoque: R$ %.2f\n", valorTotalB);
    printf("Estoque acima do minimo? %s\n\n", resultadoB ? "SIM" : "NAO");

    // Comparação entre os valores totais
    int comparacaoValores = valorTotalA > valorTotalB;

    printf("O valor total de %s (R$ %.2f) é maior que o de %s (R$ %.2f)? %s\n",
           produtoA, valorTotalA,
           produtoB, valorTotalB,
           comparacaoValores ? "SIM" : "NAO");

    return 0;
}

