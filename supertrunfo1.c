#include <stdio.h>
int main(){

printf("SUPER TRUNFO");

//abertura do jogo

//espaços entre as informações utilizando printf junto com \n 


printf("\n");
printf("\n");

printf("Vamos cadastrar sua carta!");

//cadastrando a carta 

printf("\n");
printf("\n");

//utilização de variaveis int, char, float para cadastro da carta do jogador


char pais [10];
printf("Pais: ");
scanf("%s", &pais);

char cidade [20];
printf("Cidade: ");
scanf("%s", &cidade);

int populacao;
printf("população: ");
scanf("%d", &populacao);


float area;
printf("Area em Km²:");
scanf("%f", &area);


int turistico;
printf("Pontos turisticos:");
scanf("%d", &turistico);

float pib;
printf("PIB percapita: R$");
scanf("%f", &pib);


printf("\n");
printf("\n");

//imprimir informações sobre a carta para o jogador bras

printf("Pais:%s\n", pais);
printf("Cidade:%s\n", cidade);
printf("populção:%d\n", populacao);
printf("Area em Km²:%f\n", area);
printf("Pontos turisticos:%d\n", turistico);
printf("PIB percapita: R$%f", pib);

printf("\n");
printf("\n");

}
