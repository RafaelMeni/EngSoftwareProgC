#include <stdio.h>

int main() {
    // =======================
    // 1. Inicialização do Tabuleiro
    // =======================
    int tabuleiro[10][10] = {0}; // 10x10, todas posições iniciadas com 0 (água)

    int tamanhoNavio = 3;

    // =======================
    // 2. Coordenadas iniciais dos Navios
    // =======================

    // Navio Horizontal
    int linhaH = 1, colunaH = 2;

    // Navio Vertical
    int linhaV = 5, colunaV = 7;

    // Navio Diagonal Descendente (\)
    int linhaD1 = 0, colunaD1 = 0;

    // Navio Diagonal Ascendente (/)
    int linhaD2 = 7, colunaD2 = 0;

    // =======================
    // 3. Posicionamento dos Navios
    // =======================

    // --- Navio Horizontal ---
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // --- Navio Vertical ---
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // --- Navio Diagonal Descendente (\) ---
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }

    // --- Navio Diagonal Ascendente (/) ---
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaD2 - i][colunaD2 + i] = 3;
    }

    // =======================
    // 4. Exibição do Tabuleiro
    // =======================
    printf("=== Tabuleiro Batalha Naval ===\n\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
