#include <stdio.h>

int power(int, int);

int main()
{
    int b, e; 
    
    puts("Enter a base and exponent");
    scanf("%d %d", &b, &e);
    
    printf("%d\n", power(b,e));
    
    return 0;
}

int power(int base, int exponent)
{
    
    if(exponent == 0)
    {
        return 1;
    }
    else if(exponent == 1)
    {
        return base;
    }
    else
    {
        return base * power(base,exponent -1);
    }
}