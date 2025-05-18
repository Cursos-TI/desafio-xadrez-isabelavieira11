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
    while (i < torremov) 
    {
        printf("Torre moveu uma casa para a direita \n");
        i++;
    }
    // Implementação de Movimentação do Bispo
    i = 0;
    do
    {
        printf("Bispo moveu uma casa para a diagonal cima-direita \n");
        i++;    /* code */
    } while (i < bispomov);
    // Implementação de Movimentação da Rainha
    for (i = 0; i < rainhmov; i++)
    {
        printf("Rainha moveu uma casa para a esquerda \n");
    }

    return 0;
}
