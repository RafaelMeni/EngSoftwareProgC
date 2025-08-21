#include <stdio.h>

// ============================
// Funções Recursivas
// ============================

// Movimento recursivo da Torre: move "casas" para a direita
void moverTorre(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);  // chamada recursiva
}

// Movimento recursivo e com loops aninhados do Bispo: diagonal para cima-direita
void moverBispo(int casas) {
    if (casas <= 0) return;
    
    // Loop externo: vertical (para cima)
    for (int i = 0; i < 1; i++) { // neste caso só uma iteração por casa
        // Loop interno: horizontal (para direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    
    moverBispo(casas - 1); // recursão para próxima casa
}

// Movimento recursivo da Rainha: move para esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);  // chamada recursiva
}

// ============================
// Cavalo com loops complexos
// ============================
void moverCavalo() {
    int movimentos = 1; // número de movimentos em "L"
    
    for (int m = 0; m < movimentos; m++) {
        int vert = 0, horiz = 0;

        // Loop duplo: duas casas para cima
        while (vert < 2) {
            printf("Cima\n");
            vert++;
            if (vert > 2) break;  // condicional extra para demonstrar break
        }

        // Loop para mover 1 casa para direita
        for (horiz = 0; horiz < 1; horiz++) {
            if (horiz > 0) continue; // condicional extra para demonstrar continue
            printf("Direita\n");
        }
    }
}

int main() {
    // ============================
    // Torre
    // ============================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // ============================
    // Bispo
    // ============================
    int casasBispo = 5;
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // ============================
    // Rainha
    // ============================
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // ============================
    // Cavalo
    // ============================
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}