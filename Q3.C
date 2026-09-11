// Q.3 Triangle Angle Finder
// Write a C program to find the third angle of a triangle when two other angles are given.

#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c;

    printf("Enter First Angle: ");
    scanf("%f", &a);

    printf("Enter Second Angle: ");
    scanf("%f", &b);

    c = 180 - a - b;

    printf("Third Angle = %.0f", c);
    
    getch();  
}