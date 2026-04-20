#include <stdio.h>

int main(){

    int tabuleiro[10][10] = {0};
    
    // posicionamento do navio 1 horizontal
    for(int i = 0; i < 3; i++){
        tabuleiro[4][2 + i] = 3;
    }

    // posicionamento do navio 2 vertical
    for(int i = 0; i < 3; i++){
        tabuleiro[6 + i][8] = 3;
    }

    // posicionamento do navio 3 diagonal
    for(int i = 0; i < 3; i++){
        tabuleiro[7 + i][0 + i] = 3;
    }

     // posicionamento do navio 4 diagonal
    for(int i = 0; i < 3; i++){
        tabuleiro[1 + i][8 - i] = 3;
    }


        // imprimir tabuleiro
        printf("*** TABULEIRO *** \n");
        
    for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");  
}
        printf("\n");
    
    return 0;
}