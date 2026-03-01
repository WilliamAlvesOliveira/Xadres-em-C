#include <stdio.h>

void moveTorre(int movements){
    if(movements > 0){
        printf("Direita\n");
        moveTorre(movements - 1);
    }
}

void moveBishap(int movements){
    //5 casas na diagonar superior direita
    //loop aninhado esterno = vertical interno = horizontal
    if(movements > 0){
        int moveY = 0, moveX = 0; //contador de quantos movimentos foram feitos em cada eixo

        while(moveY < 1){
            printf("Cima ");

            while(moveX < 1){
                printf("Direita\n");
                moveX++;
            }
            
            moveY++;
        }

        moveBishap(movements - 1);
    }
}

void moveQueen(int movements){
    //oito casas a esquerda
    if(movements == 0){return;}

    printf("Esquerda\n");
    moveQueen(movements - 1);
}

int main(){

    printf("Peça  [Torre]\n");
    moveTorre(5);
    printf("\n");

    printf("Peça [Bispo]\n");
    moveBishap(5);
    printf("\n");

    printf("Peça selecionada [Rainha]\n");
    moveQueen(8);
    printf("\n");

    //movimento baixo baixo esquerda
    printf("Peça selecionada [Cavalo]\n");
    int y = 2, x = 1;

    while(y > 0){
        printf("Cima\n");
        y--;
        while(x > y){
            printf("Direita\n");
            x--;
        }
    }

    printf("\n");

    printf("\n");
    printf("FIM DA MOVIMENTAÇÂO");

    return 0;
}