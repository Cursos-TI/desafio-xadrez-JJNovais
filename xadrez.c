#include <stdio.h>

int main(){
    // Variáveis para as peças do xadrez.
    int torre = 0, bispo = 0, rainha = 0, cavalo = 1; 
    int EscolhaCavalo;

    //Loop para a torre.
    while (torre < 5) 
    {
        printf("Torre: Direita\n");
        torre++;
    }
    
    printf("\n");

    // Loop para o bispo.
    do {
        printf("Bispo: Cima, Direita\n");
        bispo++;
    } while (bispo < 5);

    printf("\n");

    // Loop para a rainha.
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha: Esquerda\n");
    }

    // Loop para o cavalo, que verifica a escolha do jogador e executa o movimento correspondente.
    // O cavalo se move em L, então ele pode se mover duas casas em uma direção e uma casa em sentido perpendicular.
    printf("\n");
    printf("Escolha o movimento do cavalo: \n");
    printf("1. Cima, Esquerda\n");
    printf("2. Cima, Direita\n");
    printf("3. Baixo, Esquerda\n");
    printf("4. Baixo, Direita\n");
    printf("5. Esquerda, Cima\n");
    printf("6. Esquerda, Baixo\n");
    printf("7. Direita, Cima\n");
    printf("8. Direita, Baixo\n");
    printf("Escolha: \n");
    scanf("%d", &EscolhaCavalo);

    switch (EscolhaCavalo)
    {
    case 1:
        while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Cima\n");
        }
        printf("Cavalo: Esquerda\n");
    } // O cavalo se move duas casas para cima e uma casa para a esquerda.
        break;

    case 2:
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Cima\n");
        }
        printf("Cavalo: Direita\n");
    } // O cavalo se move duas casas para cima e uma casa para a direita.
        break;

    case 3:
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Baixo\n");
        }
        printf("Cavalo: Esquerda\n");
    } // O cavalo se move duas casas para baixo e uma casa para a esquerda.
        break;

    case 4:
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Baixo\n");
        }
        printf("Cavalo: Direita\n");
    } // O cavalo se move duas casas para baixo e uma casa para a direita.
        break;

    case 5:
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Esquerda\n");
        }
        printf("Cavalo: Cima\n");
    } // O cavalo se move duas casas para cima e uma casa para a esquerda.
        break;

    case 6:
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Esquerda\n");
        }
        printf("Cavalo: Baixo\n");
    } // O cavalo se move duas casas para baixo e uma casa para a esquerda.
        break;

    case 7:
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Direita\n");
        }
        printf("Cavalo: Cima\n");
    } // O cavalo se move duas casas para cima e uma casa para a direita.
        break;

    case 8:
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Direita\n");
        }
        printf("Cavalo: Baixo\n");
    } // O cavalo se move duas casas para baixo e uma casa para a direita.
        break;

    default:
        printf("Escolha inválida\n"); // Caso o jogador escolha uma opção inválida.
        break;
    }

    return 0;

}
