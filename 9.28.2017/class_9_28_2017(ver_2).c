/*
Class work or September 28, 2017
*/

#include <stdio.h>

int a, b;

void getData(void);

int main(void)
{
    int count;
    getData();
    if (a < 0 && b < 0)
        {
            printf("You did enter a negative number\n");
            count ++;
        }
    else
        if (a == 0 && b == 0)
            printf("You entered a 0\n");
        else
            if (a > 0 && b >0)
                printf("You entered two positive numbers\n");
            else
                printf("You entered a mix \n");
    return 0;
}

void getData(void)
{
    printf("Please enter 2 umbers: ");
    scanf("%d %d", &a, &b);
    return;
}
