#include <stdio.h>

int main() {
    int codigoCidade, qtdPontosTuristicos;
    float area, pib;
    char nomeCidade[100];

    // INÍCIO Cabeçalho de instruções
    printf("Bem vindo ao cadastro de cartas do jogo super trunfo!!\n");
    printf("Para facilitar a interacao, faremos a inclusao dos dados das cartas um por um, sendo elas: \n");
    printf("1 - Codigo Cidade. Para o cadastro desse campo deve ser inserido um valor inteiro. \n");
    printf("2 - Nome da Cidade. Para o cadastro desse campo deve ser inserido o nome da cidade com ate 100 caracteres. \n");
    printf("3 - Quantidade de pontos Turisticos. Para o cadastro desse campo deve ser inserido um numero inteiro. \n");
    printf("4 - Area. Para o cadastro desse campo pode ser inserido um numero fracionado, onde a virgula ',' deve ser substituida por ponto '.'.");
    printf("Ex.: Desejo inserir o valor 3214,45. Esse valor deve ser inserido da seguinte forma: '3214.45'. Onde a virgula foi substituido por ponto. \n");
    printf("5 - PIB \n");
    printf("\nVamos seguir com o cadastro da carta. Após fazer a inclusao, pressione a tela ENTER:\n");
    // FIM Cabeçalho de instruções
    
    // Início inclusão de campos
    printf("1 - Digite o CODIGO da cidade: ");
    scanf("%d", &codigoCidade);
    
    printf("\n2 - Digite o NOME da cidade: ");
    scanf("%s", &nomeCidade);

    printf("\n3 - Digite a QUANTIDADE DE PONTOS TURISTICOS da cidade: ");
    scanf("%d", &qtdPontosTuristicos);

    printf("\n4 - Digite a AREA da cidade: ");
    scanf("%f", &area);

    printf("\n5 - Digite o PIB da cidade: ");
    scanf("%f", &pib);
    // FIM inclusão de campos

    // Início exibição de Resultados
    printf("Obrigado pela inclusão de dados. Eis os dados inseridos: \n");
    printf("Codigo Cidade: %d - Cidade: %s", codigoCidade,nomeCidade);
    printf("\nQuantidade de pontos turisticos: %d - Area: %f", qtdPontosTuristicos, area);
    printf("\nPIB: %f", pib);

    // FIM exibição de Resultados

    return 0;
}
