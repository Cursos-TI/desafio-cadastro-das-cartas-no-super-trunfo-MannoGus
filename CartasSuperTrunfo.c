#include <stdio.h>
#include <string.h>

struct carta {
    int populacao, n_carta, p_turistico; //variavel int para armazer numeros inteiros//
double PIB, area, densidade_populacional, pib_capital; //variavel double para armazenar numeros de ponto flutuantes e numeros inteiros//
char l_carta, nome[50]; //variavel char para armazenar letras//

};


int main(void) {

    char confirmacao; //variavel char para armazenar letras//
 struct carta carta1; //estrutura para armazenar os dados da carta//


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

            printf("---------------CONFIRMAÇÃO DE DADOS INSERIDOS DA CARTA (01)-------------\n");

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


    printf("-------TODAS INFORMAÇOES DA CARTA (01)-------\n");
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