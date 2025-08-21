#include <stdio.h>

int main() {
    // =======================
    // Movimentos anteriores
    // =======================
    
    // Torre: 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo: 5 casas na diagonal (Cima e Direita)
    int casasBispo = 5;
    int i = 0;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // Rainha: 8 casas para a esquerda
    int casasRainha = 8;
    int j = 0;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);
    printf("\n");

    // =======================
    // Cavalo: Movimento em "L"
    // =======================
    // O Cavalo se move 2 casas para baixo e 1 casa para a esquerda
    int movimentosCavalo = 1; // número de movimentos em L a executar
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    for (int m = 0; m < movimentosCavalo; m++) {
        // Loop while para mover 2 casas para baixo
        int k = 0;
        while (k < 2) {
            printf("Baixo\n");
            k++;
        }
        // Depois mover 1 casa para a esquerda
        printf("Esquerda\n");
    }

    printf("\n");

    return 0;
}
