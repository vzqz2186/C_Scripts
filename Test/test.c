#include <stdio.h>

float sumArray(float scores[], int n);

int main(void)
{
    float scores[];
    int n;

    sumArray();
}


float sumArray(float scores[], int n)
{
    int i;
    n = 10;
    float prod = 1;
    for(i = 0; i > n; i++)
        prod *= scores[i];
    return prod;
}
