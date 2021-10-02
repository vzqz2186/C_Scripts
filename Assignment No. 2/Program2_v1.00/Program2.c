/*
      Name: Equation Solver
    Author: Daniel Vazquez
      Date: 9/26/2017

 Objective: E'll figure it out.
 */

 #include <stdio.h>
 #include <stdlib.h>

// Function Declaration Zone
void getNumbers(void);
void solveLinearEquation(void);
void linearEq(void);
void absoluteEq(void);
void solveAbsValEquation(void);

//Variable Declaration Zone
float a;
float b;
float c;
float x;
float xAVone;
float xAVtwo;
int type; //Decides which type of equation the program is solving

int main()
{
    //Title
    printf("Equation Solver\n");
    printf("-----------------\n");
    printf("Linear Equation\n\n");

    printf("This program will solve a two-step linear equation in\nthe form ax + b = c.\n\n");

    getNumbers();
    printf("\n");
    printf("you asked for the result of %.1fx + %.1f = %.1f\n", a, b, c);
    solveLinearEquation();

    printf("-----------------\n");
    printf("Absolute Value Equation\n\n");

    printf("This program will print an absolute value equation in\nthe form |ax + b| = c\n\n");

    getNumbers();
    printf("\n");
    printf("You asked for the result of |%.1fx + %.1f| = %.1f\n", a ,b ,c);
    solveAbsValEquation();
    printf("\n");
    return 0;
}

 //Receiving the values
 void getNumbers(void)
 {
    printf("Enter the value for a: ");
    scanf("%f", &a);
    printf("Enter the value for b: ");
    scanf("%f", &b);
    printf("ENter the value for c: ");
    scanf("%f", &c);
 }

//Solves the Linear Equation
void solveLinearEquation(void)
{
    x = (c - b)/a;       //ax + b = c
    printf("x = %.4f\n\n", x);
}

//Solves the Absolute Value Equation
solveAbsValEquation(void)
{
    xAVone = (c - b)/a;  //ax + b = c
    xAVtwo = (-c - b)/a; //ax + b = -c
    printf("x = { %.4f, %.4f }", xAVone, xAVtwo);
}
