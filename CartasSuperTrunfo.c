#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

#include <stdio.h>

int main() {

    char estado1 = "Ceara";
        char codigo1[5] = {};
        char nomeCidade1[50] = "Fortaleza";
        int populacao1 = 1200.00;
        float area1 = 12229.0;
        float pib1 = 30000.0;
        int pontosTuristicos1 = 6;

         printf("CADASTRO DA PRIMEIRA CARTA \n");
        printf("Estado (Ceara): \n");
        scanf(" %c", &estado1);
        
        printf("Código da Carta (ex: A01): \n");
        scanf("%4s", codigo1);
        
        printf("Nome da Cidade: \n");
        scanf(" %49[^\n]", nomeCidade1);
        
        printf("População: \n");
        scanf("%d", &populacao1);
        
        printf("Área (em km²): \n");
        scanf("%f", &area1);
        
        printf("PIB (em bilhões de reais): \n");
        scanf("%f", &pib1);
        
        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &pontosTuristicos1);


        printf("\DADOS DA PRIMEIRA CARTA \n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


        return 0;
}