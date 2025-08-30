#include <stdio.h>

#define TOTAL_ALUNOS 3

typedef struct {
    char nome[20];
    int pt;
    int mat;
} Aluno;

int main() {
    int index;

    Aluno alunos[TOTAL_ALUNOS] = {
        {"Aluno 0", 30, 90},
        {"Aluno 1", 60, 60},
        {"Aluno 2", 90, 30}
    };

    printf("Digite o numero do aluno que deseja ver as notas...\n\n");
    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        printf("Para o %s, digite %d\n", alunos[i].nome, i);
    }

    printf("\nDigite: ");
    scanf("%d", &index);

    if (index >= 0 && index < TOTAL_ALUNOS) {
        printf("\nAs notas de %s sao:\n", alunos[index].nome);
        printf("Português: %d\n", alunos[index].pt);
        printf("Matemática: %d\n", alunos[index].mat);
    } else {
        printf("\nNúmero inválido! Escolha de 0 a %d.\n", TOTAL_ALUNOS - 1);
    }

    return 0;
}
