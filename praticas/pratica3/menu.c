#include <stdio.h>

int main(){
  int opcao;
  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Fazer recarga\n");
  printf("3- Listar recados\n");
  printf("4- Ligacoes feitas\n");
  printf("0 - Sair\n");
  printf("Escolha uma opcao => ");
  int deu_certo = scanf("%i", &opcao);

  switch(opcao){
    case 1: printf("Seu saldo eh R$10.00\n"); break;
    case 2: {
      float valor;
      printf("Entre com o valor da recarga: ");
      deu_certo = scanf("%f", &valor);
      break;
    }
    case 3: 
      printf("Voce nao tem recados !\n");
      break;
    case 4:
    printf("61 9999-9999\n");
    printf("61 8888-8888\n");
    case 0:
      printf("Saindo...\n");
    default:printf("Opcao invalida!\n");
      
  }
  return 0;
} 
