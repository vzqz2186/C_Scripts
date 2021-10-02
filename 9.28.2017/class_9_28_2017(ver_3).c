/*
Class work or September 28, 2017
*/

#include <stdio.h>

int a, b;

void getData(void);

int main(void)
{
    getData();
    switch(a)
    {
    case 0:
        printf("you entered 0\n");
        //break;
    case 1:
        printf("You entered 1\n");
        break;
    default:
        printf("You did not enter 0 or 1\n");
    }
    return 0;
}

void getData(void)
{
    printf("Please enter 2 umbers: ");
    scanf("%d %d", &a, &b);
    return;
}
