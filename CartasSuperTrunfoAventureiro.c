#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos. 
    int carta;
    char codigo[4];
    int populacao;
    char estado[1];
    float area;
    char cidade[30];
    float PIB;
    int pontos_tur;
    float densidade_pop;
    float PIB_per_capita;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*Desafio Supertrunfo - Aventureiro*\n");
    printf("Digite o número da carta: \n");
    scanf("%d", &carta);
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_tur);    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    densidade_pop = (populacao / area);
    PIB_per_capita = (PIB / populacao);

    printf("Número da carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d Habitantes\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_tur);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita);

    return 0;
}
