#include <stdio.h>

float calculaPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

float calculaDensidadePopulacional(float area, int populacao) {
    return populacao / area;
}

int main() {
    int qtdPontosTuristicos, populacao;
    float area, pib, pibPerCapita, densidadePopulacional;
    char nomeCidade[100], codigoCidade[5];

    // INÍCIO Cabeçalho de instruções
    printf("Bem vindo ao cadastro de cartas do jogo super trunfo!!\n");
    printf("Para facilitar a interacao, faremos a inclusao dos dados das cartas um por um, sendo elas: \n");
    printf("1 - Codigo Cidade. Para o cadastro desse campo deve ser inserido um valor texto nos seguintes parâmetros, não superando a quantidade de 5 caracteres: [Letra][Numero]. \n");
    printf("Ex.: A1000. \n");
    printf("2 - Nome da Cidade. Para o cadastro desse campo deve ser inserido o nome da cidade com ate 100 caracteres. \n");
    printf("3 - Quantidade de pontos Turisticos. Para o cadastro desse campo deve ser inserido um numero inteiro. \n");
    printf("4 - Area. Para o cadastro desse campo pode ser inserido um numero fracionado, onde a virgula ',' deve ser substituida por ponto '.'.");
    printf("Ex.: Desejo inserir o valor 3214,45. Esse valor deve ser inserido da seguinte forma: '3214.45'. Onde a virgula foi substituido por ponto. \n");
    printf("5 - PIB. Para o cadastro desse campo pode ser inserido um número fracionado, onde a virgula ',' deve ser substituida por ponto '.'.");
    printf("Ex.: Desejo inserir o valor 3214,45. Esse valor deve ser inserido da seguinte forma: '3214.45'. Onde a virgula foi substituido por ponto. \n");
    printf("6 - População. Para o cadastro desse campo deve ser inserido um valor inteiro. \n");
    printf("\nVamos seguir com o cadastro da carta. Após fazer a inclusao, pressione a tela ENTER:\n");
    // FIM Cabeçalho de instruções
    
    // Início inclusão de campos
    printf("1 - Digite o CODIGO da cidade: ");
    scanf("%s", codigoCidade);
    
    printf("2 - Digite o NOME da cidade: ");
    scanf("%s", nomeCidade);

    printf("3 - Digite a QUANTIDADE DE PONTOS TURISTICOS da cidade: ");
    scanf("%d", &qtdPontosTuristicos);

    printf("4 - Digite a AREA da cidade: ");
    scanf("%f", &area);

    printf("5 - Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("6 - Digite a POPULACAO da cidade: ");
    scanf("%d", &populacao);
    // FIM inclusão de campos

    pibPerCapita = calculaPibPerCapita(pib, populacao);
    densidadePopulacional = calculaDensidadePopulacional(area, populacao);

    // Início exibição de Resultados
    printf("Obrigado pela inclusão de dados. Eis os dados inseridos: \n");
    printf("Codigo Cidade: %s\n", codigoCidade);
    printf("Nome Cidade: %s\n", nomeCidade);
    printf("Quantidade de pontos turisticos: %d \n", qtdPontosTuristicos);
    printf("Area: %f km² \n", area);
    printf("PIB: %f bilhões de reais \n", pib);
    printf("PIB per Capita: %f.0 de reais \n", pibPerCapita);
    printf("Densidade Populacional: %f.2 pessoas/km² \n", densidadePopulacional);

    // FIM exibição de Resultados

    return 0;
}
