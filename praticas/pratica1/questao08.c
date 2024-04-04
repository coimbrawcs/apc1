/*8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).*/


#include <stdio.h>  
#include <math.h>

int main() {
  int segundos ;
  

  printf("Entre com o valor do segundos: ");
  int deu_certo = scanf("%i", &segundos);


  int horas = segundos / 3600;
    printf("O valor em horas eh %i\n", horas);
  
  int minutos=segundos%3600 /60;
  printf("O valor em minutos eh %i\n", minutos);
  
   segundos = segundos%3600%60;
  printf("O valor em segundos eh %i\n", segundos);
  

  return 0 ;
  }

