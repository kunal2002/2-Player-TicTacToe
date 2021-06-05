#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char board[10];
int win=0;
bool check(char board[])
{
    //Checking for X
    //diagonal1 X
    if(board[1] == board[5] && board[5]==board[9] && board[1]=='X')
    {
        win = 1;
        return true;
    }
    //Horizontal1 X
    if(board[1] == board[2] && board[2]==board[3] && board[1]=='X')
    {
        win = 1;
        return true;
    }
    //Vertical1 X
    if(board[1] == board[4] && board[4]==board[7] && board[1]=='X')
    {
        win = 1;
        return true;
    }
    //Diagonal2 X
    if(board[3] == board[5] && board[5]==board[7] && board[3]=='X')
    {
        win = 1;
        return true;
    }
    //Vertical2 X
    if(board[2] == board[5] && board[5]==board[8] && board[2]=='X')
    {
        win = 1;
        return true;
    }
    //Vertical3 X
    if(board[3] == board[6] && board[6]==board[9] && board[3]=='X')
    {
        win = 1;
        return true;
    }
    //Horizontal2 X
    if(board[4] == board[5] && board[5]==board[6] && board[4]=='X')
    {
        win = 1;
        return true;
    }
    //Horizontal3 X
    if(board[7] == board[8] && board[8]==board[9] && board[7]=='X')
    {
        win = 1;
        return true;
    }


    //For O now

    //diagonal1 O
    if(board[1] == board[5] && board[5]==board[9] && board[1]=='O')
    {
        win = 2;
        return true;
    }
    //Horizontal1 X
    if(board[1] == board[2] && board[2]==board[3] && board[1]=='O')
    {
        win = 2;
        return true;
    }
    //Vertical1 X
    if(board[1] == board[4] && board[4]==board[7] && board[1]=='O')
    {
        win = 2;
        return true;
    }
    //Diagonal2 X
    if(board[3] == board[5] && board[5]==board[7] && board[3]=='O')
    {
        win = 2;
        return true;
    }
    //Vertical2 X
    if(board[2] == board[5] && board[5]==board[8] && board[2]=='O')
    {
        win = 2;
        return true;
    }
    //Vertical3 X
    if(board[3] == board[6] && board[6]==board[9] && board[3]=='O')
    {
        win = 2;
        return true;
    }
    //Horizontal2 X
    if(board[4] == board[5] && board[5]==board[6] && board[4]=='O')
    {
        win = 2;
        return true;
    }
    //Horizontal3 X
    if(board[7] == board[8] && board[8]==board[9] && board[7]=='O')
    {
        win = 2;
        return true;
    }

    return false;
}

void showboard()
{
        printf("\t\t  %c    |  %c   |  %c    \n",board[1],board[2],board[3]);
        printf("\t\t|      |      |      |\n");
        printf("\t\t|------|------|------|\n");
        printf("\t\t|  %c   |  %c   |  %c   |\n",board[4],board[5],board[6]);
        printf("\t\t|      |      |      |\n");
        printf("\t\t|------|------|------|\n");
        printf("\t\t|  %c   |  %c   |  %c   |\n",board[7],board[8],board[9]);
        printf("\t\t       |      |       \n");
}


int main()
{
    for(int i=1;i<10;i++)
        board[i]= ' ';

    int spot;
    int turn = 0;
    int flag = 1;
    char choice;
    printf("\t \t \t \t TIC TAC TOE \t \t \t \t \n");
    printf("Player 1 = X \t\t");
    printf("Player 2 = O\n");

    showboard();
    printf("\n");

    while((!check(board)) && turn!=9)
    {
        printf("Player %d's turn \n",flag);
        printf("Enter the box number (starting from 1 to 9) to place your mark  ");
        scanf("%d",&spot);
        if(board[spot]== 'X' || board[spot]=='O')
        {
            printf("Change your spot, this is already filled \n");
        }
        else
        {
            if(flag==1)
            {
                board[spot] = 'X';
                flag = 2;
            }
            else
            {
                
                board[spot] = 'O';
                flag = 1 ;
            }
            turn ++;
            showboard();
        }
    }

    if(turn==9 && check(board)!=true)
    {
        printf("THE MATCH IS A DRAW ");
    }
    else
    {
        if(win==1)
        {
            printf("\t\t\t\t\t ****Player 1 won the match**** ");
        }
        if(win==2)
        {
            printf("\t\t\t\t\t ****Player 2 won the match**** ");
        }
    }

  return 0;
}

