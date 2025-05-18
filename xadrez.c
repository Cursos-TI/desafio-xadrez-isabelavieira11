#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Implementação de movimentação das peças de xadrez

int main() {
    // Nível Novato - Movimentação das Peças
    int torremov = 5;
    int bispomov = 5;
    int rainhmov = 8;

    // Implementação de Movimentação da Torre
    int i = 0;
    printf("Torre iniciou o movimento:\n");
    while (i < torremov) 
    {
        printf("| Direita \n");
        i++;
    }
    printf("Torre finalizou o movimento.\n\n");
    // Implementação de Movimentação do Bispo
    i = 0;
    printf("Bispo iniciou o movimento:\n");
    do
    {
        printf("| Cima Direita \n");
        i++;    /* code */
    } while (i < bispomov);
    printf("Bispo finalizou o movimento.\n\n");
    // Implementação de Movimentação da Rainha
    printf("Rainha iniciou o movimento:\n");
    for (i = 0; i < rainhmov; i++)
    {
        printf("| Esquerda \n");
    }
    printf("Rainha finalizou o movimento.\n\n");

    return 0;
}
