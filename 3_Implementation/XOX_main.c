/**
 * @file XOX_main.c
 * @author Purvitha S K
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "XOX.h"


int checkwin();
void Sq_board();

char sq_position[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int main()

{
    
    int player = 1, index, choice;

    char token_mark;
    do
    {
        Sq_board(sq_position);

        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        token_mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && sq_position[1] == '1')
            sq_position[1] = token_mark;
            
        else if (choice == 2 && sq_position[2] == '2')
            sq_position[2] = token_mark;
            
        else if (choice == 3 && sq_position[3] == '3')
            sq_position[3] = token_mark;
            
        else if (choice == 4 && sq_position[4] == '4')
            sq_position[4] = token_mark;
            
        else if (choice == 5 && sq_position[5] == '5')
            sq_position[5] = token_mark;
            
        else if (choice == 6 && sq_position[6] == '6')
            sq_position[6] = token_mark;
            
        else if (choice == 7 && sq_position[7] == '7')
            sq_position[7] = token_mark;
            
        else if (choice == 8 && sq_position[8] == '8')
            sq_position[8] = token_mark;
            
        else if (choice == 9 && sq_position[9] == '9')
            sq_position[9] = token_mark;
            
        else
        {
            printf("sq_position occupied ");

            player--;
            getch();
        }
        index = checkwin(sq_position);

        player++;
    }while (index ==  - 1);
    
    Sq_board(sq_position);
    
    if (index == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}