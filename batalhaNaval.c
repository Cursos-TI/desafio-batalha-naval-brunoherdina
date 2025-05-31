#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define TAMANHO 10

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void posicionarNavios(int tabuleiro[TAMANHO][TAMANHO]) {
    // Posicionar navio horizontal na linha 3 (índice 2)
    for(int i = 0; i < 3; i++) {
        tabuleiro[2][3 + i] = 3;  // Posições D3, E3, F3
    }
    
    // Posicionar navio vertical na coluna H (índice 7)
    for(int i = 0; i < 3; i++) {
        tabuleiro[5 + i][7] = 3;  // Posições H6, H7, H8
    }
}

void exibirCoordenadas(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nPosições do navio horizontal:\n");
    for(int j = 0; j < TAMANHO; j++) {
        if(tabuleiro[2][j] == 3) {
            printf("Parte do navio na posição: (3, %c)\n", 'A' + j);
        }
    }
    
    printf("\nPosições do navio vertical:\n");
    for(int i = 0; i < TAMANHO; i++) {
        if(tabuleiro[i][7] == 3) {
            printf("Parte do navio na posição: (%d, H)\n", i + 1);
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTABULEIRO BATALHA NAVAL\n");
    printf("  A B C D E F G H I J\n");
    for(int i = 0; i < TAMANHO; i++) {
        if(i == 9) {
            printf("%d", i + 1);
        } else {
            printf("%d ", i + 1);
        }
        for(int j = 0; j < TAMANHO; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    
    // Inicializa o tabuleiro com zeros
    inicializarTabuleiro(tabuleiro);
    
    // Posiciona os navios no tabuleiro
    posicionarNavios(tabuleiro);
    
    // Exibe as coordenadas dos navios
    exibirCoordenadas(tabuleiro);
    
    // Exibe o tabuleiro completo
    exibirTabuleiro(tabuleiro);
    
    return 0;
}
