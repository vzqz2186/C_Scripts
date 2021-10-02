/*
      Name: Equation Solver
    Author: Daniel Vazquez
      Date: 9/26/2017

 Objective: E'll figure it out.
 */

 #include <stdio.h>
 #include <stdlib.h>

// Function Declaration Zone
void getNumbers(float*a, float*b, float*c);
void solveLinearEquation(float*x);
void solveAbsValEquation(float*xAVone, float*xAVtwo);

int type; //Decides which type of equation the program is solving

int main(void)
{
    float a, b, c, x, xAVone, xAVtwo;

    //Title
    printf("Equation Solver\n");
    printf("-----------------\n");
    printf("Linear Equation\n\n");

    printf("This program will solve a two-step linear equation in\nthe form ax + b = c.\n\n");

    getNumbers(&a, &b, &c);
    printf("\n");
    printf("you asked for the result of %.1fx + %.1f = %.1f\n", a, b, c);
    solveLinearEquation(&a, &b, &c, &x);

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
 void getNumbers(float*a, float*b, float*c)
 {
    printf("Enter the value for a: ");
    scanf("%f", a);
    printf("Enter the value for b: ");
    scanf("%f", b);
    printf("Enter the value for c: ");
    scanf("%f", c);
    return;
 } //By the end of this function, the program will have the three numbers to work with.

//Solves the Linear Equation
void solveLinearEquation(float*a, float*b, float*c)
{
    x = (c - b)/a;       //ax + b = c
    printf("x = %.4f\n\n", x);
    return;
}

//Solves the Absolute Value Equation
solveAbsValEquation(void)
{
    xAVone = (c - b)/a;  //ax + b = c
    xAVtwo = (-c - b)/a; //ax + b = -c
    printf("x = { %.4f, %.4f }", xAVone, xAVtwo);
    return;
}
