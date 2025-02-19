#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int escolhajogador, escolhacomputador;
  srand(time(0));

  printf("Super Trunfo(Vence quem pontuar mais)\n");
  printf("Escolha uma Opção:\n");
  printf("1. São paulo(PIB)\n");
  printf("2. Alagoas(PIB)\n");
  printf("3. Pernambuco(PIB)\n");
  printf("4. Santa Catarina(PIB)\n");
  printf("5. Rio de Janeiro(PIB)\n");
  printf("Escolha:  ");
  scanf("%d", &escolhajogador);

 escolhacomputador = rand() % 4 + 1;

 switch (escolhajogador)
 {
  case 1:
      printf("Jogador: São paulo(PIB) -\n ");
      break;
  case 2:
      printf("Jogador: Alagoas(PIB)-\n ");
      break;
  case 3: 
      printf("Jogador: Pernambuco(PIB) -\n ");
      break;
  case 4: 
      printf("Jogador:Santa Catarina(PIB) -\n ");
      break;
  case 5:
      printf("Jogador: Rio de Janeiro(PIB) -\n ");
      break;
    default:
    printf("Opção inválida\n");
      break;
 }

 switch (escolhacomputador)
 {
  case 1:
      printf("Computador: São paulo(PIB)\n");
      break;
  case 2:
      printf("Jogador: Alagoas(PIB)\n");
      break;
  case 3: 
      printf("Jogador: Pernambuco(PIB) -\n ");
      break;
  case 4: 
      printf("Jogador:Santa Catarina(PIB) -\n ");
      break;
  case 5:
      printf("Jogador: Rio de Janeiro(PIB) -\n ");
      break;
 
 }

      if(escolhacomputador == escolhajogador)
      {
        printf("### Jogo empatou ! ###\n");
      }else if  ((escolhajogador == 1) && (escolhacomputador == 2) ||
                (escolhajogador == 1) && (escolhacomputador == 3) ||
                (escolhajogador == 3) && (escolhacomputador == 2) ||
                (escolhajogador == 1) && (escolhacomputador == 4) ||
                (escolhajogador == 4) && (escolhacomputador == 2) ||
                (escolhajogador == 4) && (escolhacomputador == 3) ||
                (escolhajogador == 5) && (escolhacomputador == 4) ||
                (escolhajogador == 5) && (escolhacomputador == 3) ||
                (escolhajogador == 5) && (escolhacomputador == 2) ||
                (escolhajogador == 1) && (escolhacomputador == 5))
              
      {
        printf("### Parabéns, Você Ganhou!###\n");
      }else{
        printf("### Você Perdeu!###\n");
      }  
  

  printf("Super Trunfo\n");
  printf("Escolha uma Opção:\n");
  printf("1. São paulo(Pontos Turisticos)\n");
  printf("2. Alagoas(Pontos Turisticos)\n");
  printf("3. Pernambuco(Pontos Turisticos)\n");
  printf("4. Santa Catarina(Pontos Turisticos)\n");
  printf("5. Rio de Janeiro(Pontos Turisticos)\n");
  scanf("%d", &escolhajogador);

 escolhacomputador = rand() % 4 + 1;

 switch (escolhajogador)
 {
  case 1:
      printf("Jogador: São paulo(Pontos Turisticos ) -\n ");
      break;
  case 2:
      printf("Jogador: Alagoas(Pontos Turisticos)-\n ");
      break;
  case 3: 
      printf("Jogador: Pernambuco(Pontos Turisticos) -\n ");
      break;
  case 4: 
      printf("Jogador:Santa Catarina(Pontos Turisticos ) -\n ");
      break;
  case 5: 
      printf("Rio de Janeiro(Pontos Turisticos) -\n ");
      break;
    default:
    printf("Opção inválida\n");
      break;
 }

 switch (escolhacomputador)
 {
  case 1:
      printf("Computador: São paulo(Pontos Turisticos )\n");
      break;
  case 2:
      printf("Jogador: Alagoas(Pontos Turisticos)\n");
      break;
  case 3: 
      printf("Jogador: Pernambuco(Pontos Turisticos) -\n ");
      break;
  case 4: 
      printf("Jogador:Santa Catarina(Pontos Turisticos ) -\n ");
      break;
  case 5: 
      printf("Jogador:Rio de Janeiro(Pontos Turisticos ) -\n ");
      break;
  case 6: 
      printf("Jogador: Amazonas(Pontos Turisticos) -\n ");
      break;
 }

      if(escolhacomputador == escolhajogador)
      {
        printf("### Jogo empatou ! ###\n");
      }else if  ((escolhajogador == 5) && (escolhacomputador == 1) ||
                (escolhajogador == 5) && (escolhacomputador == 2) ||
                (escolhajogador == 5) && (escolhacomputador == 3) ||
                (escolhajogador == 5) && (escolhacomputador == 4) ||
                (escolhajogador == 3) && (escolhacomputador == 1) ||
                (escolhajogador == 3) && (escolhacomputador == 2) ||
                (escolhajogador == 3) && (escolhacomputador == 4) ||
                (escolhajogador == 2) && (escolhacomputador == 1) ||
                (escolhajogador == 2) && (escolhacomputador == 4) ||
                (escolhajogador == 1) && (escolhacomputador == 4) )
               
      {
        printf("### Parabéns, Você Ganhou!###\n");
      }else{
        printf("### Você Perdeu!###\n");
      }       

  printf("Super Trunfo\n");
  printf("Escolha uma Opção:\n");
  printf("1. São paulo(Área)\n");
  printf("2. Alagoas(Área)\n");
  printf("3. Pernambuco(Área)\n");
  printf("4. Santa Catarina(Área)\n");
  printf("5. Rio de Janeiro(área)\n");
  printf("Escolha:  ");
  scanf("%d", &escolhajogador);

 escolhacomputador = rand() % 4 + 1;

 switch (escolhajogador)
 {
  case 1:
      printf("Jogador: São paulo(Área) -\n ");
      break;
  case 2:
      printf("Jogador: Alagoas(Área)-\n ");
      break;
  case 3: 
      printf("Jogador: Pernambuco(Área) -\n ");
      break;
       case 4: 
      printf("Jogador:Santa Catarina(Área) -\n ");
      break;
      case 5: 
      printf("Rio de Janeiro(Área) -\n ");
      break;
    default:
    printf("Opção inválida\n");
      break;
 }

 switch (escolhacomputador)
 {
  case 1:
      printf("Computador: São paulo(Área)\n");
      break;
  case 2:
      printf("Jogador: Alagoas(Área)\n");
      break;
  case 3: 
      printf("Jogador: Pernambuco(Área) -\n ");
      break;
  case 4: 
      printf("Jogador:Santa Catarina(Área) -\n ");
      break;
  case 5: 
      printf("Rio de Janeiro(Área) -\n ");
      break;
  
 }

      if(escolhacomputador == escolhajogador)
      {
        printf("### Jogo empatou ! ###\n");
      }else if  ((escolhajogador == 1) && (escolhacomputador == 2) ||
                (escolhajogador == 1) && (escolhacomputador == 3) ||
                (escolhajogador == 1) && (escolhacomputador == 4) ||
                (escolhajogador == 3) && (escolhacomputador == 4) ||
                (escolhajogador == 3) && (escolhacomputador == 2) ||
                (escolhajogador == 4) && (escolhacomputador == 2) ||
                (escolhajogador == 1) && (escolhacomputador == 5 )||
                (escolhajogador == 5) && (escolhacomputador == 2) ||
                (escolhajogador == 3) && (escolhacomputador == 5) ||
                (escolhajogador == 4) && (escolhacomputador == 5 ))
      {
        printf("### Parabéns, Você Ganhou!###\n");
      }else{
        printf("### Você Perdeu!###\n");
      }       
    
      printf("Super Trunfo\n");
      printf("Escolha uma Opção:\n");
      printf("1. São paulo(População)\n");
      printf("2. Alagoas(População)\n");
      printf("3. Pernambuco(População)\n");
      printf("4. Santa Catarina(População)\n");
      printf("5. Rio de Janeiro(População)\n ");
      printf("Escolha:  ");
      scanf("%d", &escolhajogador);
    
     escolhacomputador = rand() % 4 + 1;
    
     switch (escolhajogador)
     {
      case 1:
          printf("Jogador: São paulo(População) -\n ");
          break;
      case 2:
          printf("Jogador: Alagoas(População)-\n ");
          break;
      case 3: 
          printf("Jogador: Pernambuco(População) -\n ");
          break;
      case 4: 
          printf("Jogador:Santa Catarina(População) -\n ");
          break;
      case 5: 
      printf("Rio de Janeiro(População) -\n ");
      break;
        default:
        printf("Opção inválida\n");
          break;
     }
    
     switch (escolhacomputador)
     {
      case 1:
          printf("Computador: São paulo(População)\n");
          break;
      case 2:
          printf("Jogador: Alagoas(População)\n");
          break;
      case 3: 
          printf("Jogador: Pernambuco(População) -\n ");
          break;
      case 4: 
          printf("Jogador:Santa Catarina(População) -\n ");
          break;
       case 5: 
          printf("Rio de Janeiro(População) -\n ");
          break;
     }
    
          if(escolhacomputador == escolhajogador)
          {
            printf("### Jogo empatou ! ###\n");
          }else if  ((escolhajogador == 1) && (escolhacomputador == 2) ||
                    (escolhajogador == 1) && (escolhacomputador == 3) ||
                    (escolhajogador == 1) && (escolhacomputador == 4) ||
                    (escolhajogador == 3) && (escolhacomputador == 4) ||
                    (escolhajogador == 3) && (escolhacomputador == 2) ||
                    (escolhajogador == 4) && (escolhacomputador == 2) ||
                    (escolhajogador == 1) && (escolhacomputador == 5) ||
                    (escolhajogador == 5) && (escolhacomputador == 2) ||
                    (escolhajogador == 5) && (escolhacomputador == 3) ||
                    (escolhajogador == 5) && (escolhacomputador == 4))
          {
            printf("### Parabéns, Você Ganhou!###\n");
          }else{
            printf("### Você Perdeu!###\n");
          }       

  return 0;
}