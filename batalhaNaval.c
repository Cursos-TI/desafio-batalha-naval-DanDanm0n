#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Tamanho do tabuleiro principal
    #define TABULEIRO 10

    // Legenda visual
    #define AGUA 0
    #define NAVIO 3
    #define HABILIDADE 5

    int tamanhotabuleiro = 10, tamanhonavio = 3;

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    int tabuleiro[TABULEIRO][TABULEIRO] = {0};

    int naviohorizontal[3] = {3, 3, 3};

    int naviovertical[3] = {3, 3, 3};

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    int naviodiagonal1[3] = {3, 3, 3};

    int naviodiagonal2[3] = {3, 3, 3};

    int linhanavioH = 0;
    int colunanavioH = 0;

    int linhanavioV = 0;
    int colunanavioV = 5;

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    int linhanavioD1 = 0;
    int colunanavioD1 = 7;

    int linhanavioD2 = 7;
    int colunanavioD2 = 0;
    
    if (tabuleiro[linhanavioH][colunanavioH] == 0 || 
        tabuleiro[linhanavioH][colunanavioH + 1] == 0 || 
        tabuleiro[linhanavioH][colunanavioH + 2] == 0) {
            tabuleiro[linhanavioH][colunanavioH] = naviohorizontal[0]; 
            tabuleiro[linhanavioH][colunanavioH + 1] = naviohorizontal[1]; 
            tabuleiro[linhanavioH][colunanavioH + 2] = naviohorizontal[2];
    } else {
        printf("Sobreposição entre navios detectada!\n");
        return 0;
    }

    if (tabuleiro[linhanavioV][colunanavioV] == 0 || 
        tabuleiro[linhanavioV + 1][colunanavioV] == 0 || 
        tabuleiro[linhanavioV + 2][colunanavioV] == 0) {
            tabuleiro[linhanavioV][colunanavioV] = naviovertical[0];
            tabuleiro[linhanavioV + 1][colunanavioV] = naviovertical[1];
            tabuleiro[linhanavioV + 2][colunanavioV] = naviovertical[2];
    } else {
        printf("Sobreposição entre navios detectada!\n");
        return 0;
    }

    if (tabuleiro[linhanavioD1][colunanavioD1] == 0 || 
        tabuleiro[linhanavioD1 + 1][colunanavioD1 + 1] == 0 || 
        tabuleiro[linhanavioD1 + 2][colunanavioD1 + 2] == 0) {
            tabuleiro[linhanavioD1][colunanavioD1] = naviodiagonal1[0];
            tabuleiro[linhanavioD1 + 1][colunanavioD1 + 1] = naviodiagonal1[1];
            tabuleiro[linhanavioD1 + 2][colunanavioD1 + 2] = naviodiagonal1[2];
    } else {
        printf("Sobreposição entre navios detectada!\n");
        return 0;
    }

    if (tabuleiro[linhanavioD2][colunanavioD2] == 0 || 
        tabuleiro[linhanavioD2 + 1][colunanavioD2 + 1] == 0 || 
        tabuleiro[linhanavioD2 + 2][colunanavioD2 + 2] == 0) {
            tabuleiro[linhanavioD2][colunanavioD2] = naviodiagonal2[0];
            tabuleiro[linhanavioD2 + 1][colunanavioD2 + 1] = naviodiagonal2[1];
            tabuleiro[linhanavioD2 + 2][colunanavioD2 + 2] = naviodiagonal2[2];
    } else {
        printf("Sobreposição entre navios detectada!\n");
        return 0;
    }

    if (tamanhotabuleiro>tamanhonavio) {
        printf("Os navios estão dentro do limite tabuleiro\n");
    } else {
        printf("Os navios são maiores que os limites do tabuleiro\n");
        return 0;
    }
    

    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
        printf("");
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
            printf("%d ", coluna[i]);
              for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
        }
        

    return 0;
}
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

    return 0;
}
