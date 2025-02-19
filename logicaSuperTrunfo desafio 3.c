#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     
      int numeroJogador, numeroComputador, resultado;
      char tipoComparacao;

     
      srand(time(0));
      numeroComputador = rand() % 1000000 + 1; 

      
      printf("Bem-vindo ao Super Trunfo!\n");
      printf("Você deve escolher a opção em seguida colocar os pontos de atributo do primeiro estado.\n");
      printf("(Opção 1) São Paulo x Rio de Janeiro (PIB)\n");
      printf("(Opção 2) Rio de Janeiro x São Paulo (PIB)\n");
      printf("(Opção 3) Rio de Janeiro x São Paulo(Área)\n");
      printf("(Opção 4) São paulo x Rio de Janeiro(Área)\n");

      printf("Escolha a Opção: ");
      scanf("%c", &tipoComparacao);

      printf("Digite os Pontos de seu Atributo : ");
      scanf("%d", &numeroJogador);

     
      printf("O número do computador é: %d\n", numeroComputador); 

      switch (tipoComparacao)
      {
        case 'PIB':
        case '1':
            printf("O Maior PIB Vence!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0; 
        break;
        case 'pib':
        case '2':
            printf("A Maior População Vence!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0; 
        break;
        case 'Area':
        case '3':
            printf("A Maior Área Vence!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0; 
        break;
        case 'Área':
        case '4':
            printf("A Maior Área Vence!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0; 
       default:
          
           break;
        
      }
       printf("Os Pontos da Segunda Cidade São: %d\nOs Pontos da Primeira Cidade São: %d\n", numeroComputador, numeroJogador);

      if (resultado == 1)
      {
        printf("Parabéns, Você Venceu!\n");
      }else{
        printf("Infelizmente, Você Perdeu! ou Empatou....\n");
      }
return 0;
  }

   

    
    