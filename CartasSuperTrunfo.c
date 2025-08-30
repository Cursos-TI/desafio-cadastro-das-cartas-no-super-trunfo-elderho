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
    float densidadepopc1;    // Variável nova do nível 2 para densidade populacional
    float pibpercapitac1;  // Variável nova do nível 2 para PIB per capita
    float superpoderc1; // Nova variável para Super Poder da Carta 1 (c1)

//variáveis para Carta 2 (c2)
    char estadoc2;
    char codigoc2[5];  //como sugerido, aumentado o tamanho do array de 3 para 5
    char cidadec2[50];
    int populacaoc2;
    float areac2;
    float pibc2;
    int pontosturc2;
    float densidadepopc2;    // Variável nova do nível 2 para densidade populacional
    float pibpercapitac2; // Variável nova do nível 2 para PIB per capita
    float superpoderc2; // Nova variável para Super Poder da Carta 2 (c2)

// Variáveis para armazenar resultados das comparações (terceira etapa - Nivel Mestre)
    int resultadopopulacao;
    int resultadoarea;
    int resultadopib;
    int resultadopontostur;
    int resultadodensidadepop;
    int resultadopibpercapita;
    int resultadosuperpoder;


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

// Cálculos do nível 2 para carta 1 (c1)
    densidadepopc1 = populacaoc1 / areac1; // Cálculo da Densidade Populacional da Carta 1 (c1)
    pibpercapitac1 = (pibc1 * 1000000000) / populacaoc1; // Cálculo do PIB Per Capita da Carta 1 (c1)

// Cálculo do Super Poder da Carta 1: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
    superpoderc1 = populacaoc1 + areac1 + pibc1 + pontosturc1 + 
                   pibpercapitac1 + (1.0 / densidadepopc1);

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

// Cálculos do nível 2 para carta 2 (c2)
    densidadepopc2 = populacaoc2 / areac2; // Cálculo da Densidade Populacional da Carta 2 (c2)
    pibpercapitac2 = (pibc2 * 1000000000) / populacaoc2; // Cálculo do PIB Per Capita da Carta 2 (c2)

// Cálculo do Super Poder da Carta 2: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
    superpoderc2 = populacaoc2 + areac2 + pibc2 + pontosturc2 + 
                   pibpercapitac2 + (1.0 / densidadepopc2);

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopc1); // dados dos cálculos do Nível 2
    printf("PIB per Capita: %.2f reais\n", pibpercapitac1); // dados dos cálculos do Nível 2
    printf("Super Poder: %.2f\n", superpoderc1); // dados do Super Poder (Nível Mestre)

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopc2); // dados dos cálculos do Nível 2
    printf("PIB per Capita: %.2f reais\n", pibpercapitac2); // dados dos cálculos do Nível 2
    printf("Super Poder: %.2f\n", superpoderc2); // dados do Super Poder (Nível Mestre)

    printf("#####################################\n");

// Nivel Mestre
// Comparação das cartas
    printf("\nComparação de Cartas:\n");

    printf("#####################################\n");
    
// População: maior valor vence
    resultadopopulacao = (populacaoc1 > populacaoc2);
    printf("População: Carta %d venceu (%d)\n", 
           resultadopopulacao ? 1 : 2, resultadopopulacao);

    printf("#####################################\n");
    
// Área: maior valor vence
    resultadoarea = (areac1 > areac2);
    printf("Área: Carta %d venceu (%d)\n", 
           resultadoarea ? 1 : 2, resultadoarea);

    printf("#####################################\n");
    
// PIB: maior valor vence
    resultadopib = (pibc1 > pibc2);
    printf("PIB: Carta %d venceu (%d)\n", 
           resultadopib ? 1 : 2, resultadopib);

    printf("#####################################\n");
    
// Pontos Turísticos: maior valor vence
    resultadopontostur = (pontosturc1 > pontosturc2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           resultadopontostur ? 1 : 2, resultadopontostur);

    printf("#####################################\n");
    
// Densidade Populacional: menor valor vence (regra especial)
    resultadodensidadepop = (densidadepopc1 < densidadepopc2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           resultadodensidadepop ? 1 : 2, resultadodensidadepop);

    printf("#####################################\n");
    
// PIB per Capita: maior valor vence
    resultadopibpercapita = (pibpercapitac1 > pibpercapitac2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           resultadopibpercapita ? 1 : 2, resultadopibpercapita);

    printf("#####################################\n");
    
// Super Poder: maior valor vence
    resultadosuperpoder = (superpoderc1 > superpoderc2);
    printf("Super Poder: Carta %d venceu (%d)\n", 
           resultadosuperpoder ? 1 : 2, resultadosuperpoder);

    
    return 0;
}
