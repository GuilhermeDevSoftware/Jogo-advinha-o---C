#include<stdio.h>
#include<stdio.h>
#include<time.h>

int main(){
        printf("\n\n");
        printf("          P  /_\\  P                              \n");
        printf("         /_\\_|_|_/_\\                            \n");
        printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
        printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
        printf("    |" "  |  |_|  |"  " |                         \n");
        printf("    |_____| ' _ ' |_____|                         \n");
        printf("          \\__|_|__/                              \n");
        printf("\n\n");
        int segundos = time(0); //Aqui o numero vai sempre variar porque trabalha com segundo
        srand(segundos);

        int numerogrande = rand();
        
        int numeroDesejado = numerogrande % 100;

        int chute;
        int tentativa = 1;
        int igual = 0;
        double pontos = 1000; //Jogador começa com 1000 pontos

        int numeroTentativas = 0;
        int nivel = 0;

        printf("Nivel de dificuldade -- (1)Facil -- (2)Medio -- (3) Dificil\n");
        printf("Escolha o nivel desejado: ");
        scanf("%d", & nivel);

        switch (nivel)
        {
        case 1:
            numeroTentativas = 20;
            break;
        
        case 2:
            numeroTentativas = 10;
            break;

        default:
            numeroTentativas = 6;   
            break; 
        }     

        printf("-------- Jogo de advinhacao -------\n");
        printf("Jogo de advinhacao - Nivel (%d)", nivel);

    for(int i =0; i < numeroTentativas; i++) //Aqui inicia como 1 porque o 1 representa o verdadeiro.
    {
        printf("\nTentativa %d \n", tentativa);
        printf("Acerte o numero : ");
        scanf("%d", & chute);

        int menor = chute < numeroDesejado;
        igual = (chute == numeroDesejado);

        if(igual){
            break;
        }
        else if (chute < 0){
            printf("Voce nao pode colocar numeros negativos!");
            continue; //Aqui ele não continua o laço até o fim, pula direto para o i++ já que deu verdadeiro essa.
        }

        else if(menor){
            printf("O numero digitado e menor do que esperado.");
        }

        else {
            printf("O numero digitado e maior do que esperado");
        }
        
        tentativa++;

        double pontosperdidos = abs(chute - numeroDesejado) / 2.0; //Deixa o numero positivo
        pontos = pontos - pontosperdidos;
    }
    
    printf("\nFim de jogo!\n");

    if(igual){

        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Voce ganhou!");
        printf("\nQuantidade de tentativas ate acertar: %d\n", tentativa-1);
        printf("\nPontos do jogador: %.2f\n", pontos);
    }
    else{
        printf("Voce perdeu!");
        printf("\nPontos do jogador: %.2f\n", pontos);

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");

    }
}