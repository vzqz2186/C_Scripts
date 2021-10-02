/*
      Title: Lab7
     Author: Dr. Veronica Minsky
     Editor: Daniel Vazquez
       Date: 10/19/2017

  Objective: This interactive program prints the cost of a vending machine
             selection.

 e) if you remove the break statements under the cases it will print the case
    intended to be printed plus all the remaining after that one.
 */

#include <stdio.h>

int menu(int*selection);
void output(int selection);

int main(void)
{
    int selection;      /* menu selection  */

    menu(&selection);
    output(selection);
    return 0;
}


/*
   Function to print menu and return user's selection
   Pre:  none
   Post: The user's selection was returned
 */

int menu(int*selection)
{
    printf("The vending machine contains \n \n");
    printf("1.   chocolate candy bar  \n");
    printf("2.   peppermints  \n");
    printf("3.   crackers  \n");
    printf("4.   gum  \n");
    printf("\nPlease make your selection by number:   ");
    scanf("%d", selection);

    //  return /*****returned value*******/


}

/*
   Function to print the cost of the user's selection
   Pre:    selection is an integer
   Post:   The cost of the corresponding item has been printed.
 */

void output(int selection)
{
    switch(selection)
    {
        case 1:
           printf("\n The cost is $1.50 \n\n");
           //break;
        case 2:
            printf("\n The cost is $1.00\n\n");
            //break;
        case 3:
            printf("\n The cost is $2.00\n\n");
            //break;
        case 4:
            printf("\n The cost is $1.00\n\n");
            //break;
        default:
            printf("\nInvalid selection number\n\n");
    }
}

/*
This is the function output (int selection) before using a switch statement

void output(int selection)
{
    if(selection == 1)
        printf("\n The cost is $1.50 \n\n");
    else if (selection == 2)
        printf("\n The cost is $1.00\n\n");
    else if (selection == 3)
        printf("\n The cost is $2.00\n\n");
    else if (selection == 4)
        printf("\n The cost is $1.00\n\n");
    else
        printf("\nInvalid selection number\n\n");
}
*/
