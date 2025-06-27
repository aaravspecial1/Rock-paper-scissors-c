#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    // Generate a random number between 0 and 99
    int computer = rand() % 3;
    int player;
   /* 0-->snake 
    1-->water 
    2-->gun*/
    printf("Choose 0 for snake 1 for water and 2 for gun\n");
    scanf("%d", &player);
    printf("%d\n", computer);
    if (player==0 && computer==1)
    {
        printf("congratulations You won\n");
    }
    
    else if (player == computer)
    {
        printf("Draw\n");
    
    } 

    else if (player == 1 && computer == 0)
    {
        printf("You lose try again\n");
    }
    else if (player == 1 && computer==2)
    {
        printf("You lose try again\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You won \n");
    }
    
    else if (player == 0 && computer==2)
    {
        printf("You lose try again\n");
    }
    else if (player == 2 && computer==0)
    {
        printf("You won\n");
    }
    
    

    return 0;
}