#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 0 and 99
    int randomNumber = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed;
    // printf("Random number: %d\n", randomNumber);

    do
    {
        printf("Guess the number\n");
        scanf("%d", &guessed);
        if (guessed<randomNumber)
        {
            printf("lower number please\n");
        
        }
        else if(randomNumber<guessed)
        {
        printf("higher number please\n");}
            no_of_guesses++;
    } while (guessed != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}