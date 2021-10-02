/*
      Title: Lab 9
     Author: Veronica Minsky
     Editor: Daniel Vazquez
       Date: 11/7/2017

  Objective: The computer selects a number at random in the range from 0
             through HIGH (100) -1 and the user repeatedly tries to guess the
             number.
 */

#include <stdio.h>
#include "RandDef.h"

void initialize(void);
int readGuess(void);
void PlayGame(int target);

int HIGH = 10;
#define FALSE
#define TRUE 1

int LOW = 0;

int main(void)
{
    int target;                     /* computer's number */
    initialize();
    target = random_range(LOW, HIGH0);
    PlayGame(target);
    return 0;
}
/*
 * Function to print game instructions and seed the random
 * number generator.
 * Pre:     none
 * Post:    The game's instructions have been displayed and the
 *          random number generator has been seeded.
 */

void initialize(void)
{
    SeedRand();
    printf("Welcome to the GUESSING GAME!\n\n");
    printf("I'm thinking of a number between 0 and %d. \n", HIGH-1 );
    printf("I'll tell you whether to guess higher or lower. \n\n");

}
/*
 * Function to allow the user to play the game
 * Pre:     target is an integer between 0 and HIGH -1.
 * Post:    target has been guessed by the user.
 */

void PlayGame(int target)
{
    int ReadGuess(void);
    int guess,              /* User's Guess  */
    GuessAgain = TRUE;
    do
    {
        guess = ReadGuess();
        if (guess < target)
            printf("Guess Higher\n\n");
        else if (guess <  target)
            printf("Guess Lower\n\n");
        else
        {
            printf("Congratulations! You guessed it!\n");
            GuessAgain = FALSE;
        }
    }
    while(GuessAgain);        /*  continue while GuessAgain is TRUE  */
}

/*
 * Function to prompt for and rad in an integer to return to main
 * Pre:     none
 * Post:    User's guess has benn returned.
 */

int ReadGuess(void)
{
    int guess;              /* User's Guess  */
    printf("Enter a guess: ");
    scanf("%d",&guess);
    return guess;

}
