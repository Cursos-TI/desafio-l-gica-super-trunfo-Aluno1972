#include <stdio.h>
int main(){
    // declaração das variáveis
        char carta1, carta2; 
        char estado1[28], estado2[28];
        char códigodaCarta1[4], códigodaCarta2[4];
        char nomeCidade1[20];
        char nomeCidade2[20];
        int  Populacao1, Populacao2;
        float área1, área2;
        float pib1, pib2;
        int pontosTurísticos1, pontosTurísticos2;
                   
    //entrada dos valores da carta 1
        printf("Digite a letra que corresponde ao estado: \n");
        scanf("%s", &estado1);
        printf("Digite o código da primeira carta com sua letra incial seguido de um número de 01 a 04: \n");
        scanf("%s", &códigodaCarta1);
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nomeCidade1);
        printf("Digite a pupulação: \n");
        scanf("%d", &Populacao1);
        printf("Digite a área (em km²): \n");
        scanf("%f", &área1);
        printf("Digite a PIB: \n");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontosTurísticos1);
    
    //entrada dos valores da carta 2
        printf("Digite a letra que corresponde ao estado: \n");
        scanf("%s", &estado2);
        printf("Digite o código da segunda carta com sua letra incial seguido de um número de 01 a 04: \n");
        scanf("%s", &códigodaCarta2);
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nomeCidade2);
        printf("Digite a pupulação: \n");
        scanf("%d", &Populacao2);
        printf("Digite a área (em km²): \n");
        scanf("%f", &área2);
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontosTurísticos2);

    //exibe os valores  da carta 1
        printf("\nCarta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %4s \n", códigodaCarta1);
        printf("Nome da Cidade: %s \n", nomeCidade1);
        printf("População: %d \n", Populacao1);
        printf("Área: %.2f km²\n", área1);
        printf("PIB: %.2f \n", pib1);
        printf("Número de Pontos Turísticos: %d \n", pontosTurísticos1);
    
    //exibe os valores da carta 2
        printf("\nCarta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %4s \n", códigodaCarta2);
        printf("Nome da Cidade: %s \n", nomeCidade2);
        printf("População: %d \n", Populacao2);
        printf("Área: %.2f km²\n", área2);
        printf("PIB: %.2f \n", pib2);
        printf("Número de Pontos Turísticos: %d \n", pontosTurísticos2);    

    // Comparando a população
        if (Populacao1 > Populacao2) {
            printf("%s Cidade 1 tem maior população. \n", nomeCidade1);           
        } else if (Populacao2 > Populacao1){
            printf("%s Cidade 2 tem maior população. \n", nomeCidade2);  
        } else {
            printf("Ambas as cidades têm a mesma população.\n");
        }
        
    // Comparando a área
        if (área1 > área2){
            printf("%s Cidade 1 tem maior área. \n", nomeCidade1);            
        } else if (área2 > área1){
            printf("%s Cidade 2 tem maior área. \n", nomeCidade2);   
        } else {
            printf("Ambas as cidades têm a mesma áre.\n");
        }

    // Comparando o PIB
        if (pib1 > pib2){
            printf("%s Cidade 1 tem maior pib. \n", nomeCidade1);      
        } else if (pib2 > pib1){
            printf("%s Cidade 2 tem maior pib. \n", nomeCidade2);    
        }else {
            printf("Ambas as cidades têm o mesmo pib.\n");
        }

    // Comparando os pontos turísticos
        if (pontosTurísticos1 > pontosTurísticos2){
            printf("%s Cidade 1 tem maior pontos turísticos. \n", nomeCidade1);            
        } else if (pontosTurísticos2 > pontosTurísticos1){
            printf("%s Cidade 2 tem maior pontos turísticos. \n", nomeCidade2);  
        } else {
            printf("Ambas as cidades têm ao mesmos pontos turísticos.\n");
        }

    // Determinando a cidade vencedora com base no maior número de atributos "vencedores"
        int vitorianomeCidade1 = 0, vitorianomeCidade2 = 0;

        if (Populacao1 > Populacao2) vitorianomeCidade2++;
        else if (Populacao2 > Populacao1) vitorianomeCidade2++;
    
        if (área1> área2) vitorianomeCidade1++;
        else if (área2 > área1) vitorianomeCidade2++;
        
        if (pib1 > pib2) vitorianomeCidade1++;
        else if (pib2 > pib1) vitorianomeCidade2++;
        
        if (pontosTurísticos1 > pontosTurísticos2) vitorianomeCidade1++;
        else if (pontosTurísticos2 > pontosTurísticos1) vitorianomeCidade2++;

    // Exibindo a cidade vencedora
        if (vitorianomeCidade1 > vitorianomeCidade2) {
            printf("A cidade vencedora é: %s\n", nomeCidade1);
        } else if (vitorianomeCidade2 > vitorianomeCidade1) {
            printf("A cidade vencedora é: %s\n", nomeCidade2);
        } 

    // Indica que o programa foi executado com sucesso            
        return 0;
}