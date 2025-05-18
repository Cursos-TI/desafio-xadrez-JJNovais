#include <stdio.h>

void MovimentacaoTorre(int numero){ //Loop para a torre.
    if (numero > 0){
        printf("Direita\n");

        MovimentacaoTorre(numero - 1);
    }
}

void MovimentacaoBispo(int numeroBispo){ //Loop para o bispo.

    for (int i = 1; i <= numeroBispo; i++){

        for(int j = 1; j <= 1; j++){

            printf("Direita, ");
        }
        printf("Cima\n");
    }
}

void MovimentacaoRainha(int numero){ //Loop para a rainha.
    if (numero > 0){
        printf("Esquerda\n");

        MovimentacaoRainha(numero - 1);
    }
}

int main(){
    // Variáveis para as peças do xadrez.
    int torre = 0, bispo = 0, rainha = 0, cavalo = 1; 
    int EscolhaCavalo, numeroTorre, numeroBispo = 5, numeroRainha;

    // O número de casas que cada peça se move é dado pelo usuário.
    printf("Quantos casas quer que a Torre se mova a Direita (de 1 a 5)? ");
    scanf("%d", &numeroTorre);
    printf("\n");

    printf("Movimentos Torre: \n");
    MovimentacaoTorre(numeroTorre); // Void que chama a função para a torre.

    printf("\n");

    printf("Quantos casas quer que o Bispo se mova a Cima e Direita (de 1 a 5)? ");
    scanf("%d", &numeroBispo);
    printf("\n");

    printf("Movimentos Bispo: \n");
    MovimentacaoBispo(numeroBispo); // Void que chama a função para o bispo.

    printf("\n");


    printf("Quantos casas quer que a Rainha se mova a Esquerda (de 1 a 8)? ");
    scanf("%d", &numeroRainha);
    printf("\n");

    printf("Movimentos Rainha: \n");
    MovimentacaoRainha(numeroRainha); // Void que chama a função para a rainha.

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
    printf("\n");
    printf("Escolha: ");
    scanf("%d", &EscolhaCavalo);

    switch (EscolhaCavalo)
    {
    case 1:

    for (int i = 0, j = 1; i < j; i++, j--) {
        printf("Cavalo: Cima\n");
        printf("Cavalo: Cima\n");
        printf("Cavalo: Esquerda\n");
    }
     // O cavalo se move duas casas para cima e uma casa para a esquerda.
        break;

    case 2:

    for (int i = 0, j = 1; i < j; i++, j--) {
        printf("Cavalo: Cima\n");
        printf("Cavalo: Cima\n");
        printf("Cavalo: Direita\n");
    }
    // O cavalo se move duas casas para cima e uma casa para a direita.
        break;

    case 3:

    for (int i = 0, j = 1; i < j; i++, j--) {
        printf("Cavalo: Baixo\n");
        printf("Cavalo: Baixo\n");
        printf("Cavalo: Esquerda\n");
    }
     // O cavalo se move duas casas para baixo e uma casa para a esquerda.
        break;

    case 4:

    for (int i = 0, j = 1; i < j; i++, j--) {
        printf("Cavalo: Baixo\n");
        printf("Cavalo: Baixo\n");
        printf("Cavalo: Direita\n");
    }
     // O cavalo se move duas casas para baixo e uma casa para a direita.
        break;

    case 5:

    for (int i = 0, j = 1; i < j; i++, j--) {
        printf("Cavalo: Esquerda\n");
        printf("Cavalo: Esquerda\n");
        printf("Cavalo: Cima\n");
    }

     // O cavalo se move duas casas para esquerda e uma casa para a cima.
        break;

    case 6:

    for (int i = 0, j = 1; i < j; i++, j--) {
        printf("Cavalo: Esquerda\n");
        printf("Cavalo: Esquerda\n");
        printf("Cavalo: Baixo\n");
    }
     // O cavalo se move duas casas para esquerda e uma casa para a baixo.
        break;

    case 7:

    for (int i = 0, j = 1; i < j; i++, j--) {
        printf("Cavalo: Direita\n");
        printf("Cavalo: Direita\n");
        printf("Cavalo: Cima\n");
    }
    // O cavalo se move duas casas para direita e uma casa para a cima.
        break;

    case 8:

    for (int i = 0, j = 1; i < j; i++, j--) {
        printf("Cavalo: Direita\n");
        printf("Cavalo: Direita\n");
        printf("Cavalo: Baixo\n");
    }
    // O cavalo se move duas casas para direita e uma casa para a baixo.
        break;

    default:
        printf("Escolha inválida\n"); // Caso o jogador escolha uma opção inválida.
        break;
    }

    return 0;

}
