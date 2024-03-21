/*1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.*/

  #include <stdio.h>

  int main() {
  float A1;
  float A2;

   
   
  printf("Entre com o a nota de A1:");
  int deu_certo= scanf("%f", &A1);

  printf("Entre com o nota de A2:");
   deu_certo= scanf("%f", &A2);

     float valor_da_media_final = (0.4*A1+0.6*A2);
   printf("NOTA Final %f\x1b[0m\n", valor_da_media_final);

  return 0 ;
  }