/* Daniel Vazquez
   Opening comment that describes the program
   Preprocessor directive to include header file stdio.h  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Distance Calculator
void travel(int rate, int time);

int main(void)
{
    //Variable declaration
    int rate;
    int time;

    // Initialization of speed and time elapsed.
    printf("How fast (mph) you gotta go, Sonic? ");
    scanf("%d", &rate);
    printf("For how many hours are you driving? ");
    scanf("%d", &time);

    // Calculation of distance covered.
    travel(rate,time);

    return 0;
}

void travel(int rate,int time)
{
    int distance;
    distance = rate * time;

    // Print values of 3 variables.
    printf("If you travel at %d mph for %d hours, you'd travel %d miles.\n\n", rate, time, distance);
}
