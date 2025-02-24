#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça. Para movimentos na diagonal (Bispo), imprimir a combinação de duas direções. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");

// Função recursiva para movimentação do Bispo 
void movimentoBispo(int numCasasBispo) {
    if (numCasasBispo > 0) {
        printf("Cima Direita\n");
        movimentoBispo(numCasasBispo - 1);
    }
}

// Função recursiva para movimentação da Torre
void movimentoTorre(int numCasaTorre) {
    if (numCasaTorre > 0) {
        printf("Direita\n");
        movimentoTorre(numCasaTorre - 1);
    }
}

// Função recursiva para movimentação da Rainha
void movimentoRainha(int numCasaRainha) {
    if (numCasaRainha > 0) {
        printf("Esquerda\n");
        movimentoRainha(numCasaRainha - 1);
    }
}

// Função para movimentação do Cavalo usando for com múltiplas variáveis e condições avançadas
void movimentoCavalo(int numCasaCavalo) {
    // enquanto i aumenta e j diminui, imprime Cima. Quando i=j, imprime Direita
    for (int i = 0, j=numCasaCavalo+1; i<numCasaCavalo-1 || j>1; i++, j--) {
        if (j>i)
        {
            printf("Cima\n");
        }
        else if (j==i)
        {
            printf("Direita\n");
        }
        
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int numCasasBispo = 5;
    const int numCasaTorre = 5;
    const int numCasaRainha = 8;
    const int numCasaCavalo = 3;
    int i=0;

    // Implementação de Movimentação do Bispo
    // Movimento diagonal do bispo representado por cima e à direita. 
    printf("Movimento do Bispo:\n");
    while (i < numCasasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");  

    // Implementação de Movimentação da Torre
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= numCasaTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <numCasaRainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Loops aninhados para simular a movimentação do Cavalo em L: dois passor para baixo e um para esquerda.
    printf("Movimento do Cavalo:\n");
    for (i=0; i<numCasaCavalo; i++) {
        int k=0; // declara contador para controle do loop interno
        while (k < numCasaCavalo-1)
            {
                printf("Baixo\n");
                k++;
            }
        printf("Esquerda\n");
        break; // interrompe o loop externo
    } 
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    printf ("\n\n ********* Movimentação de peças usando funções recursivas *********\n");
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    // Chama função de movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    movimentoBispo(numCasasBispo);

    // Chama função de movimentação da Torre
    printf("\nMovimento da Torre:\n");
    movimentoTorre(numCasaTorre);

    // Chama função de movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    movimentoRainha(numCasaRainha);

    // Chama função de movimentação do Cavalo
    printf("\nMovimento do Cavalo:\n");
    movimentoCavalo(numCasaCavalo);

    return 0;
}
