/*
      Title: Area Calculator (Advanced)
     Author: Daniel Vazquez
       Date: 11/08/2017

  Objective: Calculate the area for a number of different geometric shapes. In
             particular, the area of a circle, a kite, a parallelogram, a
             rectangle, a square, and a trapezoid will be calculated.
*/

#include <stdio.h>
#include <math.h>

//Function Declaration Zone
void menu(void);
float circle(float radius, float area);
float kite(float length, float width, float area);
float parallelogram(float base, float height, float area);
float rectangle(float length, float width, float area);
float square (float side, float area);
float trapezoid(float base, float base2, float height, float area);

int main()
{
    /* Variable Declaration Zone
       - selection controls the switch statement.
       - All the floats represent numbers the user is going to input and are
         going to be used to calculate the areas. */
    char selection;
    float radius, length, width, base, base2, height, side, area;

    menu();
    while (selection != 'X' || selection != 'x')
    {
        printf("Please enter your selection: ");
        scanf("%c", &selection);
        switch(selection)
        {
            case 'C':
            case 'c':
            {
                printf("\nArea of circle: pi*(r^2) \n");
                circle(radius, area);
                break;
            }
            case 'K':
            case 'k':
            {
                printf("\nThe area of a kite is: (length * width) / 2 \n");
                kite(length, width, area);
                break;
            }
            case 'P':
            case 'p':
            {
                printf("\nThe area of a parallelogram is: base * height \n");
                parallelogram(base, height, area);
                break;
            }
            case 'R':
            case 'r':
            {
                printf("\nThe area of a rectangle is: length * width \n");
                rectangle(length, width, area);
                break;
            }
            case 'S':
            case 's':
            {
                printf("\nThe area of a square is: side^2 \n");
                square(side, area);
                break;
            }
            case 'T':
            case 't':
            {
                printf("\nThe area of a trapezoid is: ((base + base2) / 2) * height \n");
                trapezoid(base, base2, height, area);
                break;
            }
            case 'X':
            case 'x':
            {
                printf("\nExiting the program.");
                break;
            }
            default:
                printf("What was that? Try again. \n");
        }
        if (selection == 'X' || selection == 'x')
            break;
    }

    return 0;
}

/* Displays the Menu.
    Pre: None
   Post: None */
void menu(void)
{
    printf("     Area Calculator \n");
    printf("------------------------- \n");
    printf("C        Circle \n");
    printf("K        Kite \n");
    printf("P        Parallelogram \n");
    printf("R        Rectangle \n");
    printf("S        Square \n");
    printf("T        Trapezoid \n");
    printf("X        Exit \n\n");
}

/* Asks for the radius, calculates and displays the area.
    Pre: case 'c' or case 'C'.
   Post: Area of circle will be displayed. */
float circle(float radius,float area)
{
    printf("\nRadius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * (radius*radius);
    printf("\nA = %.2f \n\n", area);
}

/* Asks for the length and width, calculates and displays the area.
    Pre: case 'k' or case 'K'.
   Post: Area of kite will be displayed. */
float kite(float length,float width,float area)
{
    printf("\nEnter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    area = (length * width) / 2;
    printf("\nA = %.2f \n\n", area);
}

/* Asks for the base and hight, calculates and displays the area.
    Pre: case 'p' or case 'P'.
   Post: Area of parallelogram will be displayed. */
float parallelogram(float base,float height,float area)
{
    printf("\nEnter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);
    area = base * height;
    printf("\nA = %.2f \n\n", area);
}

/* Asks for the length and width, calculates and displays the area.
    Pre: case 'r' or case 'R'.
   Post: Area of rectangle will be displayed. */
float rectangle(float length,float width,float area)
{
    printf("\nEnter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    area = length* width;
    printf("\nA = %.2f \n\n", area);
}

/* Asks for the side, calculates and displays the area.
    Pre: case 's' or case 'S'.
   Post: Area of square will be displayed. */
float square(float side,float area)
{
    printf("\nEnter side: ");
    scanf("%f", &side);
    area = side * side;
    printf("\nA = %.2f \n\n", area);
}

/* Asks for the bases and height, calculates and displays the area.
    Pre: case 't' or case 'T'.
   Post: Area of trapezoid will be displayed. */
float trapezoid(float base,float base2,float height,float area)
{
    printf("\nEnter base: ");
    scanf("%f", &base);
    printf("Enter base2: ");
    scanf("%f", &base2);
    printf("Enter height: ");
    scanf("%f", &height);
    area = ((base + base2) / 2) * height;
    printf("\nA = %.2f \n\n", area);
}
