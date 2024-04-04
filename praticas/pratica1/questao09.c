/*9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.*/

#include <stdio.h>  
#include <math.h>

int main() {
  int idade_anos;
  int idade_meses;
  int idade_dias;

  printf("Entre com sua idade em anos, meses, dias: ");
  int deu_certo = scanf("%i %i %i", &idade_anos, &idade_meses, &idade_dias);
int idade_em_dias = idade_anos * 365 + idade_meses * 30 + idade_dias;  

  
  

 
  printf("O valor em dias eh %i\n", idade_em_dias);



  return 0 ;
  }
