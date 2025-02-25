// jogo do super trunfo , nivel basico

#include <stdio.h>
int main() {

    // variáveis que são usadas
    char estado_um, estado_dois, codigo_um[5], codigo_dois[5], cidades_um[50], cidades_dois[50];
    int turisticos_um, turisticos_dois, populacao_um, populacao_dois;
    float area_um, area_dois, pib_um, pib_dois;

    printf("Digite uma letra representando seu estado (A ou B): \n");
    scanf(" %c", &estado_um);  // O espaço antes de %c ajuda a evitar que quebras de linha sejam lidas

    printf("Digite o código da carta (01 a 02): \n");
    scanf("%4s", codigo_um);  // Corrigido para ler o código da carta corretamente

    printf("Nome da cidade: \n");
    scanf(" %49[^\n]", cidades_um);  // O espaço antes de %49[^\n] para garantir que o nome da cidade seja lido corretamente

    printf("Me fale seus pontos turísticos: \n");
    scanf("%d", &turisticos_um);  // Corrigido para ser int, já que são pontos turísticos inteiros

    printf("Me fale sua área: \n");
    scanf("%f", &area_um);

    printf("Me informe o PIB da sua região: \n");
    scanf("%f", &pib_um);

    printf("Me informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao_um);  // Corrigido para ser int, já que a população é um número inteiro

    printf("\nEstado: %c\n", estado_um);
    printf("Código: %s\n", codigo_um);
    printf("Nome da cidade: %s\n", cidades_um);
    printf("População: %d\n", populacao_um);
    printf("Área: %.2f \n", area_um);
    printf("PIB: %.2f Bilhões de reais\n", pib_um);
    printf("Número de pontos turísticos: %d\n", turisticos_um);

    return 0;
}
