#include <stdio.h>

int main(){

    int tabuleiro[10][10] = {0};
    
    // posicionamento do navio 1 horizontal
    for(int i = 0; i < 3; i++){
        tabuleiro[4][2 + i] = 3;
    }

    // posicionamento do navio 2 vertical
    for(int i = 0; i < 3; i++){
        tabuleiro[2 + i][9] = 3;
    }

    // posicionamento do navio 3 diagonal
    for(int i = 0; i < 3; i++){
        tabuleiro[7 + i][0 + i] = 3;
    }

     // posicionamento do navio 4 diagonal
    for(int i = 0; i < 3; i++){
        tabuleiro[1 + i][8 - i] = 3;
    }

    int cone[5][5] = {0};

    int meio = 2; // meio do intervalo [0; 4]

    // construção do cone
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
             if(i < 3 && j >= meio - i && j <= meio + i){
            cone[i][j] = 1;
            }
        }
    }

    int cone_origem_linha = 2;
    int cone_origem_coluna = 2;

    // aplicar no tabuleiro
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            if(cone[i][j] == 1){

                int linha = cone_origem_linha + (i - meio);
                int coluna = cone_origem_coluna + (j - meio);

                if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    //construção da cruz
    int cruz [5][5] = {0};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
             if(i == meio  ||  j == meio){
            cruz[i][j] = 1;
            }
        }
    }

    int cruz_origem_linha = 7;
    int cruz_origem_coluna = 3;

    // aplicar no tabuleiro
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            if(cruz[i][j] == 1){

                int linha = cruz_origem_linha + (i - meio);
                int coluna = cruz_origem_coluna + (j - meio);

                if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                    tabuleiro[linha][coluna] = 6;
                }
            }
        }
    }

    // construção do octaedro
    int octaedro[3][3] = {0};
    int meio_octaedro = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             if(i == meio_octaedro  ||  j == meio_octaedro){
            octaedro[i][j] = 1;
            }
        }
    }

    int octaedro_origem_linha = 7;
    int octaedro_origem_coluna = 8;

    // aplicar no tabuleiro
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            if(octaedro[i][j] == 1){

                int linha = octaedro_origem_linha + (i - meio_octaedro);
                int coluna = octaedro_origem_coluna + (j - meio_octaedro);

                if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                    tabuleiro[linha][coluna] = 7;
                }
            }
        }
    }

    /* Legenda da saída
    0 = água
    3 = navio
    5 = cone
    6 = cruz
    7 = octaedro
    */

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