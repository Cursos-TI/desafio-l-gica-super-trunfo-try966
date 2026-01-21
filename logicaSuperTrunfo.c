#include <stdio.h>

  int main() {

      //declaração das variáveis conforme o exercício, opcao1, opcao2, resultado1 e resultado2, são para a lógica no switch.
      char estadoA, estadoB; 
      char codigoA[3], codigoB[3]; 
      char cidadeA[20], cidadeB[20];
      unsigned long int populacaoA, populacaoB; 
      float superpoderA, superpoderB, areaA, areaB, pibA, pibB, pibpercapitaA, pibpercapitaB, densidadeA, densidadeB;
      int pontostA, pontostB, opcao1, opcao2, resultado1, resultado2; 

      //Cadastro da primeira carta
      printf("Seja bem vindo ao Super Trunfo de Cidades !\n\n");
      printf("Antes de começar vamos realizar o cadastro da primeira carta !\n");

      printf("Escolha uma letra de A a H para representar o Estado que está cadastrando: \n");
      scanf("%s", &estadoA);

      printf("Digite o código da carta, que deve ser a Letra do Estado + um número de 01 a 04: \n");
      scanf("%s", codigoA);

      printf("Digite o nome da cidade: \n");
      scanf("%s", cidadeA);

      printf("Digite a população: \n");
      scanf("%lu", &populacaoA);

      printf("Digite a area em km²: \n");
      scanf("%f", &areaA);

      printf("Digite o PIB em bilhões de reais: \n");
      scanf("%f", &pibA);

      printf("Digite o numero de pontos turísticos da cidade: \n");
      scanf("%d", &pontostA);

      // Como o PIB está em bilhões, feita multiplicação pro cálculo do pibpercapita
      pibpercapitaA = ((pibA*1000000000) / populacaoA);
      densidadeA = (populacaoA / areaA);

      // Cadastro da segunda carta
      printf("Seguem os dados da primeira carta cadastrada ! \n");

      printf("Carta 1: Código: %s\n" , codigoA);
      printf("Nome da Cidade: %s\n", cidadeA);
      printf("População: %lu \n", populacaoA);
      printf("Área: %.2f km²\n", areaA);
      printf("PIB: %.2f bilhões de reais\n", pibA);
      printf("Número de pontos turísticos: %d\n \n", pontostA);
      printf("Densidade Populacional: %.2f  hab/km²", densidadeA);
      printf("PIB per Capita: %.2f reais \n", pibpercapitaA);

      printf("Vamos realizar agora, o cadastro da segunda carta !\n");

      printf("Escolha uma letra de A a H para representar o Estado que está cadastrando: \n");
      scanf("%s", &estadoB);

      printf("Digite o código da carta, que deve ser a Letra do Estado + um número de 01 a 04: \n");
      scanf("%s", codigoB);

      printf("Digite o nome da cidade: \n");
      scanf("%s", cidadeB);

      printf("Digite a população: \n");
      scanf("%lu", &populacaoB);

      printf("Digite a area em km²: \n");
      scanf("%f", &areaB);

      printf("Digite o PIB em bilhões de reais: \n");
      scanf("%f", &pibB);

      printf("Digite o numero de pontos turísticos da cidade: \n");
      scanf("%d", &pontostB);

      // Como o PIB está em bilhões, feita multiplicação pro cálculo do pibpercapita
      pibpercapitaB = ((pibB*1000000000)/ populacaoB);
      densidadeB = (populacaoB / areaB);

      printf("Carta 2: Código: %s\n", codigoB);
      printf("Nome da Cidade: %s\n", cidadeB);
      printf("População: %lu \n", populacaoB);
      printf("Área: %.2f km²\n", areaB);
      printf("PIB: %.2f bilhões de reais\n", pibB);
      printf("Número de pontos turísticos: %d\n", pontostB);
      printf("Densidade Populacional: %.2f  hab/km² \n", densidadeB);
      printf("PIB per Capita: %.2f reais \n", pibpercapitaB);

      // Escolha do primeiro atributo a ser comparado
      printf("### Disputa entre Cartas ###");
      printf("Escolha o primeiro atributo fará parte da disputa: \n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de pontos turísticos\n");
      printf("5. Densidade\n");
      printf("Sua escolha: ");
      scanf("%d", &opcao1);

      // O switch está buscando a carta vencedora, Resultado 1 é a carta 1 e Resultado 0 é a carta 2
      // Usei printf para mostrar os valores do atributo
      switch (opcao1) {
        case 1:
          printf("*** Sua primeira escolha foi o atributo População ***\n");
          printf("População da Carta 1: %lu \n", populacaoA);
          printf("População da Carta 2: %lu \n", populacaoB);
          resultado1 = (populacaoA > populacaoB) ? 1 : 0;
        break;
        case 2:
          printf("*** Sua primeira escolha foi o atributo Área ***\n");
          printf("Área da Carta 1: %.2f km²\n", areaA);
          printf("Área da Carta 2: %.2f km²\n", areaB);
          resultado1 = (areaA > areaB) ? 1 : 0;
        break;
        case 3:
          printf("*** Sua primeira escolha foi o atributo PIB ***\n");
          printf("PIB da Carta 1: %.2f bilhões de reais\n", pibA);
          printf("PIB da Carta 2: %.2f bilhões de reais\n", pibB);
          resultado1 = (pibA > pibB) ? 1 : 0;
        break;
        case 4:
          printf("*** Sua primeira escolha foi o atributo Número de pontos turísticos ***\n");
          printf("Número de pontos turísticos da Carta 1: %d\n", pontostA);
          printf("Número de pontos turísticos da Carta 2: %d\n", pontostB);
          resultado1 = (pontostA > pontostB) ? 1 : 0;
        break;
        case 5:
          printf("*** Sua primeira escolha foi o atributo Densidade Populacional ***\n");
          printf("Densidade Populacional da Carta 1: %.2f  hab/km² \n", densidadeA);
          printf("Densidade Populacional da Carta 2: %.2f  hab/km² \n", densidadeB);
          resultado1 = (densidadeA < densidadeB) ? 1 : 0;
        break;
        default:
          printf("Opção inválida!\n");
        break;
      } 

      // Segunda escolha de atributo
      printf("Escolha o segundo atributo fará parte da disputa: \n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de pontos turísticos\n");
      printf("5. Densidade\n");
      printf("Sua escolha: ");
      scanf("%d", &opcao2);

      // Feita uma condicional pra ver se o atributo 1 é o mesmo do 2.
      // O switch está buscando a carta vencedora, Resultado 1 é a carta 1 e Resultado 0 é a carta 2
      // Usei printf para mostrar os valores do atributo

      if (opcao1 == opcao2) {
        printf("Os atributos não podem ser iguais! \n");
      } else {
        switch (opcao2) {
          case 1:
            printf("*** Sua segunda escolha foi o atributo População ***\n");
            printf("População da Carta 1: %lu \n", populacaoA);
            printf("População da Carta 2: %lu \n", populacaoB);
            resultado2 = (populacaoA > populacaoB) ? 1 : 0;
          break;
          case 2:
            printf("*** Sua segunda escolha foi o atributo Área ***\n");
            printf("Área da Carta 1: %.2f km²\n", areaA);
            printf("Área da Carta 2: %.2f km²\n", areaB);
            resultado2 = (areaA > areaB) ? 1 : 0;
          break;
          case 3:
            printf("*** Sua segunda escolha foi o atributo PIB ***\n");
            printf("PIB da Carta 1: %.2f bilhões de reais\n", pibA);
            printf("PIB da Carta 2: %.2f bilhões de reais\n", pibB);
            resultado2 = (pibA > pibB) ? 1 : 0;
          break;
          case 4:
            printf("*** Sua segunda escolha foi o atributo Número de pontos turísticos ***\n");
            printf("Número de pontos turísticos da Carta 1: %d\n", pontostA);
            printf("Número de pontos turísticos da Carta 2: %d\n", pontostB);
            resultado2 = (pontostA > pontostB) ? 1 : 0;
          break;
          case 5:
            printf("*** Sua segunda escolha foi o atributo Densidade Populacional ***\n");
            printf("Densidade Populacional da Carta 1: %.2f  hab/km² \n", densidadeA);
            printf("Densidade Populacional da Carta 2: %.2f  hab/km² \n", densidadeB);
            resultado2 = (densidadeA < densidadeB) ? 1 : 0;
          break;
          default:
            printf("Opção inválida!\n");
          break;
        }
      }       

      // Busca do resultado, lembrando que 1 é a carta 1 e 0 é a carta 2.
      if (resultado1 == 1 && resultado2 == 1) {
        printf("A carta 1 (%s) venceu a disputa!\n", cidadeA);
      } else if (resultado1 == 1 && resultado2 == 0 || resultado1 == 0 && resultado2 == 1) {      
        printf("A disputa terminou em empate!\n");
      } else {       
        printf("A carta 2 (%s) venceu a disputa!\n", cidadeB);
      }


      return 0;
  }
