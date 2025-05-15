#include <stdio.h>

int main(){
    // Variáveis para as peças do xadrez.
    int torre = 0, bispo = 0, rainha = 0; 

    //Loop para a torre.
    while (torre < 5) 
    {
        printf("Torre: Direita\n");
        torre++;
    }
    
    // Loop para o bispo.
    do {
        printf("Bispo: Cima, Direita\n");
        bispo++;
    } while (bispo < 5);

    // Loop para a rainha.
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha: Esquerda\n");
    }

    return 0;

}
