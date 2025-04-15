#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {{0}};

    // Posicionamento do navio vertical
    int iVertical = 0, jVertical = 2;
    for (int i = 0; i < 3; i++) tabuleiro[iVertical + i][jVertical] = 1;

    // Posicionamento do navio horizontal
    int iHorizontal = 4, jHorizontal = 0;
    for (int j = 0; j < 4; j++) tabuleiro[iHorizontal][jHorizontal + j] = 2;

    // Exibição de coordenadas dos navios
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < 3; i++) printf("(%d, %d)\n", iVertical + i, jVertical);
    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int j = 0; j < 4; j++) printf("(%d, %d)\n", iHorizontal, jHorizontal + j);

    // Impressão do tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0