#include <stdio.h>

int main() {
  int numero;
  int numero_valido = 0;

  while (numero_valido == 0) {
  

  printf("Entre com um numero entre 1 e 10: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero > 0 && numero < 11) {
    printf("Segue o jogo!\n");
  } else {
    printf("Numero invalido! Tente novamente!\n");
    getchar();
  }
 do {


    printf("Entre com um numero entre 1 e 10: ");
    int deu_certo = scanf("%i", &numero);

    if (deu_certo && numero > 0 && numero < 11) {
      printf("Segue o jogo!\n");
    } else {
      printf("Numero invalido! Tente novamente!\n");
      getchar();
    } int numero+ valido = 1
    } while (numero_valido == 0) {

  return 0;
}