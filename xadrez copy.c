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

    return 0;
}
