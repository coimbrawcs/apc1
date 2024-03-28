#include <stdio.h>
#include <math.h>
int main(){

  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma de %i e %i eh %i\n", numero1, numero2,soma);

  int subtracao = numero1 - numero2;
  printf("A subtracao de %i e %i eh %i\n",numero1,numero2 ,subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicacao de %i e %i eh %i\n", numero1,numero2, multiplicacao);

  float divisao =1.0f* numero1 / numero2;
  printf("A divisao de %i e %i eh e %f\n",numero1,numero2, divisao);

  int resto= numero1 % numero2;
  printf("Oresto da divisao dos numeros e %i/n", resto);

  // numero1= numero1 + 1
  // incremento
  printf("O incremento do primeiro numero e %i\n", numero1++);
  printf("O incremento do primeiro numero e %i\n",++ numero1);

  // mumero1 = numero1 -1
  // decremento

  printf("O incremento do primeiro numero e %i\n", numero1--);
  printf("O incremento do primeiro numero e %i\n",-- numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro %f\n",raiz_quadrada);

  double potencia = pow(numero1, 3);
  printf("A 3a potencia do primeiro %f\n",potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritmo do primeiro %f\n",logaritmo2);

  const double PI = 3.1416;
  double seno = sin(numero1*(PI/180));
  printf("O seno do primeiro %f\n",seno);

  
  

  
  


  

  return 0 ;
  }

  