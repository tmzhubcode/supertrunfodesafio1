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

//codigo para o segundo jogador

printf("Agora vamos cadastrar o segundo jogador!");

printf("\n");
printf("\n");

char paiss [55];
printf("Pais: ");
scanf("%s", &paiss);

char cidadee [44];
printf("Cidade: ");
scanf("%s", &cidadee);

int populacaoo;
printf("população: ");
scanf("%d", &populacaoo);


float areaa;
printf("Area em Km²:");
scanf("%f", &areaa);


int turisticoo;
printf("Pontos turisticos:");
scanf("%d", &turisticoo);

float pibb;
printf("PIB percapita: R$");
scanf("%f", &pibb);


printf("\n");
printf("\n");

//imprimir informações sobre a carta para o jogador bras

printf("Pais:%s\n", paiss);
printf("Cidade:%s\n", cidadee);
printf("populção:%d\n", populacaoo);
printf("Area em Km²:%f\n", areaa);
printf("Pontos turisticos:%d\n", turisticoo);
printf("PIB percapita: R$%f", pibb);

printf("\n");
printf("\n");

//comparação para declarar um vencedor


if (populacao > populacaoo)
{
    printf("jogador 1 venceu esta rodada!");
}else{
    printf("Jogador 2 venceu esta rodada!");
}


printf("\n");
printf("\n");


if (area > areaa)
{
    printf("jogador 1 venceu esta rodada!");
}else{
    printf("Jogador 2 venceu esta rodada!");
}


printf("\n");
printf("\n");



if (turistico > turistico)
{
    printf("jogador 1 venceu esta rodada!");
}else{
    printf("Jogador 2 venceu esta rodada!");
}


printf("\n");
printf("\n");



if (pib < pibb)
{
    printf("jogador 1 venceu esta rodada!");
}else{
    printf("Jogador 2 venceu esta rodada!");
}


printf("\n");

//declarar vencedor a partir da qauntidade de rodadas que ele ganhou

printf("Vamos ver quem é o vencedor da rodada?");
printf("\n");
printf("\n");

int j1;
printf("jogador 1 digite o numero de rodadas que voce ganhou!");
scanf("%d", &j1);

printf("\n");

int j2;
printf("jogador 2 digite o numero de rodadas que voce ganhou!");
scanf("%d", &j2);

printf("\n");
printf("\n");

printf("Jogador 1: %d\n", j1);
printf("Jogador 2: %d", j2);



printf("\n");
printf("\n");
printf("\n");



//fim do jogo


}
