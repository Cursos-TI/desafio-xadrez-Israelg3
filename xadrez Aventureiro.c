#include <stdio.h>

int main() {
    // Movimentação da Torre - 5 casas para a Direita, usando estrutura FOR
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo - 5 casas na Diagonal para Cima e Direita, usando estrutura WHILE
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimentação da Rainha - 8 casas para a Esquerda, usando estrutura DO-WHILE
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimentação do Cavalo - Movimento em "L": 2 para baixo e 1 para esquerda
    // Utilizando loops aninhados: FOR externo e WHILE interno
    int passos_baixo = 2;
    int passos_esquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop externo FOR para as duas casas para baixo
    for (int m = 1; m <= passos_baixo; m++) {
        printf("Baixo\n");
        
        // Loop interno WHILE simula espera ou reforço de lógica (didático para o desafio)
        int n = 0;
        while (n < 1) {
            // Simula uma lógica que poderia acontecer dentro da movimentação
            n++;
        }
    }

    // Após as duas casas para baixo, uma casa para esquerda
    int l = 0;
    while (l < passos_esquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}