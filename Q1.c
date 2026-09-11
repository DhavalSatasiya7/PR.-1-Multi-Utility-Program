// Q.1 Temperature Converter
// Write a C program that converts temperature from Celsius to Fahrenheit using the following formula:
// F = (9/5 × C) + 32

#include <stdio.h>
#include <conio.h>
int main()
{
    float c, f;

    printf("Enter Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;
    
    // f = (38 * 9 / 5) + 32
    // f = 342 / 5 + 32
    // f = 68.4 + 32
    // f = 100.4

    printf("Fahrenheit = %.1f", f);

    getch();   
  
}
