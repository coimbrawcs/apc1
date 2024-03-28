/*7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.*/

#include <stdio.h>  
#include <math.h>

int main() {

  int angulo;
  int distancia;
  
  printf("Entre com o valor do angulo: ");
  int deu_certo = scanf("%i", &angulo);  
  printf("Entre com o valor da distancia: ");
  scanf("%i", &distancia);
  const double PI = 3.1416;
  double altura = distancia * sin(angulo *(PI/180));
  printf("A altura alcançada pelo avião eh %f\n",altura);




return 0 ;
}
