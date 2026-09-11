// Q.2 Gross Salary Calculator
// Write a C program that calculates the gross salary by adding the HRA, DA, and TA percentages to the base salary as chosen by the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    float s, h, d, t, g;

    printf("Enter Salary: ");
    scanf("%f", &s);

    printf("Enter HRA: ");
    scanf("%f", &h);

    printf("Enter DA: ");
    scanf("%f", &d);

    printf("Enter TA: ");
    scanf("%f", &t);

    h = s * h / 100;
    d = s * d / 100;
    t = s * t / 100;

    // HRA = 100 * 10 / 100 = 10
    // DA  = 100 *20 / 100 = 20
    // TA  = 100 * 30 / 100 = 30

    g = s + h + d + t;

    printf("Gross Salary = Rs. %.0f", g);

    getch();  
}
