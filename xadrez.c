#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void Bispo(){
    for(int contador = 0; contador <= 5; (contador % 2) == 0 ? printf("Cima\n") : printf("Direita\n")){
        contador++;
    }
}

void Rainha(){
    int rainha = 1;
    while (rainha <= 6){
        printf("esquerda\n");
        rainha++;
    }
}

void Cavalo(){
    for(int contador = 0; contador <= 3; contador++){
        if(contador == 2){
            printf("Direita\n");
            break;
        }
        printf("Cima\n");
    }
}

void Torre(){
    int contador = 1;
    do{
        printf("direita\n");
        contador++;
    }while(contador <= 5); 
}


int main() {

    printf("Bispo move:\n");
    Bispo();

    printf("\nTorre move:\n");
    Torre();

    printf("\nRainha move:\n");
    Rainha();

    printf("\nCavalo move:\n");
    Cavalo();

    return 0;
}
