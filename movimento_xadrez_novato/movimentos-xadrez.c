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
    printf("Selecione quel peça você quer mover: ");
    scanf("%d", &piece);
    printf("\n");

    if(piece != 1 && piece != 2 && piece != 3){
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
            printf("Opção U - Diagonal Superior Direita (up--right) \n");
            printf("Opção D - Diagonal Inferior Esquerda (down--left) \n");
            printf("Opção L - Diagonal Superior Esquerda (up--left) \n");
            printf("Opção R - Diagonal Inferior Direita (down--right) \n");
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

        case 3:
            printf("Opção U - Cima (up) \n");
            printf("Opção D - Baixo (down) \n");
            printf("Opção L - Esquerda (left) \n");
            printf("Opção R - Direita (right) \n");
            printf("Opção 1 - Diagonal Superior Direita (up-right) \n");
            printf("Opção 2 - Diagonal Inferior Esquerda (down-left) \n");
            printf("Opção 3 - Diagonal Superior Esquerda (up-left) \n");
            printf("Opção 4 - Diagonal Inferior Direita (down-right) \n");
            printf("Em qual direção você deseja mover a peça: ");
            scanf(" %c", &direction);
            printf("\n");

             if(
                direction != 'U' && direction != 'u' &&
                direction != 'D' && direction != 'd' &&
                direction != 'L' && direction != 'l' &&
                direction != 'R' && direction != 'r' &&
                direction != '1' && direction != '2' &&
                direction != '3' && direction != '4'
            ){
                printf("Direção inválida!");
                return 0;
            }
        break;
    
        default:
        break;
    }
    
    

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
                    case 'U':
                    case 'u': 
                        printf("Cima Direita ");
                    break;

                    case 'D':
                    case 'd': 
                        printf("Baixo Esquerda ");
                    break;

                    case 'L':
                    case 'l': 
                        printf("Cima Esquerda ");
                    break;

                    case 'R':
                    case 'r': 
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
                    
                    case '1':
                        printf("Cima Direita ");
                    break;

                    case '2': 
                        printf("Baixo Esquerda ");
                    break;

                    case '3': 
                        printf("Cima Esquerda ");
                    break;

                    case '4': 
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
        
        default:
            printf("Opção inválida!\n");
            return 0;
        break;
    }

    printf("\n");
    printf("FIM DA MOVIMENTAÇÂO");

    return 0;
}