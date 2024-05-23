#include <stdio.h>
#include <stdlib.h>

int main() {

  int opcao = 0;
  while (opcao != 4) {
    int deu_certo = system("clear");

    printf("MEU JOGO\n");
    printf("1 -   Iniciar\n");
    printf("2 -  Ver Ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao => ");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n')
      ; // limpar buffer do teclado
    if (!deu_certo) {
      opcao = 0;
    }

    switch (opcao) {
    case 1: {
      char nome[31];
      printf("Qual o seu nome ? ");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n')
        ; // limpar buffer do teclado
      printf("Ola %s!\n", nome);
      printf("Pressione ENTER p/ iniciar...");
      getchar();
      break;
    }
    case 2: {
      deu_certo = system("clear");
      printf("RANKING - TOP 5\n");
     printf("1o lugar: Jose - 1000 pontos\n");
      printf("2o lugar: Maria - 800 pontos\n");
      printf("3o lugar: Bia - 700 pontos\n");
      printf("4o lugar: Pedro - 500 pontos\n");
      printf("5o lugar: Joao - 200 pontos\n");
      printf("Pressione ENTER p/ voltar...");
      getchar();
            
    
      break;
       }
    case 3:
      break;
    case 4:
      printf("Ate logo!\n");
      break;
    default:
      printf("Opcao invalida! Pressione ENTER p/ prosseguir ...");
      getchar();
    }
  }
  return 0;
}