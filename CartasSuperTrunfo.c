#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração de variáveis para armazenar os dados
    long populacao;
    float area;
    long pib;
    int pontos_turisticos;

    // Título do programa
    printf("------------------------------------------\n");
    printf("  CADASTRO DE DADOS DA CIDADE DE SALVADOR \n");
    printf("         SUPER TRUNFO CARTAS              \n");
    printf("------------------------------------------\n\n");

    // Coleta da População
    printf("Digite a populacao de Salvador: \n");
    scanf("%ld", &populacao);

    // Coleta da Área
    printf("Digite a area de Salvador em km2: \n");
    scanf("%f", &area);

    // Coleta do PIB
    printf("Digite o PIB de Salvador em milhoes de R$: \n");
    scanf("%ld", &pib);

    // Coleta do número de Pontos Turísticos
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n\n------------------------------------------\n");
    printf("  DADOS CADASTRADOS DE SALVADOR \n");
    printf("------------------------------------------\n");
    printf("Populacao: %ld\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: R$ %ld milhoes\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("------------------------------------------\n");

            
           // Título do programa
    printf("------------------------------------------\n");
    printf("  CADASTRO DE DADOS DA CIDADE DE ILHÉUS   \n");
    printf("         SUPER TRUNFO CARTAS              \n");
    printf("------------------------------------------\n\n");

    // Coleta da População
    printf("Digite a populacao de Ilhéus: \n");
    scanf("%ld", &populacao);

    // Coleta da Área
    printf("Digite a area de Ilhéus em km2: \n");
    scanf("%f", &area);

    // Coleta do PIB
    printf("Digite o PIB de Ilhéuss em milhoes de R$: \n");
    scanf("%ld", &pib);

    // Coleta do número de Pontos Turísticos
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n\n------------------------------------------\n");
    printf("  DADOS CADASTRADOS DE ILHÉUS \n");
    printf("------------------------------------------\n");
    printf("Populacao: %ld\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: R$ %ld milhoes\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("------------------------------------------\n");

    return 0;
}