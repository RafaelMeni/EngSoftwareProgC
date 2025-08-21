#include <stdio.h>

int main() {
    // =======================
    // 1. Movimentação da Torre
    // =======================
    // Torre se move horizontal ou verticalmente
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // =======================
    // 2. Movimentação do Bispo
    // =======================
    // Bispo se move na diagonal (Cima, Direita)
    int casasBispo = 5;
    int i = 0;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // =======================
    // 3. Movimentação da Rainha
    // =======================
    // Rainha se move em todas as direções (aqui vamos simular 8 casas para a esquerda)
    int casasRainha = 8;
    int j = 0;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);
    printf("\n");

    return 0;
}
