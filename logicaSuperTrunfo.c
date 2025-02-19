#include <stdio.h>

int main (){
   float populacao , area, PIB, pontosturisticos ;
   char cidade[30];
   char nome[30];
   
float populacao2 , area2, PIB2, pontosturisticos2 ;
   char cidade2[30];
   char nome2[30];

   printf("Entre com a Código da Cidade: \n");
   scanf("%s", &cidade);
   printf("Entre com o nome: \n");
   scanf("%s", &nome);
   printf("Entre com a população: \n");
   scanf("%f", &populacao);
   printf("Entre com a area: \n");
   scanf("%f", &area);
   printf("Entre com o PIB: \n");
   scanf("%f", &PIB);
   printf("Entre com a pontos turisticos: \n");
   scanf("%f", &pontosturisticos);

   printf("Entre com o Código da Cidade 2: \n");
   scanf("%s", &cidade2);
   printf("Entre com o nome2: \n");
   scanf("%s", &nome2);
   printf("Entre com a população2: \n");
   scanf("%f", &populacao2);
   printf("Entre com a area2: \n");
   scanf("%f", &area2);
   printf("Entre com o PIB2: \n");
   scanf("%f", &PIB2);
   printf("Entre com a pontos turisticos2: \n");
   scanf("%f", &pontosturisticos2);

    printf("RESULTADO:\n");

    if(populacao > populacao2 ){
      printf("População 1 é Maior.\n");
   }else{
      printf("População 2 é Maior.\n");
   }
   if (area > area2) {
      printf("Area 1 é Maior.\n");
   }else{
      printf("Area 2 é Maior.\n");
}
if (PIB > PIB2){
    printf("PIB 1 é Maior.\n");
}else{
    printf("PIB 2 é Maior.\n");
}
if(pontosturisticos > pontosturisticos2){
    printf("Pontos Turisticos 1 é Maior.\n");
}else{
    printf("Pontos Turisticos 2 é Maior. ");
}
}