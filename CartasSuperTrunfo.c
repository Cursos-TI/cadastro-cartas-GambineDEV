#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para declaração das variáveis para armazenar as propriedades das cidades
// As variáveis são duplicads, uma para cada cidade
char nome_cidade1[50], nome_cidade2[50],cod_estado1[3], cod_estado2[3];
int populacao1, populacao2, qtd_pontos_turisticos1, qtd_pontos_turisticos2,cod_cidade1,cod_cidade2;
float area1, area2, pib1, pib2;

  //Introdução do programa ao usuário
  printf("\n\nSeja bem vindo ao cadastro de cidades do Super Trunfo!");  
  
  //Área destinada para entrada de dados da primeira carta
  printf("\n\nPor favor, insira as informações da primeira cidade:"); 
  printf("\n\nDigite a Letra correspondente ao Estado da cidade: "); // Entrada do código do estado
  scanf("%s",cod_estado1); // Armazenamento do código do estado na variável
  printf("Digite o Numero da cidade (de 1 a 4): "); // Entrada do código da cidade
  scanf("%d",&cod_cidade1); // Armazenamento do código da cidade na variável
  printf("Nome da cidade: "); // Entrada do nome da cidade
  getchar(); // Limpa o buffer do teclado
  fgets(nome_cidade1, sizeof(nome_cidade1), stdin); //Lê uma string do teclado e armazena na variável
  printf("Populacao: "); // Entrada da população
  scanf("%d",&populacao1); // Armazenamento da população na variável
  printf("Area (em km²): "); // Entrada da área
  scanf("%f",&area1); // Armazenamento da área na variável
  printf("PIB (em bilhões): "); // Entrada do PIB
  scanf("%f",&pib1); // Armazenamento do PIB na variável
  printf("Quantidade de pontos turisticos: "); // Entrada da quantidade de pontos turísticos
  scanf("%d",&qtd_pontos_turisticos1); // Armazenamento da quantidade de pontos turísticos na variável
  // Fim da área de entrada de dados da primeira carta

  //Área para entrada de dados da segunda carta
  printf("\n\n\nPor favor, insira as informações da segunda cidade:");
  printf("\n\nDigite a Letra correspondente ao Estado da cidade: "); // Entrada do código do estado
  scanf("%s",cod_estado2); // Armazenamento do código do estado na variável
  printf("Digite o Numero da cidade (de 1 a 4): "); // Entrada do código da cidade
  scanf("%d",&cod_cidade2); // Armazenamento do código da cidade na variável
  printf("Nome da cidade: "); // Entrada do nome da Cidade
  getchar(); // Limpa o buffer do teclado 
  fgets(nome_cidade2, sizeof(nome_cidade2), stdin); //Lê uma string do teclado e armazena na variável
  printf("Populacao: "); // Entrada da população
  scanf("%d",&populacao2); // Armazenamento da população na variável
  printf("Area (em km²): "); // Entrada da área
  scanf("%f",&area2); // Armazenamento da área na variável
  printf("PIB (em bilhões): "); // Entrada do PIB
  scanf("%f",&pib2); // Armazenamento do PIB na variável
  printf("Quantidade de pontos turisticos: "); // Entrada da quantidade de pontos turísticos
  scanf("%d",&qtd_pontos_turisticos2); // Armazenamento da quantidade de pontos turísticos na variável 
  // Fim da área de entrada de dados da segunda carta

  //Área para exibição dos dados da primeira carta
  printf("\n\n--->  Primeira Cidade  <---"); //Cabeçalho de exibição da primeira carta
  printf("\nCódigo da carta: %s%d",cod_estado1,cod_cidade1); // Exibição do código da carta
  printf("\nNome: %s",nome_cidade1); // Exibição do nome da cidade
  printf("População: %d habitantes",populacao1); // Exibição da população    
  printf("\nÁrea: %.2f km²",area1); // Exibição da área
  printf("\nPIB: %.2f bilhões",pib1); // Exibição do PIB
  printf("\nQuantidade de pontos turísticos: %d\n",qtd_pontos_turisticos1); // Exibição da quantidade de pontos turísticos 
  //Fim da exibição dos dados da primeira carta

  //Área para exibição dos dados da segunda carta
  printf("\n\n--->  Segunda Cidade  <---"); //Cabeçalho de exibição da segunda carta
  printf("\nCódigo da carta: %s%d",cod_estado2,cod_cidade2);  // Exibição do código da carta
  printf("\nNome: %s",nome_cidade2); // Exibição do nome da cidade
  printf("População: %d habitantes",populacao2); // Exibição da população
  printf("\nÁrea: %.2f km²",area2); // Exibição da área   
  printf("\nPIB: %.2f bilhões",pib2); // Exibição do PIB
  printf("\nQuantidade de pontos turísticos: %d\n",qtd_pontos_turisticos2); // Exibição da quantidade de pontos turísticos
  printf("\n\n");
  // Fim da exibição dos dados da segunda carta

  return 0; 
} 
