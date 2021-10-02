/*
      Title: Lab 6
     Author: Dr. Veronica Minsky
     Editor: Daniel Vazquez
       Date: 10/12/2017

  Objective: This program reads two ACT scores (between 0 and 36) for a student
            and prints the larger.
*/

#include <stdio.h>

//Function Declaration Zone
void instructions(void);
int ReadScore(int*score);
int OutofRange(int score, int*exit);
int max(int score2, int score1);

int main(void)
{
    int score;
    int score1;        // ACT score #1
    int score2;        // ACT score #2
    int exit = 0;      // Determines if it's time to exit the while loop6

    //prints instructions
    instructions();

    //Obtains the first score to be evaluated
    while (exit == 0)
    {
        // obtains a value for score1 by calling ReadScore
        ReadScore(&score);
        score1 = score;
        //If score1 is out of range, print an error message and repeats
        //if (OutOfRange(score1))
        //If score1 is in range, the program moves on.
            //exit = 1;
        OutOfRange(score1);
        if (exit == 1)
            break;
    }

    //Obtains the second number to be evaluated
    while (exit == 0)
    {
        //Obtains a value for score2 by calling ReadScore
        ReadScore(&score);
        score2 = score;
        //If score is out of range, print an error message and repeats
        //if (OutOfRange(score2))
        //If score2 is in range, the program moves on
            //exit = 1;
        OutOfRange(score2);
        if (exit == 1)
            break;
    }

    //Prints the accepted inputs
    printf("\nYour ACT scores were %d and %d \n", score1, score2);
    //Prints the larger score by calling max
    printf("\nThe largest score is %d \n", max(score1, score2));
    return 0;
}

/*
   Function to print instructions on what the program does
   pre: None.
   post: None.
*/
void instructions(void)
{
    printf("This program interactively reads two ACT \n");
    printf("scores and prints the larger \n \n");
}

/*
   Function to read a score interactively
   pre: None.
   post: int score will have a value.
*/
int ReadScore(int*score)
{
    printf("Type an ACT score between 0 and 36: ");
    scanf("%d", score);
}

/*
   Function to determine is the score is valid or not
   pre: score1/score2 is defined in main.
   post: If score1/score2 is out of range, an error prints.
*/
int OutOfRange(int score, int*exit)
{
    if (score > 36 || score < 0)
    {
        printf("That score is impossible. Try again. \n");
        exit = 0;
    }
    else
        exit = 1;
}

/*
   Function to return the larger of the two input numbers
   pre: Both score1 and score2 are evaluated and validated.
   post: The larger of the two will be returned to main.
*/
int max(int score1, int score2)
{
    if (score1 > score2)
        return score1;
    else
        return score2;
}
