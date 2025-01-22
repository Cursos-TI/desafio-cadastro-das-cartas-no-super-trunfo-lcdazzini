#include <stdio.h>

typedef struct {
    char codigo[6];
    char nome[100];
    int qtdPontosTuristicos;
    float area;
    float pib;
    int populacao;
    float pibPerCapita;
    float densidadePopulacional;
} Carta;

float calculaPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

float calculaDensidadePopulacional(float area, int populacao) {
    if (area == 0) {
        return 0;
    }
    return populacao / area;
}

void exibirInstrucoes() {
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
}

// Função para capturar os dados de uma cidade
void capturarDados(Carta* carta) {
    printf("1 - Digite o CODIGO da cidade: ");
    scanf("%s", carta->codigo);
    
    printf("2 - Digite o NOME da cidade: ");
    scanf("%s", carta->nome);

    printf("3 - Digite a QUANTIDADE DE PONTOS TURISTICOS da cidade: ");
    scanf("%d", &carta->qtdPontosTuristicos);

    printf("4 - Digite a AREA da cidade: ");
    scanf("%f", &carta->area);

    printf("5 - Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);

    printf("6 - Digite a POPULACAO da cidade: ");
    scanf("%d", &carta->populacao);
}

void exibirResultados(Carta* carta) {
    carta->pibPerCapita = calculaPibPerCapita(carta->pib, carta->populacao);
    carta->densidadePopulacional = calculaDensidadePopulacional(carta->area, carta->populacao);

    printf("\nObrigado pela inclusão de dados. Eis os dados inseridos: \n");
    printf("Codigo Cidade: %s\n", carta->codigo);
    printf("Nome Cidade: %s\n", carta->nome);
    printf("Quantidade de pontos turisticos: %d \n", carta->qtdPontosTuristicos);
    printf("Area: %.2f km² \n", carta->area);
    printf("PIB: %.2f de reais \n", carta->pib);
    printf("PIB per Capita: %.2f de reais \n", carta->pibPerCapita);
    printf("Densidade Populacional: %f pessoas/km² \n", carta->densidadePopulacional);
}

int main() {
    Carta carta;

    exibirInstrucoes();
    
    capturarDados(&carta);
    
    exibirResultados(&carta);

    return 0;
}
