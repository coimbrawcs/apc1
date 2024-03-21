#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;

  printf("Entre com o nome do produto:");
  int deu_certo= scanf("%[^\n]s", nome);

  printf("Entre com a qtde do produto:");
  deu_certo= scanf("%i", &quantidade);

  printf("Entre com o valor do produto:");
  deu_certo= scanf("%f", &valor);

  printf("\x1b[32m----------\n");
  printf("NOTA LEGAL \x1b[0m\n");
  printf("ITEM    QTD VALOR \n");
  printf("%-13s %03i %8.2f\n","Banana nanica",1, 15.00);
  
return 0 ;
}