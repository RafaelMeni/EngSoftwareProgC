#include <stdio.h>

int main() {
    // =======================
    // 1. Inicialização do Tabuleiro
    // =======================
    int tabuleiro[10][10] = {0}; // 10x10, todas posições inicializadas com 0 (água)

    // =======================
    // 2. Definição dos Navios
    // =======================
    int tamanhoNavio = 3;

    // Coordenadas iniciais do navio horizontal
    int linhaH = 2; // terceira linha (índice 2)
    int colunaH = 1; // segunda coluna (índice 1)

    // Coordenadas iniciais do navio vertical
    int linhaV = 5; // sexta linha (índice 5)
    int colunaV = 7; // oitava coluna (índice 7)

    // =======================
    // 3. Posicionamento do Navio Horizontal
    // =======================
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaH][colunaH + i] = 3; // preenche horizontalmente
    }

    // =======================
    // 4. Posicionamento do Navio Vertical
    // =======================
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = 3; // preenche verticalmente
    }

    // =======================
    // 5. Exibição do Tabuleiro
    // =======================
    printf("=== Tabuleiro Batalha Naval ===\n\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n"); // nova linha após cada linha do tabuleiro
    }

    return 0;
}
