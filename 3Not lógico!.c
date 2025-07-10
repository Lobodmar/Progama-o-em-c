// Terceiro bloco de código
#include <stdio.h>  // Biblioteca padrão

int main() {
  int a = -5;  // Variável 'a' recebe valor -5 (negativo)

  // Verifica se 'a' **não** é maior que 0
  // O operador '!' inverte o resultado lógico da condição
  if (!(a > 0)) {
    // Como 'a' é -5, a condição será verdadeira, e essa mensagem será exibida
    printf("a não é um número positivo\n");
  }

  return 0;  // Fim do programa
}
