/*
      Program: vazquez_hw011518_v1.00.c
       Author: Daniel Vazquez
         Date: 01/11/2018

   Assignment: (01/10/2018): Compute n! and see which number crashes the
                            program.
     Due Date: 01/15/2018

    Objective: For user input integer n, the program will compute its
               factorial.

 Compiled Via:
 gcc

 Execute Via: ./vazquez_hw011518_v1.00 n


  ** Template for the header inspired by Dr. Nichols program example
  ** Asus computer with i7 4720QH crashed with the number
*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(void)
{
    int n;

    scanf("%d", n);
    printf("You typed: %d \n", n);

    factorial(n);

    printf("You typed: %d\n", n);
    return 0;
}
