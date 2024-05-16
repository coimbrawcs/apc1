/* Faça um programa em C que liste todos os múltiplos de n, entre 1 e 100.
 */
#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um numero inteiro > 0 e < 101:");
  int deu_certo = scanf("%i", &numero);
  int numero_eh_valido = numero > 0 && numero < 101;

  if (deu_certo && numero_eh_valido) {
    for (int i = 1; i <= 100; i++) {
      if (i % numero == 0) {
        printf("%i,", i);
      }
    }
  } else {
    printf("Numero invalido . Tente de novo!\n");
  }

  return 0;
}