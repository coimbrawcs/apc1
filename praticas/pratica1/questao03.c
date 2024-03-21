/*3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.*/

#include <stdio.h>
int main(){
  
  const float PI = 3.1416f;
   float raio;
  
  printf("Entre com o valor de r");
  int deu_certo= scanf("%f", &raio);
  
  float valor_do_perimetro= 2*PI*raio;

  printf("O valor do perimetro e %f\n",valor_do_perimetro);

    return 0 ;
    }
  