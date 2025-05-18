#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Implementação de movimentação das peças de xadrez

int main() {
    // Nível Novato - Movimentação das Peças
    int torremov = 5;
    int bispomov = 5;
    int rainhmov = 8;
    //fim das variáveis de movimentação das peças

    // Implementação de Movimentação da Torre
    // A movimentação da torre é feita em linha reta, tanto na vertical quanto na horizontal.
    // A torre pode se mover quantas casas quiser, desde que não haja nenhuma peça no caminho.
    int i = 0;
    printf("Torre iniciou o movimento:\n");
    while (i < torremov) 
    {
        printf("| Direita \n");
        i++;
    }
    printf("Torre finalizou o movimento.\n\n");

    // Implementação de Movimentação do Bispo
    // O bispo se move em diagonal, quantas casas quiser, desde que não haja nenhuma peça no caminho.
    // O bispo pode se mover em qualquer direção diagonal.
    i = 0;
    printf("Bispo iniciou o movimento:\n");
    do
    {
        printf("| Cima Direita \n");
        i++;    /* code */
    } while (i < bispomov);
    printf("Bispo finalizou o movimento.\n\n");
    
    // Implementação de Movimentação da Rainha
    // A rainha se move em linha reta, tanto na vertical quanto na horizontal, e também em diagonal.
    // A rainha pode se mover quantas casas quiser, desde que não haja nenhuma peça no caminho.
    printf("Rainha iniciou o movimento:\n");
    for (i = 0; i < rainhmov; i++)
    {
        printf("| Esquerda \n");
    }
    printf("Rainha finalizou o movimento.\n\n");

    return 0;
}
