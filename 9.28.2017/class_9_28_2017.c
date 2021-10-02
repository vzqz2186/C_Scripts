/*
Class work or September 28, 2017
*/

#include <stdio.h>

void getData(int*a, int*b);

int main(void)
{
    int a, b;

    getData(&a, &b);
    printf("You entered %d %d \n", a, b);
    return 0;
}

void getData(int*a, int*b)
{
    printf("Please enter 2 umbers: ");
    scanf("%d %d", a, b);
    return;
}
