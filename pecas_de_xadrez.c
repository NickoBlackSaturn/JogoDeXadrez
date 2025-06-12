#include <stdio.h>

/*
 * Simulação avançada de movimentos de peças de xadrez:
 * - Torre: movimento para a direita (recursivo)
 * - Bispo: movimento diagonal com recursividade + loops aninhados
 * - Rainha: movimento para a esquerda (recursivo)
 * - Cavalo: movimento em "L" com loops aninhados (2 para cima, 1 para direita)
 */

// ----- Função Recursiva: Movimento da Torre (Direita) -----
void moverTorre(int casasRestantes, int passo) {
    if (casasRestantes == 0) return;

    printf("Torre - Direita (%d)\n", passo);
    moverTorre(casasRestantes - 1, passo + 1);
}

// ----- Função Recursiva: Movimento da Rainha (Esquerda) -----
void moverRainha(int casasRestantes, int passo) {
    if (casasRestantes == 0) return;

    printf("Rainha - Esquerda (%d)\n", passo);
    moverRainha(casasRestantes - 1, passo + 1);
}

// ----- Função Recursiva: Movimento do Bispo (Diagonal Cima Direita) -----
void moverBispoRecursivo(int casasRestantes, int passo) {
    if (casasRestantes == 0) return;

    printf("Bispo (Recursivo) - Cima Direita (%d)\n", passo);
    moverBispoRecursivo(casasRestantes - 1, passo + 1);
}

// ----- Função com Loops Aninhados: Movimento do Bispo -----
void moverBispoComLoops(int casas) {
    printf("Bispo (Loops Aninhados) - Movimento Diagonal:\n");
    for (int i = 1; i <= casas; i++) { // vertical (cima)
        for (int j = 1; j <= 1; j++) { // horizontal (direita, sempre 1 por vez)
            printf("Passo %d: Cima Direita\n", i);
        }
    }
}

// ----- Movimento do Cavalo: L (2 para cima, 1 para direita) com loops aninhados -----
void moverCavalo() {
    printf("Cavalo - Movimento em 'L' (Cima x2 + Direita x1):\n");
    int movimentos = 3; // número de "L" que o cavalo irá fazer
    for (int i = 1; i <= movimentos; i++) {
        int cima = 0, direita = 0;

        for (int j = 1; j <= 2; j++) {
            cima++;
            if (cima == 2) break;
        }

        for (int k = 1; k <= 1; k++) {
            direita++;
        }

        printf("Movimento %d: Cima x%d, Direita x%d\n", i, cima, direita);
    }
}

int main() {
    // Número de casas a se mover para Torre, Bispo, Rainha
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Movimento da Torre (Recursivo)
    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre, 1);
    printf("\n");

    // Movimento do Bispo (Recursivo)
    printf("=== Movimento do Bispo (Recursivo) ===\n");
    moverBispoRecursivo(casasBispo, 1);
    printf("\n");

    // Movimento do Bispo (Loops Aninhados)
    printf("=== Movimento do Bispo (Loops Aninhados) ===\n");
    moverBispoComLoops(casasBispo);
    printf("\n");

    // Movimento da Rainha (Recursivo)
    printf("=== Movimento da Rainha ===\n");
    moverRainha(casasRainha, 1);
    printf("\n");

    // Movimento do Cavalo (Loops Aninhados com controle de fluxo)
    printf("=== Movimento do Cavalo ===\n");
    moverCavalo();
    printf("\n");

    return 0;
}
