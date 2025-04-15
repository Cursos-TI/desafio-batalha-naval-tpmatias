#include <stdio.h>

#define TAMANHO 5

void imprimir(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }
}

int main() {
    int cone[TAMANHO][TAMANHO] = {{0}}, octaedro[TAMANHO][TAMANHO] = {{0}}, cruz[TAMANHO][TAMANHO] = {{0}};
    int centro = TAMANHO / 2;

    // Cone
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) cone[i][j] = 1;
        }
    }

    // Octaedro
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (abs(i - centro) + abs(j - centro) <= 2) octaedro[i][j] = 1;
        }
    }

    // Cruz
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (i == centro || j == centro) cruz[i][j] = 1;
        }
    }

    printf("Cone:\n");
    imprimir(cone);
    printf("\nOctaedro:\n");
    imprimir(octaedro);
    printf("\nCruz:\n");
    imprimir(cruz);

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