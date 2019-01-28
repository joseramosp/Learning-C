/*
Jose Ramos / Student ID 00299444
Lab 4 

Credit to https://stackoverflow.com/questions/29018864/any-way-to-obtain-square-root-of-a-number-without-using-math-h-and-sqrt
for helping me finding a way to find the square root of a number without using the library math.h.

*/


#include <stdio.h>

double sqroot(double);
double hypotenuse(double, double);

int main()
{
    double x, y, sum;
    
    puts("To calculate a hypotenuse, enter the length of the two other sides.");
    scanf("%le%le", &x, &y);
    
    printf("Hypotenuse is %.2lf\n", hypotenuse(x, y));
    
    return 0;
}

double sqroot(double square)
{
    double root=square/3;
    int i;
    if (square <= 0) return 0;
    for (i=0; i<32; i++)
        root = (root + square / root) / 2;
    return root;
}

double hypotenuse(double x, double y)
{
    double sum, result, x2, y2;
    
    x2 = x * x;
    y2 = y * y;
    sum = x2 + y2;
    
    return sqroot(sum);
}