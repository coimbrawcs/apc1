#include <stdio.h>

int main() {
  float nota1;
  float nota2;

  printf("Entre com a 1A nota: ");
  int deu_certo = scanf("%f", &nota1);

  int nota_eh_valida = nota1 >= 0.0f && nota1 <= 10.0f;
  if (nota_eh_valida) {
    printf("Entre com a 2A nota: ");
    deu_certo = scanf("%f", &nota2);

    int nota2_eh_valida = nota2 >= 0.0f && nota2 <= 10.0f;
    if (nota2_eh_valida) {
      float media = 0.4f * nota1 + 0.6f * nota2;
      printf("A media eh %f\n", media);

      if (media  >= 9.0f && media <= 10.0f) {
        printf(" A mençao eh SS\n");
      } else if (media >= 7.0f && media <= 8.9f){
        printf(" A mençao eh MS\n");
        } else if (media >= 5.0f && media <= 6.9f){
          printf(" A mençao eh MM\n");
        } else if (media >= 3.0f && media <= 4.9f){
          printf(" A mençao eh MI\n");
        } else if (media >= 0.1f && media <= 2.9f){
          printf(" A mençao eh II\n");
        } else if (media == 0.0f){
          printf(" A mençao eh sR\n");
        }
        
      } else {
      printf("Nota invalida! Entre com um valor entre 0.0 e 10.0\n");
    }
   } else { 
    printf("Nota invalida! Entre com um valor entre 0.0 e 10.0\n");
  }
  return 0;
}