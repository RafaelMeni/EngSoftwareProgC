#include <stdio.h>

#define TAM_TAB 10
#define TAM_HAB 5

int main() {
    // =======================
    // 1. Inicialização do Tabuleiro
    // =======================
    int tabuleiro[TAM_TAB][TAM_TAB] = {0};

    // =======================
    // 2. Posicionamento de Navios
    // =======================
    // Navio Horizontal
    for (int i = 0; i < 3; i++) tabuleiro[1][2 + i] = 3;

    // Navio Vertical
    for (int i = 0; i < 3; i++) tabuleiro[5 + i][7] = 3;

    // Navio Diagonal Descendente (\)
    for (int i = 0; i < 3; i++) tabuleiro[0 + i][0 + i] = 3;

    // Navio Diagonal Ascendente (/)
    for (int i = 0; i < 3; i++) tabuleiro[7 - i][0 + i] = 3;

    // =======================
    // 3. Definição das Habilidades
    // =======================
    int cone[TAM_HAB][TAM_HAB] = {0};
    int cruz[TAM_HAB][TAM_HAB] = {0};
    int octaedro[TAM_HAB][TAM_HAB] = {0};

    int centro = TAM_HAB / 2;

    // --- Cone (triângulo para baixo) ---
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = centro - i; j <= centro + i; j++) {
            if (j >= 0 && j < TAM_HAB)
                cone[i][j] = 1;
        }
    }

    // --- Cruz ---
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (i == centro || j == centro)
                cruz[i][j] = 1;
        }
    }

    // --- Octaedro (losango) ---
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro)
                octaedro[i][j] = 1;
        }
    }

    // =======================
    // 4. Ponto de origem das habilidades no tabuleiro
    // =======================
    int origemConeLinha = 0, origemConeColuna = 5;
    int origemCruzLinha = 5, origemCruzColuna = 2;
    int origemOctaedroLinha = 7, origemOctaedroColuna = 7;

    // =======================
    // 5. Aplicar Habilidades ao Tabuleiro
    // =======================
    // Valor 5 representa área afetada

    // --- Cone ---
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int linhaTab = origemConeLinha + i;
            int colTab = origemConeColuna + (j - centro);
            if (linhaTab >= 0 && linhaTab < TAM_TAB && colTab >= 0 && colTab < TAM_TAB) {
                if (cone[i][j] == 1 && tabuleiro[linhaTab][colTab] == 0)
                    tabuleiro[linhaTab][colTab] = 5;
            }
        }
    }

    // --- Cruz ---
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int linhaTab = origemCruzLinha + (i - centro);
            int colTab = origemCruzColuna + (j - centro);
            if (linhaTab >= 0 && linhaTab < TAM_TAB && colTab >= 0 && colTab < TAM_TAB) {
                if (cruz[i][j] == 1 && tabuleiro[linhaTab][colTab] == 0)
                    tabuleiro[linhaTab][colTab] = 5;
            }
        }
    }

    // --- Octaedro ---
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int linhaTab = origemOctaedroLinha + (i - centro);
            int colTab = origemOctaedroColuna + (j - centro);
            if (linhaTab >= 0 && linhaTab < TAM_TAB && colTab >= 0 && colTab < TAM_TAB) {
                if (octaedro[i][j] == 1 && tabuleiro[linhaTab][colTab] == 0)
                    tabuleiro[linhaTab][colTab] = 5;
            }
        }
    }

    // =======================
    // 6. Exibir Tabuleiro com Habilidades
    // =======================
    printf("=== Tabuleiro Batalha Naval com Habilidades ===\n\n");
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
