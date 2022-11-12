#include <stdio.h>
#include <math.h>

// Based on the formula (Formula.png)
float A, B, C;

// Calculate the X axis
float calculateX(int i, int j, int k)
{
    return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
           j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
}

// Main
int main()
{
    printf("Hello World \n");
    return 0;
}