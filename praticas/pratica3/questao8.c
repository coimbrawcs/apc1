/*8. Faça um programa em C que calcule o fatorial de um número inteiro.
n! = nx(n-1)x(n-2)x...x1
 */
 #include <stdio.h>

int main() {
  int numero;
  printf("Entre com um numero >= 0: ");
  long int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero >= 0) {
    int fatorial = 1;
    printf("%i! = ", numero);

    for(int i = numero; i >= 1; i--) {
      printf("%i", i);
    }

    printf ("1 = %li\n", fatorial);
  } else {
    printf("Numero invalido! Tente novamente!\n");
  }
  

  return 0;
}


