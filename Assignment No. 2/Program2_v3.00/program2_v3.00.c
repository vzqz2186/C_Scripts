/*
      Name: Equation Solver
    Author: Daniel Vazquez
      Date: 9/26/2017

 Objective: E'll figure it out.
 */

#include <time.h>
 #include <stdio.h>
 #include <stdlib.h>

// Function Declaration Zone
void getNumbers(float*a, float*b, float*c);
void solveLinearEquation(float*a, float*b, float*c, float*x);
void solveAbsValEquation(float*a, float*b, float*c, float*x, float*xAV);

int type; //Decides which type of equation the program is solving

int main()
{
    //Variable declaration
    float a;
    float b;
    float c;
    float x;
    float xAV;
    int type;

    //Title
    printf("Equation Solver\n");
    printf("-----------------\n\n");

    //Pick the type of equation to work out
    printf("Type 1 to calculate a linear equation.\n");
    printf("Type 2 to calculate an absolute value equation.\n");
    scanf("%d", &type);

    if (type == 1)
        {
            printf("\n");
            printf("You chose: Linear Equation\n");
            getNumbers(&a, &b, &c);
            solveLinearEquation(&a, &b, &c, &x);
            printf("x = %.4f\n\n", &x);
            return 0;
        }

    else
        if (type == 2)
            {
                printf("\n");
                printf("You chose: Absolute Value Equation\n");
                getNumbers(&a, &b, &c);
                solveAbsValEquation(&a, &b, &c, &x, &xAV);
                printf("x = { %.4f, %.4f }", &x, &xAV);
            }

        else
            if (type != 1 || 2)
                {
                    printf("That was not an option. Logging you off.");
                    return 0;
                }

    return 0;
}

//Gets input from user.
void getNumbers(float*a, float*b, float*c)
{
    printf("Type the first number: ");
    scanf("%f", a);
    printf("Type the first number: ");
    scanf("%f", b);
    printf("Type the third number: ");
    scanf("%f", c);
    return;
}
//By the end of this function, the program will have the three variable to work with.

//Solve linear equation
void solveLinearEquation(float*a, float*b, float*c, float*x)
{
    x = (c - b) / a;
}
//By the end of the function, the user will have his/her linear equation solved.

//Solve absolute value equation
void solveAbsValEquation(float*a, float*b, float*c, float*xAVone, float*xAVtwo)
{
    x = (c - b) / a;       //ax + b = c
    xAV = (-c - b) / a;    //ax + b = -c
}
