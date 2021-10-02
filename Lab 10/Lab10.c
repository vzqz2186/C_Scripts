/*
      Title: Lab 10
     Author: Veronica Minsky
     Editor: Daniel Vazquez

  Objective: Lab program to practice with arrays: printing, summing
             incrementing and inserting.

  1.a) a[14] prints 0 on the screen.
 */

#include <stdio.h>
#define MAX 20

void PrintArray(int [], int);
int  SumArray(int [],int);
void IncArray(int [], int, int);
int InsertArray(int [], int, int);

int main(void)
{
    int a[MAX] = {14,17,23,26,33,38,39,41,52,56,
        0,0,0,0,0,0,0,0,0,0},


    NumEls = 20;    /* number of elements in the array  */

    printf("Array at the start of the program: \n");
    PrintArray(a,NumEls);


    printf("The sum of these elements is %d.\n",SumArray(a, NumEls));

    IncArray(a,10,5);

    /* Add statements to print out all the elements in the array and to sum the elements
     * in the array.
     */
    NumEls = InsertArray(a,NumEls,23);

    printf("\nAfter Insert: \n");
    PrintArray(a,NumEls);
    printf("The sum of these elements is %d.\n\n",SumArray(a, NumEls));

    return 0;
}
/*
 * Function to print the first NumEls elements of array b
 * Pre:  b is an integer array.
 *       NumEls is the number of elements in b.
 * Post: The elements of b have been printed on a line
 *       sepearated by spaces.
 */
void PrintArray(int b[], int NumEls)
{
    int i;
    i = 14;
    printf("The element at index %d is %d.", i, b[i]);
    printf("Array has 10 elements: %d", b[i]);
}
/*
 * Function to return the sum of the first NumEls elements of array b
 */
int SumArray(int b[], int NumEls)
{
    return 0;
}

/*
 * Function to increment each element in array b by inc amount
 * Pre:  b is an integer array.
 *       NumEls is the number of elements in b.
 * Post: The elements of b have been incremented by inc
 *
 */
void IncArray(int b[], int NumEls, int new)
{
    return ;
}
/*
 * Function to insert an element at the end of array b
 * Pre:  b is an integer array.
 *       NumEls is the number of elements in b.
 * Post: If array b is not at capacity, then the number x is
 *       added to the end of the array. NumEls is incremented and returned
 */
int InsertArray(int b[], int NumEls, int x)
{

    return NumEls;
}
