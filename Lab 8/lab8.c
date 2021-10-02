/*
      Title: Lab 8
     Author: Dr. Veronica Minsky
     Editor: Daniel Vazquez
       Date: 11/02/2017

  Objective: Program displays the bytes allocated for the various int types:
             short, int, long, unsigned and unsigned short. THe program will
             also display the range of numbers that can be stored in each
             integer type. Because each integer type has a maximum and
             minimum value that can be stored this program will illustrate
             what happens when an overflow occurs.

  3.b) When C overflows the short in the negative direction, it switches to the
       maximum and starts subtracting from there.
  3.d) When C overflows the short in the positive direction, it switches to the
       minimum and starts adding from there.
  4.b) Since unsigned cant go below 0, when trying to subtract from the minimum
       it switches to the unsigned maximum and subtracts from there.
  4.d) When the unsigned maximum is overflown in the positive direction, it
       switches to the unsigned minimum, 0 , and starts adding from there.
 */
#include <stdio.h>

//***** A
#include <limits.h>
#include <math.h>

void integerInfo(void);

int main (void)
{
    integerInfo();

    return 0;
}

void integerInfo(void)
{
    int shortBytes, longBytes, intBytes, unsignedShortBytes;
    int shortBits, longBits, intBits, unsignedShortBits;

    int intMax, intMin, longMin, longMax, unsignedMin, unsignedMax, unsignedShortMax, unsignedShortMin;
    short shortMax, shortMin, exShort;

    unsigned short exUnsignedShort;

    //***** B
    shortBytes = sizeof(short);
    longBytes = sizeof(int);
    intBytes = sizeof(long);
    unsignedShortBytes = sizeof(unsigned short);

    printf("\n************** Size of integers ********************\n");

    //***** C
    printf("         Short: %d bytes \n", shortBytes);
    printf("          Long: %d bytes \n", longBytes);
    printf("           Int: %d bytes \n", intBytes);
    printf("Unsigned Short: %d bytes\n", unsignedShortBytes);

    shortBits = shortBytes * 8;
    //***** D
    longBits = longBytes * 8;
    intBits = intBytes * 8;
    unsignedShortBits = unsignedShortBytes * 8;

    //Calculate the range of numbers
    //******* E
    shortMin = -(int) pow(2, shortBits) / 2;
    shortMax = ((int) pow(2,shortBits) / 2) - 1;
    longMin = -(int) pow(2, longBits) / 2;
    longMax = ((int) pow(2, longBits) / 2) - 1;
    intMin = -(int) pow(2, intBits) / 2;
    intMax = ((int) pow(2,intBits) / 2) - 1;
    unsignedMin = 0;
    unsignedMax = ((int) pow(2, unsignedShortBits)) - 1;


    printf("\n************** Range of integers********************\n");

    //****** F
    printf("Short: \nMin: %d        Max: %d \n\n", shortMin, shortMax);
    printf("Long: \nMin: %d   Max: %d \n\n", longMin, longMax);
    printf("Int: \nMin: %d   Max: %d \n\n", intMin, intMax);
    printf("Unsigned Short: \nMin: %d             Max: %d \n", unsignedMin, unsignedMax);

    printf("\n************** Overflow of Short Integers ********************\n");

    //******* G
    exShort = shortMin;

    printf("\nMin: %d\n", exShort);
    for(int i = 1; i < 10; i++)
    {
        //******* H
        printf("Min - %d = %d\n",i, --exShort);
    }
    //*******I
    exShort = shortMax;
    printf("\nMax: %d\n", exShort);
    for(int i =1; i < 10; i++)
    {
        //******* J
        printf("Max + %d = %d\n",i, ++exShort);
    }

    printf("\n************** Overflow of Unsigned Short Integers ********************\n");
    // ********K
    exUnsignedShort = unsignedMin;
    printf("\nMin: %d \n",exUnsignedShort);
    for(int i =1; i<10; i++)
    {
        //******* L
        printf("Min - %d = %d\n",i, --exUnsignedShort);
    }
    // ******* M
    exUnsignedShort = unsignedMax;
    printf("\nMax: %d\n",exUnsignedShort);
    for(int i =1; i<10; i++)
    {
        //*******N
        printf("Max + %d = %d\n",i, ++exUnsignedShort);
    }

    return;

}
