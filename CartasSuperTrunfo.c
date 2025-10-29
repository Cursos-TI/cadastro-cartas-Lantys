#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Área para definição das variáveis para armazenar as propriedades das cidades


int main() {

	setlocale(LC_ALL, "Portuguese");
	system("cls");

// Variaveis da carta 1
    char carta1_estado;				// Recebe as letras de A a H
    char carta1_nome_cidade;		// Recebe o numero entre 1 a 4
    char carta1_cod[3];				// Recebe a combianação de estado + cidade ex. A03, B04, H01
    int carta1_popu;				// Recebe a população da cidade
    float carta1_area;				// Recebe a area da cidade 
    float carta1_pib;				// Recebe o PIB da cidade
    int carta1_pt_turis;			// Recebe a quantidade de pontos turisticos da cidade

// Variaveis da carta 2
    
	char carta2_estado;				// Recebe as letras de A a H
    char carta2_nome_cidade;		// Recebe o numero entre 1 a 4
    char carta2_cod[3];				// Recebe a combianação de estado + cidade ex. A03, B04, H01
    int carta2_popu;				// Recebe a população da cidade
    float carta2_area;				// Recebe a area da cidade 
    float carta2_pib;				// Recebe o PIB da cidade
    int carta2_pt_turis;			// Recebe a quantidade de pontos turisticos da cidade

// Definindo valores da carta 1

	printf(" =============================================================");
	printf("\n \t\t Super trunfo Países \n");
	printf(" =============================================================");
	printf("\n \t\t Preenchendo a carta 1 \n");
	printf(" -------------------------------------------------------------");
	printf("\n - Digite o nome do Estado (Escolha entre A-H): ");
	scanf("%c", &carta1_estado); // Recebe as letras de A a H
	fflush(stdin);

	// Inserindo o nome da cidade
	printf("\n - Digite o nome da cidade (Escolha entre 1-4): ");
	scanf("%c", &carta1_nome_cidade);
	fflush(stdin);
	
	// Gerando o valor do código da carta
	carta1_cod[0] = carta1_estado;
	carta1_cod[1] = '0';
	carta1_cod[2] = carta1_nome_cidade;
	
	// Inserindo o o valor da população
	printf("\n - Digite o tamanho da população: ");  
	scanf("%d", &carta1_popu);
	fflush(stdin);
	
	// Inserindo o o valor da ârea da cidade
	printf("\n - Digite o tamanho da área da cidade: ");
	scanf("%f", &carta1_area);
    fflush(stdin);
    
    // Inserindo o o valor do PIB da cidade
	printf("\n - Digite o valor do PIB da cidade: ");
	scanf("%f", &carta1_pib);
	fflush(stdin);
	
	    
    // Inserindo o quantidade de pontos turisticos
	printf("\n - Digite a quantidade de pontos turísticos: ");
	scanf("%d", &carta1_pt_turis);
	fflush(stdin);
	
	
// Definindo valores da carta 2
	system("cls");
	printf(" =============================================================");
	printf("\n \t\t Super trunfo Países \n");
	printf(" =============================================================");
	printf("\n \t\t Preenchendo a carta 2 \n");
	printf(" -------------------------------------------------------------");
	printf("\n - Digite o nome do Estado (Escolha entre A-H): ");
	scanf("%c", &carta2_estado); // Recebe as letras de A a H
	fflush(stdin);

	// Inserindo o nome da cidade
	printf("\n - Digite o nome da cidade (Escolha entre 1-4): ");
	scanf("%c", &carta2_nome_cidade);
	fflush(stdin);
	
	// Gerando o valor do código da carta
	carta2_cod[0] = carta2_estado;
	carta2_cod[1] = '0';
	carta2_cod[2] = carta2_nome_cidade;
	
	// Inserindo o o valor da população
	printf("\n - Digite o tamanho da população: ");  
	scanf("%d", &carta2_popu);
	fflush(stdin);
	
	// Inserindo o o valor da ârea da cidade
	printf("\n - Digite o tamanho da área da cidade: ");
	scanf("%f", &carta2_area);
    fflush(stdin);
    
    // Inserindo o o valor do PIB da cidade
	printf("\n - Digite o valor do PIB da cidade: ");
	scanf("%f", &carta2_pib);
	fflush(stdin);
	
    // Inserindo o quantidade de pontos turisticos
	printf("\n - Digite a quantidade de pontos turísticos: ");
	scanf("%d", &carta2_pt_turis);
	fflush(stdin);

	
// Visualizando os resultados

	// Carta 1
	system("cls");
	printf ("\n--------------------------------------------------");
	printf ("\n|\t(Estado: %c ) \t (Carta: %s)\t\t |",carta1_estado,carta1_cod);
	printf ("\n+------------------------------------------------+");
	printf ("\n| ( Cidade ) \t\t\t (%c)\t\t |",carta1_nome_cidade);
	printf ("\n| ( Área em m2) \t\t (%.2f) \t |",carta1_area);
	printf ("\n| ( População em milhões ) \t (%d) \t\t |",carta1_popu);
	printf ("\n| ( Renda Per Capita - PIB )\t (%.2f) \t |",carta1_pib);
	printf ("\n| ( Quantidade de pontos turísticos ) (%d) \t |",carta1_pt_turis);
	printf ("\n+------------------------------------------------+");

	// Carta 2
	printf ("\n--------------------------------------------------");
	printf ("\n|\t(Estado: %c ) \t (Carta: %s)\t\t |",carta2_estado,carta2_cod);
	printf ("\n+------------------------------------------------+");
	printf ("\n| ( Cidade ) \t\t\t (%c)\t\t |",carta2_nome_cidade);
	printf ("\n| ( Área em m2) \t\t (%.2f) \t |",carta2_area);
	printf ("\n| ( População em milhões ) \t (%d) \t\t |",carta2_popu);
	printf ("\n| ( Renda Per Capita - PIB )\t (%.2f) \t |",carta2_pib);
	printf ("\n| ( Quantidade de pontos turísticos ) (%d) \t |",carta2_pt_turis);
	printf ("\n+------------------------------------------------+");
	
	return 0;
}

