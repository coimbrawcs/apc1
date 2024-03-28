/*6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).*/

#include <stdio.h>
#include <math.h>
int main() {

  int a;
  int b;
  int c;
  printf("Entre com o valor de a: ");
   int deu_certo = scanf("%i", &a);

  printf("Entre com o valor de b: ");
   deu_certo = scanf("%i", &b);

  printf("Entre com o valor de c: ");
   deu_certo = scanf("%i", &c);


  float delta = b*b - 4*a*c;
  float raiz_quadrada = sqrt(delta);
  float x1 = (-b + raiz_quadrada) / (2*a);
  float x2 = (-b - raiz_quadrada) / (2*a);
  
  printf("O valor de x1 eh %f\n", x1);
  
  printf("O valor de x2 eh %f\n", x2);
 
  


  return 0 ;
  }