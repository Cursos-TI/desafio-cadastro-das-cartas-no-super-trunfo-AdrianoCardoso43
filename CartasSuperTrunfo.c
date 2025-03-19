#include <stdio.h>

int main(){
    int populacao, pontoturistico;
    float area, pib;

    printf("digite a populacao: \n");
    scanf("%d", &populacao);

    printf("digite a area: \n");
    scanf("%f", &area);

    printf("digite o pib: \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &pontoturistico);

    printf("Total da populacao: %d - Total de pontos turisticos: %d\n", populacao, pontoturistico);
    printf("Total da area: %f - Total do Pib %f", area,pib);


    return 0;
}
