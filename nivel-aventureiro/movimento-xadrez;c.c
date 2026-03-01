#include <stdio.h>

int main(){
    int piece, squares, movements_done;
    char direction;


    printf("========================\n");
    printf("     *** Xadrez ***     \n");
    printf("========================\n");
    printf("\n");

    printf("Peças\n");
    printf("------------------------\n");
    printf("\n");
    printf("Opção 1 - Torre \n");
    printf("Opção 2 - Bispo \n");
    printf("Opção 3 - Rainha \n");
    printf("Opçao 4 - Cavalo\n");
    printf("Selecione quel peça você quer mover: ");
    scanf("%d", &piece);
    printf("\n");

    if(piece != 1 && piece != 2 && piece != 3 && piece != 4){
        printf("Peça inválida!");
        return 0;
    }

    printf("Direção\n");
    printf("------------------------\n");
    printf("\n");

    switch (piece){
        case 1:
            printf("Opção U - Cima (up) \n");
            printf("Opção D - Baixo (down) \n");
            printf("Opção L - Esquerda (left) \n");
            printf("Opção R - Direita (right) \n");
            printf("Em qual direção você deseja mover a peça: ");
            scanf(" %c", &direction);
            printf("\n");

            if(
                direction != 'U' && direction != 'u' &&
                direction != 'D' && direction != 'd' &&
                direction != 'L' && direction != 'l' &&
                direction != 'R' && direction != 'r'
            ){
                printf("Direção inválida!");
                return 0;
            }
        break;

        case 2:
            printf("Opção Q - Diagonal Superior Esquerda (up-left) \n");
            printf("Opção E - Diagonal Superior Direita (up-right) \n");
            printf("Opção Z - Diagonal Inferior Esquerda (down-left) \n");
            printf("Opção C - Diagonal Inferior Direita (down-right) \n");
            printf("Em qual direção você deseja mover a peça: ");
            scanf(" %c", &direction);
            printf("\n");

            if(
                direction != 'Q' && direction != 'q' &&
                direction != 'E' && direction != 'e' &&
                direction != 'Z' && direction != 'z' &&
                direction != 'C' && direction != 'c'
            ){
                printf("Direção inválida!");
                return 0;
            }
        break;

        case 3:
            printf("Opção U - Cima (up) \n");
            printf("Opção D - Baixo (down) \n");
            printf("Opção L - Esquerda (left) \n");
            printf("Opção R - Direita (right) \n");
            printf("Opção Q - Diagonal Superior Esquerda (up-left) \n");
            printf("Opção E - Diagonal Superior Direita (up-right) \n");
            printf("Opção Z - Diagonal Inferior Esquerda (down-left) \n");
            printf("Opção C - Diagonal Inferior Direita (down-right) \n");
            printf("Em qual direção você deseja mover a peça: ");
            scanf(" %c", &direction);
            printf("\n");

             if(
                direction != 'U' && direction != 'u' &&
                direction != 'D' && direction != 'd' &&
                direction != 'L' && direction != 'l' &&
                direction != 'R' && direction != 'r' &&
                direction != 'Q' && direction != 'q' &&
                direction != 'E' && direction != 'e' &&
                direction != 'Z' && direction != 'z' &&
                direction != 'C' && direction != 'c'
            ){
                printf("Direção inválida!");
                return 0;
            }
        break;
    
        case 4:
            printf("Opção Q - Diagonal Superior Esquerda (up-left) \n");
            printf("Opção E - Diagonal Superior Direita (up-right) \n");
            printf("Opção Z - Diagonal Inferior Esquerda (down-left) \n");
            printf("Opção C - Diagonal Inferior Direita (down-right) \n");
            printf("Em qual direção você deseja mover a peça: ");
            scanf(" %c", &direction);
            printf("\n");

            if(
                direction != 'Q' && direction != 'q' &&
                direction != 'E' && direction != 'e' &&
                direction != 'Z' && direction != 'z' &&
                direction != 'C' && direction != 'c'
            ){
                printf("Direção inválida!");
                return 0;
            }
        break;
    }
    
    
    if(piece != 4){
        printf("Casas\n");
        printf("------------------------\n");
        printf("\n");
        printf("(min = 1 | máx = 8)\n");
        printf("quantas casas você deseja se mover: ");
        scanf("%d", &squares);

        if(squares < 1 || squares > 8){
        printf("Número de casas inválido!\n");
        return 0;
        }

        printf("\n");
        printf("------------------------\n");
        printf("\n");
    }

    switch (piece)
    {
        case 1:
            printf("Peça selecionada [Torre]\n");
            printf("Movimentos: ");

            movements_done = 1; 
            while(movements_done <= squares){
                switch (direction)
                {
                    case 'U':
                    case 'u': 
                        printf("Cima ");
                    break;

                    case 'D':
                    case 'd': 
                        printf("Baixo ");
                    break;

                    case 'L':
                    case 'l': 
                        printf("Esquerda ");
                    break;

                    case 'R':
                    case 'r': 
                        printf("Direita ");
                    break;
                    
                    
                    default:
                        printf("Direção não reconhecida!");
                        return 0;
                    break;
                }
                
                movements_done++;
            }

            printf("\n");
        break;

        case 2:
            printf("Peça selecionada [Bispo]\n");
            printf("Movimentos: ");

            movements_done = 1;

            do{
                switch(direction)
                {
                    case 'Q':
                    case 'q': 
                        printf("Cima Esquerda ");
                    break;

                    case 'E':
                    case 'e': 
                        printf("Cima Direita ");
                    break;

                    case 'Z':
                    case 'z': 
                        printf("Baixo Esquerda ");
                    break;

                    case 'C':
                    case 'c': 
                        printf("Baixo Direita ");
                    break;
                    
                    default:
                        printf("Direção não reconhecida!");
                        return 0;
                    break;
                }

                movements_done++;
                
            }while(movements_done <= squares);

            printf("\n");
        break;

        case 3:
            printf("Peça selecionada [Rainha]\n");
            printf("Movimentos: ");

            for(int movements = 0; movements < squares; movements++){
                switch (direction)
                {
                    case 'U':
                    case 'u': 
                        printf("Cima ");
                    break;

                    case 'D':
                    case 'd':
                        printf("Baixo ");
                    break;

                    case 'L':
                    case 'l': 
                        printf("Esquerda ");
                    break;

                    case 'R':
                    case 'r': 
                        printf("Direita ");
                    break;
                    
                    case 'Q':
                    case 'q': 
                        printf("Cima Esquerda ");
                    break;

                    case 'E':
                    case 'e': 
                        printf("Cima Direita ");
                    break;

                    case 'Z':
                    case 'z': 
                        printf("Baixo Esquerda ");
                    break;

                    case 'C':
                    case 'c': 
                        printf("Baixo Direita ");
                    break;
                    
                    default:
                        printf("Direção não reconhecida!");
                        return 0;
                    break;
                }
            }

            printf("\n");
        break;

        case 4:
            printf("Peça selecionada [Cavalo]\n");
            printf("Movimentos: ");

            switch (direction)
            {
                case 'Q':
                case 'q': 
                    for(int y = 1; y < 2; y++){
                        for (int x = 1; x < 3; x++){
                            printf("Cima ");
                        }

                        printf("Esquerda\n");
                    }
                break;

                case 'E':
                case 'e': 
                    int moveY = 0;

                    do{
                        
                        for(int x = 1; x <= 2; x++){
                            printf("Cima ");
                        }

                        printf("Direita\n");
                        moveY++;

                    }while (moveY < 1);
                break;

                case 'Z':
                case 'z': 
                    int move = 0;
                    while(move < 3){
                        while(move < 2){
                            printf("Baixo ");
                            move++;
                        }

                        printf("Esquerda\n");
                        move++;
                    }
                break;

                case 'C':
                case 'c': 
                    for(int y = 1; y < 2; y++){
                        for (int x = 1; x < 3; x++){
                            printf("Baixo ");
                        }

                        printf("Direita\n");
                    };
                break;
                
                default:
                    printf("Direção não reconhecida!");
                    return 0;
                break;
            }
        
            printf("\n");

            /*forma mais curta
            int moves = 0;
            while(moves < 3){
                while(moves < 2){
                    if( direction == 'q' || direction == 'Q' || 
                        direction == 'e' || direction == 'E'){
                            printf("Cima ");
                        }else{
                            printf("Baixo ");
                        }
                    moves++;
                }

                if( direction == 'q' || direction == 'Q' || 
                    direction == 'z' || direction == 'Z'){
                        printf("Esquerda\n");
                    }else{
                        printf("Direita\n");
                    }
                moves++;
            }
            */
        break;
    }

    printf("\n");
    printf("FIM DA MOVIMENTAÇÂO");

    return 0;
}