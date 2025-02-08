#include <stdio.h>
#include <string.h>

struct carta {
    int populacao, n_carta, p_turistico, ponto; //variavel int para armazer numeros inteiros//
double PIB, area, densidade_populacional, pib_capital, total; //variavel double para armazenar numeros de ponto flutuantes e numeros inteiros//
char l_carta, nome[50]; //variavel char para armazenar letras//


}; //estrutura para armazenar os dados da carta//


int main(void) {

    char confirmacao, confirmacao2; //variavel char para armazenar letras//
 struct carta carta1; //estrutura para armazenar os dados da carta//
 carta1.ponto = 0 ; //variavel para armazenar os pontos da carta//

 struct carta carta2; //estrutura para armazenar os dados da carta//
 carta2.ponto = 0 ; //variavel para armazenar os pontos da carta//


    printf("---------------BEM VINDO AO JOGO SUPER TRUNFO-------------\n");
    printf("---------------VAMOS INICIAR A CRIAÇÃO DA CARTA (01)-------------\n");
 
do { //laço de repetição para confirmar os dados inseridos//
        printf("DIGITE O NOME DA CIDADE:\n");
        scanf("%[^\n]", &carta1.nome);  //%[^\n]usado para ler a quebra de linha ocasionada pelo espaço//

            printf("DIGITE A POPULAÇÃO DA CIDADE:\n");
            scanf(" %d", &carta1.populacao);

        printf("DIGITE A AREA DA CIDADE:\n");
        scanf(" %lf", &carta1.area);

            printf("DIGITE O PIB DA CIDADE:\n");
            scanf(" %lf", &carta1.PIB);

        printf("DIGITE A QUANTIDADES DE PONTOS TURISTICOS DA CIDADE:\n");
        scanf(" %i", &carta1.p_turistico);

        do { //laço de repetição para confirmar os dados inseridos//
            printf("DIGITE O CODIGO DA CARTA LETRA (A-H), SEGUIDA DE UM NUMERO (1-4):\n");
            scanf(" %c%d", &carta1.l_carta, &carta1.n_carta);

             if ((carta1.l_carta < 'A' || carta1.l_carta > 'H') || (carta1.n_carta < 1 || carta1.n_carta > 4)) { 
                //condição para verificar se a letra digitada esta entre A e H e se o numero digitado esta entre 1 e 4//
                printf("Entrada invalida! Por favor, digite uma letra entre A e H e um numero entre 1 e 4.\n");
            }

        } while (carta1.l_carta < 'A' || carta1.l_carta > 'H' || carta1.n_carta < 1 || carta1.n_carta > 4);

            printf("---------------CONFIRMAÇÃO DE DADOS DA CIDADE %s------------\n", carta1.nome);

            printf("NOME DA CIDADE: %s\n", carta1.nome);
            printf("POPULAÇÃO: %i\n", carta1.populacao);
            printf("AREA: %.2fKM\n", carta1.area);
            printf("PIB: %.2f$\n", carta1.PIB);
            printf("PONTOS TURISTICOS: %i\n", carta1.p_turistico);
            printf("CODIGO DA CARTA: %c%i\n", carta1.l_carta, carta1.n_carta);
//condiçao para confirmar os dados inseridos//
            printf("---------PARA CONFIRMAR DIGITE 'S' / PARA DIGITAR NOVAMENTE DIGITE 'N'-----------\n");
            scanf(" %c", &confirmacao);


} while (confirmacao != 's' && confirmacao != 'S');

    //calculos para densidade populacional e PIB per capita//
    carta1.densidade_populacional = carta1.populacao / carta1.area; //formula para calcular a densidade populacional//
    carta1.pib_capital = carta1.PIB / carta1.populacao; //formula para calcular o PIB per capita//


    printf("-------TODAS INFORMAÇOES DA CIDADE %s-------\n", carta1.nome);
        printf("NOME DA CIDADE: %s\n", carta1.nome);
        printf("POPULAÇAO: %i\n", carta1.populacao);
        printf("AREA: %.2fKM\n", carta1.area);
        printf("DENSIDADE POPULACIONAL: %.2f PESSOAS/KM²\n", carta1.densidade_populacional);

//condiçoes para exibir o PIB em trilhoes, bilhoes, milhoes e reais//
            if (carta1.PIB >= 1e12) {
                printf("PIB: %.2f TRILHOES DE REAIS\n", carta1.PIB / 1e12);
            } else if (carta1.PIB >= 1e9){
                printf("PIB: %.2f BILHÕES DE REAIS\n", carta1.PIB / 1e9);
            } else if (carta1.PIB >= 1e6){
                printf("PIB: %.2f MILHÕES DE REAIS\n", carta1.PIB / 1e6);
            } else {
                printf("PIB: %.2f REAIS\n",carta1.PIB);
            }

            printf("PIB PER CAPITA: %.2f$\n", carta1.pib_capital);
            printf("PONTOS TURISTICOS: %i\n", carta1.p_turistico);
            printf("CODIGO DA CARTA: %c%i\n", carta1.l_carta, carta1.n_carta);

            // ------------------------------------------------------------------- //
            // ---------------------------- CARTA 02 ----------------------------- //
            // ------------------------------------------------------------------- //


                    printf("---------------VAMOS INICIAR A CRIAÇÃO DA CARTA (02)-------------\n");
                    getchar(); //função para aguardar o usuario pressionar qualquer tecla do teclado//

do { //laço de repetição para confirmar os dados inseridos//
        printf("DIGITE O NOME DA CIDADE:\n");
        scanf("%[^\n]", &carta2.nome);  //%[^\n]usado para ler a quebra de linha ocasionada pelo espaço//

            printf("DIGITE A POPULAÇÃO DA CIDADE:\n");
            scanf(" %d", &carta2.populacao);

        printf("DIGITE A AREA DA CIDADE:\n");
        scanf(" %lf", &carta2.area);

            printf("DIGITE O PIB DA CIDADE:\n");
            scanf(" %lf", &carta2.PIB);

        printf("DIGITE A QUANTIDADES DE PONTOS TURISTICOS DA CIDADE:\n");
        scanf(" %i", &carta2.p_turistico);

        do { //laço de repetição para confirmar os dados inseridos//
            printf("DIGITE O CODIGO DA CARTA LETRA (A-H), SEGUIDA DE UM NUMERO (1-4):\n");
            scanf(" %c%d", &carta2.l_carta, &carta2.n_carta);

             if ((carta2.l_carta < 'A' || carta2.l_carta > 'H') || (carta2.n_carta < 1 || carta2.n_carta > 4)) { 
                //condição para verificar se a letra digitada esta entre A e H e se o numero digitado esta entre 1 e 4//
                printf("Entrada invalida! Por favor, digite uma letra entre A e H e um numero entre 1 e 4.\n");
            }

        } while (carta2.l_carta < 'A' || carta2.l_carta > 'H' || carta2.n_carta < 1 || carta2.n_carta > 4);

            printf("---------------CONFIRMAÇÃO DE DADOS CIDADE %s-------------\n", carta2.nome);

            printf("NOME DA CIDADE: %s\n", carta2.nome);
            printf("POPULAÇÃO: %i\n", carta2.populacao);
            printf("AREA: %.2fKM\n", carta2.area);
            printf("PIB: %.2f$\n", carta2.PIB);
            printf("PONTOS TURISTICOS: %i\n", carta2.p_turistico);
            printf("CODIGO DA CARTA: %c%i\n", carta2.l_carta, carta2.n_carta);
//condiçao para confirmar os dados inseridos//
            printf("---------PARA CONFIRMAR DIGITE 'S' / PARA DIGITAR NOVAMENTE DIGITE 'N'-----------\n");
            scanf(" %c", &confirmacao2);


} while (confirmacao2 != 's' && confirmacao2 != 'S');

    //calculos para densidade populacional e PIB per capita//
    carta2.densidade_populacional = carta2.populacao / carta2.area; //formula para calcular a densidade populacional//
    carta2.pib_capital = carta2.PIB / carta2.populacao; //formula para calcular o PIB per capita//


    printf("-------TODAS INFORMAÇOES DA CIDADE %s-------\n", carta2.nome);
        printf("NOME DA CIDADE: %s\n", carta2.nome);
        printf("POPULAÇAO: %i\n", carta2.populacao);
        printf("AREA: %.2fKM\n", carta2.area);
        printf("DENSIDADE POPULACIONAL: %.2f PESSOAS/KM²\n", carta2.densidade_populacional);

//condiçoes para exibir o PIB em trilhoes, bilhoes, milhoes e reais//
            if (carta2.PIB >= 1e12) {
                printf("PIB: %.2f TRILHOES DE REAIS\n", carta2.PIB / 1e12);
            } else if (carta2.PIB >= 1e9){
                printf("PIB: %.2f BILHÕES DE REAIS\n", carta2.PIB / 1e9);
            } else if (carta2.PIB >= 1e6){
                printf("PIB: %.2f MILHÕES DE REAIS\n", carta2.PIB / 1e6);
            } else {
                printf("PIB: %.2f REAIS\n",carta2.PIB);
            }

            printf("PIB PER CAPITA: %.2f$\n", carta2.pib_capital);
            printf("PONTOS TURISTICOS: %i\n", carta2.p_turistico);
            printf("CODIGO DA CARTA: %c%i\n", carta2.l_carta, carta2.n_carta);


            // ------------------------------------------------------------------- //
            // ---------------------------- COMPARAÇÃO --------------------------- //
            // ------------------------------------------------------------------- //   



            printf("VAMOS COMPRAR AS IMFORMACOES DA CARTAS DIGITADAS\n");

             // COMPARACAO DA POPULACAO //

            printf("%s  /  %s\n", carta1.nome, carta2.nome);
            if (carta1.populacao > carta2.populacao) {
                carta1.ponto++; //incremento de ponto para carta vencedora//
                printf("%i  /  %i\n // CIDADE: %s GANPU, POIS TEM A MAIOR POPULCAO\n", 
                carta1.populacao, carta2.populacao, carta1.nome);
                } // IF END

            else{

                printf("%i  /  %i -- CIDADE: %s GANHOU, POIS TEM A MAIOR POPULACAO\n", 
                carta1.populacao, carta2.populacao, carta2.nome);
                carta2.ponto++; //incremento de ponto para carta vencedora//
                } // ELSE END 


                // COMPARACAO DA AREA EM KM² //

                if (carta1.area > carta2.area) {
                    printf("%.2f KM²  /  %.2f KM² -- CIDADE: %s GANHOU, POIS TEM A MAIOR AREA\n",
                    carta1.area, carta2.area, carta1.nome);
                    carta1.ponto++; //incremento de ponto para carta vencedora//

                } // IF END

                       else {  
                        printf("%.2f KM²  /  %.2f KM² -- CIDADE: %s GANHOU POIS TEM A MAIOR AREA\n",
                        carta1.area, carta2.area, carta2.nome); 
                        carta2.ponto++; //incremento de ponto para carta vencedora//                    

                }  // ELSE END    


                // COMPARACAO DESIDADE DA POPULACAO //

                if (carta1.densidade_populacional < carta2.densidade_populacional) {
                    printf("%.2f PESSOAS POR KM²  /  %.2f PESSOAS POR KM² -- CIDADE: %s GANHOU, POIS TEM A MENOR DENSIDADE POPULACIONAL/n",
                    carta1.densidade_populacional, carta2.densidade_populacional, carta1.nome);
                    carta1.ponto++; //incremento de ponto para carta vencedora//

                } // IF END

                       else  {  
                        printf("%.2f PESSOAS POR KM²  /  %.2f PESSOAS POR KM² -- CIDADE: %s GANHOU POIS TEM A MENOR DENSIDADE POPULACIONAL\n",
                        carta1.densidade_populacional, carta2.densidade_populacional, carta2.nome); 
                        carta2.ponto++; //incremento de ponto para carta vencedora//                    
                }  // ELSE IF END   

                //  COMPARACAO DO PIB //

                if (carta1.PIB > carta2.PIB) {
                    printf("%.2f$  /  %.2f$ -- CIDADE: %s GANHOU, POIS TEM O MAIOR PIB/n",
                    carta1.PIB, carta2.PIB, carta1.nome);
                    carta1.ponto++; //incremento de ponto para carta vencedora//
                } // IF END

                        else if (carta1.PIB < carta2.PIB){
                            printf("%.2f$   /  %.2f$ -- CIDADE: %s GANHOU, POIS TEM O MAIOR PIB/n");
                            carta2.ponto++; //incremento de ponto para carta vencedora//
                        }

                // COMPARACAO DO PIB PER CAPITA // 

                if (carta1.pib_capital > carta2.pib_capital) {
                    printf("%.2f$ POR PESSOA  /  %.2f$ POR PESSOA -- CIDADE: %s GANHOU, POIS TEM O MAIOR PIB PER CAPITA/n");
                    carta1.ponto++; //incremento de ponto para carta vencedora//
                } //IF END

                        else {
                            printf("%.2f$ POR PESSOA  /  %.2f$ POR PESSOA -- CIDADE: %s GANHOU, POIS TEM O MAIOR PIB PER CAPITA/n");
                            carta2.ponto++; //incremento de ponto para carta vencedora//
                        } // ELSE END

                        // COMPARACAO DOS PONTOS TURISTICOS //

                        if (carta1.p_turistico > carta2.p_turistico) {
                            printf("%i PONTOS TURISTICOS  /  %i PONTOS TURISTICOS -- CIDADE: %s GANHOU POIS TEM A MAIOR QUANTIDADE DE PONTOS TURISTICOS/n",
                            carta1.p_turistico, carta2.p_turistico, carta1.nome);
                            carta1.ponto++; //incremento de ponto para carta vencedora//
                        }  // IF END

                        else {
                            printf("%i PONTOS TURISTICOS  /  %i PONTOS TURISTICOS -- CIDADE: %s GANHOU POIS TEM A MAIOR QUANTIDADE DE PONTOS TURISTICOS/n",
                            carta1.p_turistico, carta2.p_turistico, carta2.nome);
                            carta2.ponto++; //incremento de ponto para carta vencedora//
                        }     // ELSE END

                         
                         // CARTA VENCEDORA //

                         printf("--------------------- RESULTADO FINAL ---------------------\n");
                          if(carta1.ponto > carta2.ponto) {
                            printf("CIDADE VENCEDORA: %s\n", carta1.nome);
                          } //END IF

                            else if (carta1.ponto < carta2.ponto) {
                                printf("CIDADE VENCEDORA: %s\n", carta2.nome);
                            } //END ELSE IF
    
                            else {
                                printf("EMPATE\n");
                                printf("A CARTA COM A SOMA DE TODOS OS ATRIBUTOS MAIOR VENCE\n");
                                carta1.total = carta1.populacao + carta1.area + carta1.PIB + carta1.p_turistico + carta1.densidade_populacional
                                + carta1.pib_capital; //formula para somar todos os atributos da carta 1//

                                carta2.total = carta2.populacao + carta2.area + carta2.PIB + carta2.p_turistico + carta2.densidade_populacional
                                + carta2.pib_capital; //formula para somar todos os atributos da carta 2//

                                printf("SOMA DOS ATRIBUTOS DA CIDADE %s: %.2f\n", carta1.nome, carta1.total);
                                printf("SOMA DOS ATRIBUTOS DA CIDADE %s: %.2f\n", carta2.nome, carta2.total);

                                if (carta1.total > carta2.total) {
                                    printf("CIDADE VENCEDORA: %s \n", carta1.nome);
                                }

                                else {
                                    printf("CIDADE VENCEDORA: %s \n", carta2.nome);
                                }

                                
                            } //END ELSE







            
                    
//------------------------------------------------------------------------------------------------------------//
                         //ESCRITA DO PROGRAMA FINALIZADA AQUI OS COMANDOS LOGO ABAIXO//
                                         //E APENAS PARA INFORMOCÕES//
//-----------------------------------------------------------------------------------------------------------//


 printf("\n"); //espaço para separar as informações//
 printf("\n"); //espaço para separar as informações//
 printf("--------------- FIM DO PROGRAMA -------------\n");
 printf("\n"); //espaço para separar as informações//
 printf("\n"); //espaço para separar as informações//
 

 printf("--------------- ESTE PROGRAMA FOI DESENVOLVIDO PELO ALUNO: GUSTAVO MORAIS ---------------\n");
                printf("--------------- CURSO: JOGOS DIGITAIS -------------\n");
                printf("--------------- DISCIPLINA: INTRODUÇÃO À PROGRAMAÇÃO DE COMPUTADORES -------------\n");
                printf("--------------- FACULDADE: ESTACIO -------------\n");


printf("\n");   //espaço para separar as informações//               
printf("\n");   //espaço para separar as informações//

 printf("--------------- PARA FINALIZAR PRECIONE QUALQUER TECLA DO SEU TECLADO -------------\n");


                getchar();  //função para aguardar o usuario pressionar qualquer tecla do teclado//  
                getchar();  //função para aguardar o usuario pressionar qualquer tecla do teclado//

return 0;

}