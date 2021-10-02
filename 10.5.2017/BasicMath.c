#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void addition(void);
void substraction(void);
void multiplication(void);
void division(void);
void getNumbers(int*a, int*b);
int menu(void);

int main(void)
{
    int selection;
    selection = menu();
    switch(selection)
    {
    case 1:
        addition();
        break;
    case 2:
        substraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    case 5:
        break;
    default:
        printf("\nInvalid Selection Program Terminating \n");
    }
    return 0;
}

int menu(void)
{
    int selection;
    printf("\t Math Practice \n");
    printf("_________\n\n");
    printf("1. \t\t Addition\n");
    printf("2. \t\t Subtraction \n");
    printf("3. \t\t Multiplication \n");
    printf("4. \t\t Division \n");
    printf("5. \t\t Exit \n\n");
    printf("Please enter your selection: ");
    scanf("%d", &selection);
    if (selection > 5 || selection < 1)
        printf("\nInvalid Selection\n");
    return selection;
}

void getNumbers(int*a, int*b)
{

}
