#include <stdio.h>
 
int main() {
    // variaveis do carta1
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float PIB1;
    int turistico1;
    float densidade1; 
    float capita1;
    float superpoder1;


    // variaveis do carta2
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float PIB2;
    int turistico2;
    float densidade2; 
    float capita2; 
    float superpoder2; 



    //usuário insere informações da carta1
    printf("Digite a letra de A a H do Estado:  \n");
    scanf("%c" , &estado1);
    
    printf("Digite a o código: (número de 1 a 4, nesse formado: B03) \n");
    scanf("%s" , &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", nome1);

    printf("Digite a população: \n");
    scanf("%d" , &populacao1);

    printf("Digite a area² da cidade: \n");
    scanf("%f" , &area1);

    printf("Digite o PIB: \n");
    scanf("%f" , &PIB1);

    printf("Quantos pontos túristicos a cidade possui: \n");
    scanf("%d", &turistico1); 




    //usuário insere informações da carta2
    printf("\nDigite a letra do Estado:  \n");
    getchar();
    scanf("%c" , &estado2);
    
    printf("Digite a o código: (exemplo: B03) \n");
    getchar();
    scanf("%s" , &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", nome2);

    printf("Digite a população: \n");
    scanf("%d" , &populacao2);

    printf("Digite a area² da cidade: \n");
    scanf("%f" , &area2);

    printf("Digite o PIB: \n");
    scanf("%f" , &PIB2);

    printf("Quantos pontos túristicos a cidade possui: \n");
    scanf("%d", &turistico2);  

    // operação para densidade populacional e PIB per capita
    densidade1 = (populacao1 / area1);
    capita1 = (PIB1 / populacao1);

    densidade2 = (populacao2 / area2);
    capita2 = (PIB2 / populacao2);    
  
    // calculando inverso da densidade populacional
    float inversodensidade1 = 1.0 / densidade1;
    
    float inversodensidade2 = 1.0 / densidade2;
    
    
    
    // calculo para super poder
    superpoder1 = (populacao1 + area1 + PIB1 + turistico1 + capita1 + inversodensidade1);
    
    superpoder2 = (populacao2 + area2 + PIB2 + turistico2 + capita2 + inversodensidade2);


  
    // retorna as informações informadas da carta1
    printf("\nCarta 1: \n");
    printf("Letra do estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s", nome1);
    printf("População: %d \n", populacao1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Pontos turistícos: %d \n", turistico1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1); 
    printf("PIB per Capita: %.2f reais \n", capita1);
    printf("Super poder %.2f \n", superpoder1);



     // retorna as informações informadas da carta2
    printf("\nCarta 2: \n");
    printf("Letra do estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s", nome2);
    printf("População: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Pontos turistícos: %d \n", turistico2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per capta: %.2f reais \n", capita2);
    printf("Super poder %.2f \n", superpoder2);

    
    // comparação
    int vitoria;
    int opcao;
    printf("\nSelecione qual atributo comparar:\n");
    printf("1- População\n");
    printf("2- Area\n");
    printf("3- PIB\n");
    printf("4- Pontos turísticos\n");
    printf("5- Densidade demográfica\n");
    scanf("%d", &opcao);
    

  switch (opcao) {
    case 1: 
     if (populacao1 > populacao2){
        vitoria = 1;
     } else if (populacao1 < populacao2) {
        vitoria = 2;
     } else
     {
        vitoria = 0;
     }
    break;
    
    case 2: 
     if (area1 > area2){        
        vitoria = 1;
     } else if (area1 < area2) {
        vitoria = 2;
     } else
     {
        vitoria = 0;
     } 
    break;
    
    case 3: 
     if (PIB1 > PIB2){
        vitoria = 1;
     } else if (PIB1 < PIB2) {
        vitoria = 2;
     } else
     {
        vitoria = 0;
     }
    break;
    
    case 4: 
     if (turistico1 > turistico2){
        vitoria = 1;
     } else if (turistico1 < turistico2) {
        vitoria = 2;
     } else
     {
        vitoria = 0;
     } 
    break;

    case 5: 
     if (densidade1 > densidade2){
        vitoria = 1;
     } else if (densidade1 < densidade2) {
        vitoria = 2;
     } else
     {
        vitoria = 0;
     }
    break;
    default:
    }


    // resultado
    printf("Cidades: %s e %s\n", nome1, nome2);
    if (opcao == 1)
    {
      printf("População Carta 1: %d\n", populacao1);
      printf("Populaçãp Carta 2 %d\n", populacao2);
    } else if (opcao == 2)
    {
      printf("Area da Carta 1: %.2f\n", area1);
      printf("Area da Carta 2 %.2f\n", area2);
    } else if (opcao == 3)
    {
      printf("PIB da Carta 1: %.2f\n", PIB1);
      printf("PIB da Carta 2: %.2f\n", PIB2);
    } else if (opcao == 4)
    {
      printf("Pontos turisticos da Carta 1: %d\n", turistico1);
      printf("Pontos turisticos da Carta 2: %d\n", turistico2);
    } else if (opcao == 5)
    {
      printf("Densidade da Carta 1: %.2f\n", densidade1);
      printf("Densidade da Carta 2: %.2f\n", densidade2);
    }
    if (vitoria == 1)
    {
        printf("Carta 1 venceu!");
    } else if (vitoria == 2)
    {
        printf("Carta 2 venceu!");
    } else if (vitoria == 0)
    {
        printf("Empate!");
    }
        
   return 0; 


}
    
    