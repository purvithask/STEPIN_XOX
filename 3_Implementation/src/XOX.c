#include "XOX.h"

int checkwin(char sq_position[])

{
    
    if (sq_position[1] == sq_position[2] && sq_position[2] == sq_position[3])
        return 1;
        
    else if (sq_position[4] == sq_position[5] && sq_position[5] == sq_position[6])
        return 1;
        
    else if (sq_position[7] == sq_position[8] && sq_position[8] == sq_position[9])
        return 1;
        
    else if (sq_position[1] == sq_position[4] && sq_position[4] == sq_position[7])
        return 1;
        
    else if (sq_position[2] == sq_position[5] && sq_position[5] == sq_position[8])
        return 1;
        
    else if (sq_position[3] == sq_position[6] && sq_position[6] == sq_position[9])
        return 1;
        
    else if (sq_position[1] == sq_position[5] && sq_position[5] == sq_position[9])
        return 1;
        
    else if (sq_position[3] == sq_position[5] && sq_position[5] == sq_position[7])
        return 1;
        
    else if (sq_position[1] != '1' && sq_position[2] != '2' && sq_position[3] != '3' &&
        sq_position[4] != '4' && sq_position[5] != '5' && sq_position[6] != '6' && sq_position[7] 
        != '7' && sq_position[8] != '8' && sq_position[9] != '9')

        return 0;
    else
        return  - 1;
}



void Sq_board(char sq_position[])
{
    //char sq_position[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    system("cls");
    printf("\n\n\tXOX\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", sq_position[1], sq_position[2], sq_position[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", sq_position[4], sq_position[5], sq_position[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", sq_position[7], sq_position[8], sq_position[9]);

    printf("     |     |     \n\n");
}

