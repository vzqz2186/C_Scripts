/*
      Name: Equation Solver
    Author: Daniel Vazquez
      Date: 9/26/2017

 Objective: Write a program that will either solve a linear equation or an
            absolute value equation.
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

// Function Declaration Zone
void getNumbers(float*a, float*b, float*c);
void solveLinearEquation(float a, float b, float c);
void solveAbsValEquation(float a, float b, float c);

int main()
{
    //Variable declaration
    float a;
    float b;
    float c;
    int type;  //Decides which type of equation the program is solving

    //Title
    printf("Equation Solver\n");
    printf("-----------------\n\n");

    //Pick the type of equation to work out
    printf("Type 1 to calculate a linear equation.\n");
    printf("Type 2 to calculate an absolute value equation.\n");
    scanf("%d", &type);
    //if "type is 1, the program will solve a linear equation.
    if (type == 1)
        {
            printf("\n");
            printf("You chose: Linear Equation\n");
            getNumbers(&a, &b, &c);
            //printf("In main, a=%.1f b=%.1f c=%.1f \n", a, b, c); was used for testing.
            solveLinearEquation(a, b, c);
            return 0;
        }

    else
        //If "type" is 2, the program will solve an absolute value equation.
        if (type == 2)
            {
                printf("\n");
                printf("You chose: Absolute Value Equation\n");
                getNumbers(&a, &b, &c);
                //printf("In main, a=%.f b=%.f c=%.f \n", a, b, c); was used for testing.
                solveAbsValEquation(a, b, c);
                return 0;
            }

        else
            // If "type"does not equal to 1 or 2, the program will stop.
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
    //return;
}
//By the end of this function, the program will have the three variable to work with.

//Solve linear equation
void solveLinearEquation(float a, float b, float c)
{
    //printf("\nIn function, a = %.f, b = %.f, c = %.f", a, b, c); was used for testing
    float x;
    x = (c - b) / a;       //ax + b = c
    printf("\nThe equation would look like this:\nx = (%.f - %.f) / %.f\n", c, b, a);
    printf("\nx = %.4f \n\n", x);
}
//By the end of the function, the user will have a solved linear equation.

//Solve absolute value equation
void solveAbsValEquation(float a, float b, float c)
{
    //printf("\nIn function, a = %.f, b = %.f, c = %.f", a, b, c); was used for testing.
    float x;
    float xAV;
    x = (c - b) / a;       //ax + b = c
    xAV = (-c - b) / a;    //ax + b = -c
    printf("\nThe equation would look like this:\n");
    printf("x = (%.f - %.f) / %.f\n", c, b, a);
    printf("    (-%.f - %.f) / %.f\n", c, b, a);
    printf("\nx = { %.4f, %.4f }\n\n", x, xAV);
}
//By the end of the function, the user will have a solved absolute value equation.
