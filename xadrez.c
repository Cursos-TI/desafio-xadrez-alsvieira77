#include <stdio.h>
    // Desafio de Xadrez - MateCheck
    // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
    // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
// Constantes para definir o numero de casas que cada peça se move
#define TORRE_MOV 5
#define BISPO_MOV 5
#define RAINHA_MOV 8

int main() {

    int i;

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.    
    // Movimentação da torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 0; i < TORRE_MOV; i++) { // i assume o valor de 0 para iniciar a movimentação e incrementa uma casa enquanto o valor for < 5 (De acordo com a constante de movimentação da torre)
        printf("Direita\n");
    }

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    // Movimentação do bispo - 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n"); 
    i = 0; // novamente i assume o valor de 0 para inciar a movimentação
    while (i < BISPO_MOV) { // enquanto i for menor que 5 (Constante BISPO_MOV) ele ira imprimir na tela os movimentos do bispo
        printf("Cima, Direita\n");
        i++; // incremento do "i" em 1 até que ele se torne > 5 a ação termine
    }
    
    // Movimentação da rainha - 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    i = 0; // i assume o valor de 0 para iniciar a movimentaçao
    do { // Do executa o codigo até atingir o valor de while
        printf("Esquerda\n");
        i++; // Incremento para induzir o final do loop 
    } while (i < RAINHA_MOV); // enquanto i < 8 (RAINHA_MOV) a peça continua se movimentando 
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int movimentoCavalo = 1;
        
        printf("\n");
        printf("\nMovimentação do Cavalo\n");
        while (movimentoCavalo--) { // enquanto movimentoCavalo for maior que 0, o loop continua

            for (int i = 0; i < 2; i++) { // loop para movimentar o cavalo 2 casas para baixo
                printf("Baixo\n"); // imprime "Baixo" para cada movimento para baixo
            }

            printf("Direita\n"); // após mover 2 casas para baixo, move 1 casa para a direita
        }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    return 0;
}