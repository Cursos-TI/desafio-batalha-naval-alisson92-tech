#include <stdio.h>

int main(){

    int tabuleiro[10][10] = {0};
    
    // posicionamento do navio 1 horizontal
    for(int i = 0; i < 3; i++){
        tabuleiro[4][2 + i] = 3;
    }

    // posicionamento do navio 2 vertical
    for(int j = 0; j < 3; j++){
        tabuleiro[6 + j][8] = 3;
    }

        // imprimir tabuleiro
        printf("***Tabuleiro*** \n");
        
    for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        printf(" %d ", tabuleiro[i][j]);
    }
    printf("\n");  
}
        printf("\n");
    
    return 0;
}