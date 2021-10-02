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
int max(int score2, int score1);

int main(void)
{
    int score;
    int score1;        // ACT score #1
    int score2;        // ACT score #2
    int exit = 0;

    //prints instructions
    instructions();
    // obtains a value for score1 by calling ReadScore

    while (exit == 0)
    {
        ReadScore(&score);
        score1 = score;
        if (score > 36 || score <0)
        {
            printf("That score is impossible. Try again. \n");
            exit = 0;
        }
        else
        {
            exit = 1;
        }
        if (exit == 1)
            break;
    }

    exit = 0;

    while (exit == 0)
    {
        ReadScore(&score);
        score2 = score;
        // if score2 is out of range, print an error message
        if (score > 36 || score <0)
        {
            printf("That score is impossible. Try again. \n");
            exit = 0;
        }
        else
        {
            exit = 1;
        }
        if (exit == 1)
            break;
    }
    printf("\nYour ACT scores were %d and %d \n", score1, score2);
    // else using function max print larger score  */
    printf("\nThe largest score is %d \n", max(score1, score2));
    return 0;
}


//Function to print instructions on what the program does
void instructions(void)
{
    printf("This program interactively reads two ACT \n");
    printf("scores and prints the larger \n \n");
}

//Function to read a score interactively
int ReadScore(int*score)
{
    printf("Type an ACT score between 0 and 36: ");
    scanf("%d", score);
}

//Function to return the maximum of two integer parameters
int max(int score1, int score2)
{
    if (score1 > score2)
        return score1;
    else
        return score2;
}
