#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
char nome_cidade1[50], nome_cidade2[50],cod_estado1[3], cod_estado2[3];
int populacao1, populacao2, qtd_pontos_turisticos1, qtd_pontos_turisticos2,cod_cidade1,cod_cidade2;
float area1, area2, pib1, pib2;

  //Introdução do programa ao usuário
  printf("\n\nseja bem vindo ao cadastro de cidades do Super Trunfo!\n");  
  
  //Área para entrada de dados da primeira carta
  printf("\n\n\nPor favor, insira as informações da primeira cidade:"); 
  printf("\n\nDigite a Letra correspondente ao Estado da cidade: ");
  scanf("%s",cod_estado1);
  printf("Digite o Numero da cidade (de 1 a 4): ");
  scanf("%d",&cod_cidade1);
  printf("Nome da cidade: ");
  fgets(nome_cidade1, sizeof(nome_cidade1), stdin); // Limpa o buffer antes de ler a string
  printf("Populacao: ");
  scanf("%d",&populacao1);
  printf("Area (em km²): ");
  scanf("%f",&area1);
  printf("PIB (em bilhões): ");
  scanf("%f",&pib1);
  printf("Quantidade de pontos turisticos: ");
  scanf("%d",&qtd_pontos_turisticos1);// Fim da área de entrada de dados da primeira carta

  //Área para entrada de dados da segunda carta
  printf("\n\n\nPor favor, insira as informações da segunda cidade:");
  printf("\n\nDigite a Letra correspondente ao Estado da cidade: ");
  scanf("%s",cod_estado2);
  printf("Digite o Numero da cidade (de 1 a 4): ");
  scanf("%d",&cod_cidade2);
  printf("Nome da cidade: ");
  fgets(nome_cidade2, sizeof(nome_cidade2), stdin); // Limpa o buffer antes de ler a string
  printf("Populacao: ");
  scanf("%d",&populacao2);
  printf("Area (em km²): ");
  scanf("%f",&area2);
  printf("PIB (em bilhões): ");
  scanf("%f",&pib2);
  printf("Quantidade de pontos turisticos: ");
  scanf("%d",&qtd_pontos_turisticos2);// Fim da área de entrada de dados da segunda carta

  //Área para exibição dos dados da primeira carta
  printf("\n\n--->  Primeira Cidade  <---\n\n");
  printf("Estado:%s",cod_estado1);
  printf("\nCódigo da carta: %s%d",cod_estado1,cod_cidade1);
  printf("\nNome: %s",nome_cidade1);
  printf("\nPopulação: %d habitantes",populacao1);      
  printf("\nÁrea: %.2f km²",area1);
  printf("\nPIB: %.2f bilhões",pib1);
  printf("\nQuantidade de pontos turísticos: %d\n",qtd_pontos_turisticos1); //Fim da exibição dos dados da primeira carta

  //Área para exibição dos dados da segunda carta
  printf("\n\n--->  Segunda Cidade  <---\n\n");
  printf("Estado:%s",cod_estado2);
  printf("\nCódigo da carta: %s%d",cod_estado2,cod_cidade2);
  printf("\nNome: %s",nome_cidade2);
  printf("\nPopulação: %d habitantes",populacao2);      
  printf("\nÁrea: %.2f km²",area2);
  printf("\nPIB: %.2f bilhões",pib2);
  printf("\nQuantidade de pontos turísticos: %d\n\n\n\n\n",qtd_pontos_turisticos2);// Fim da exibição dos dados da segunda carta

  return 0; 
} 
