#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste ELDER

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//variáveis para Carta 1 (c1)
    char estadoc1;
    char codigoc1[5]; //como sugerido, aumentado o tamanho do array de 3 para 5
    char cidadec1[50];
    int populacaoc1;
    float areac1;
    float pibc1;
    int pontosturc1;

//variáveis para Carta 2 (c2)
    char estadoc2;
    char codigoc2[5]; //como sugerido, aumentado o tamanho do array de 3 para 5
    char cidadec2[50];
    int populacaoc2;
    float areac2;
    float pibc2;
    int pontosturc2;

//solicitando os dados da Carta 1 (c1):
    printf("Cadastre os dados da Carta 1:\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estadoc1);

    printf("Digite o código para a Carta (ex: A01,B03): \n");
    scanf(" %4s", codigoc1); //como sugerido, limitado a leitura a 4 caracteres + \0

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidadec1); //como sugerido, foi usado o especificador de conjunto de varredura para evitar o buffer overflow

    printf("Digite a população: \n");
    scanf(" %d", &populacaoc1);
    
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areac1);
    
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf(" %f", &pibc1);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosturc1);

    printf("#####################################\n");
//solicitando os dados da Carta 2 (c2):
    printf("Cadastre os dados da Carta 2:\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estadoc2);

    printf("Digite o código para a Carta (ex: A01,B03): \n");
    scanf(" %4s", codigoc2); //como sugerido, limitado a leitura a 4 caracteres + \0

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidadec2); //como sugerido, foi usado o especificador de conjunto de varredura para evitar o buffer overflow

    printf("Digite a população: \n");
    scanf(" %d", &populacaoc2);
    
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areac2);
    
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf(" %f", &pibc2);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("  %d", &pontosturc2);

    printf("#####################################\n");
//exibindo os dados da Carta 1 (c1)
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoc1);
    printf("Código: %s\n", codigoc1);
    printf("Nome da Cidade: %s\n", cidadec1);
    printf("População: %d\n", populacaoc1);
    printf("Área: %.2f km²\n", areac1); //Usei %.2f para formatação com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pibc1); //Usei %.2f para formatação com duas casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontosturc1);

    printf("#####################################\n");
//exibindo os dados da Carta 2 (c2)
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoc2);
    printf("Código: %s\n", codigoc2);
    printf("Nome da Cidade: %s\n", cidadec2);
    printf("População: %d\n", populacaoc2);
    printf("Área: %.2f km²\n", areac2); //Usei %.2f para formatação com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pibc2); //Usei %.2f para formatação com duas casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontosturc2);

    return 0;
}
