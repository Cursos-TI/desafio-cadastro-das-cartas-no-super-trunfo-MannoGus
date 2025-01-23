#include <stdio.h>


int main(void){
//variaveis de entrada para armazenar dados das cartas//

int populaçao, n_carta, p_turistico; //variavel int para armazer numeros inteiros//
double PIB, area; //variavel float para armazenar numeros de ponto flutuantes//
char l_carta, nome[50], confirmaçao; //variavel char para armazenar letras//


do {
        printf("DIGITE O NOME DA CIDADE:\n");
        scanf("%[^\n]", &nome);  //%[^\n]usado para ler a quebra de linha ocasionada pelo espaço//

            printf("DIGITE A POPULAÇÃO DA CIDADE:\n");
            scanf(" %d", &populaçao);

        printf("DIGITE A AREA DA CIDADE:\n");
        scanf(" %lf", &area);

            printf("DIGITE O PIB DA CIDADE:\n");
            scanf(" %lf", &PIB);

        printf("DIGITE A QUANTIDADES DE PONTOS TURISTICOS DA CIDADE:\n");
        scanf(" %i", &p_turistico);

        do {
            printf("DIGITE O CODIGO DA CARTA LETRA (A-H), SEGUIDA DE UM NUMERO (1-4):\n");
            scanf(" %c%d", &l_carta, &n_carta);

             if ((l_carta < 'A' || l_carta > 'H') || (n_carta < 1 || n_carta > 4)) {
                printf("Entrada invalida! Por favor, digite uma letra entre A e H e um numero entre 1 e 4.\n");
            }

        } while (l_carta < 'A' || l_carta > 'H' || n_carta < 1 || n_carta > 4);

            printf("---------------CONFIRMAÇÃO DE DADOS INSERIDOS-------------\n");

            printf("NOME DA CIDADE: %s\n", nome);
            printf("POPULAÇÃO: %i\n", populaçao);
            printf("AREA: %.2fKM\n", area);
            printf("PIB: %.2f$\n", PIB);
            printf("PONTOS TURISTICOS: %i\n", p_turistico);
            printf("CODIGO DA CARTA: %c%i\n", l_carta, n_carta);

            printf("---------PARA CONFIRMAR DIGITE 'S' / PARA DIGITAR NIVAMENTE DIGITE 'N'-----------\n");
            scanf(" %c", &confirmaçao);


} while (confirmaçao != 's' && confirmaçao != 'S');

    printf("DADOS CONFIRMADOS COM SUCESSO\n");

 printf("--------------- FIM DO PROGRAMA -------------\n");
 

 printf("ESTE PROGRAMA FOI DESENVOLVIDO PELO ALUNO: GUSTAVO MORAIS\n");
                printf("--------------- CURSO: JOGOS DIGITAIS -------------\n");
                printf("--------------- DISCIPLINA: INTRODUÇÃO À PROGRAMAÇÃO DE COMPUTADORES -------------\n");
                printf("--------------- FACULDADE: ESTACIO -------------\n");

 printf("--------------- PARA FINALIZAR PRECIONE QUALQUER TECLA DO SEU TECLADO -------------\n");
                getchar();



    return 0;

}
