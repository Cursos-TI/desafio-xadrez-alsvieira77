#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) { // Loop externo para o movimento vertical
        for (int j = 0; j < casas; j++) { // Loop interno para o movimento horizontal
            if (i == j) { // Condição para garantir movimento diagonal
                printf("Cima, Direita\n");
            }
        }
    }
}

int main(){

        int casasTorre = 5;
        int casasRainha = 8;
        int casasBispo = 5;

        // Movimentação da torre - 5 casas para a direita
        printf("Movimentação da Torre: \n");
        moverTorre(casasTorre);

        // Movimentação do bispo - 5 casas na diagonal para cima e à direita
        printf("\nMovimentação da Bispo: \n");
        moverBispo(casasBispo);

        // Movimentação da rainha - 8 casas para a esquerda
        printf("\nMovimentação da Rainha: \n"); 
        moverRainha(casasRainha);

        // Movimentação do cavalo - 2 casas para cima e uma para a direita
        int movimentosCavalo = 2; // Número de movimentos em "L"    
        int i;  
        printf("\n");
        printf("\nMovimentação do Cavalo\n"); 
        for (i = 0; i < movimentosCavalo; i++){
            printf("Cima\n");
        }
        printf("Direita\n");
            
        return 0;
}