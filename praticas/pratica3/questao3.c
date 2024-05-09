/*3. Faça um programa em C que imprima um qualitativo associado a uma nota lida
 * conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 =
 * Ótimo, e imprima Nota inválida nos demais casos.
 */
#include <stdio.h>

int main() {

  int nota;
  printf("Entre com a nota de 1 a 5:");
  int deu_certo = scanf("%i", &nota);
  switch (nota) {
  case 1:printf("Anota == 1 Ruim");break;
  case 2:printf("A nota == 2 Insuficiente");break;
  case 3:printf("A nota == 3 Suficiente");break;
  case 4:printf("A nota == 4 bom");break;
  case 5:printf("A nota == 5 otimo");break;
  default:    printf("Nota invalida .Tente novamente\n");
  }

  return 0;
}