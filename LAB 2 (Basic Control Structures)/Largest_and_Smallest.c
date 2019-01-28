#include <stdio.h>

int main()
{
    int x,y,z;

    puts("Enter 3 integers");
    scanf("%d %d %d", &x, &y, &z);
    
    if(x<=y)
    {
        if(x<=z)
        {
            printf("SMALLEST: %d\n", x);
        }
    }
    
    if(y<=x)
    {
        if(y<=z)
        {
            printf("SMALLEST: %d\n", y);
        }
    }
    
    if(z<=x)
    {
        if(x<=y)
        {
            printf("SMALLEST: %d\n", z);
        }
    }
    
    if(x>=y)
    {
        if(x>=z)
        {
            printf("LARGEST: %d\n", x);
        }
    }
    if(y>=x)
    {
        if(y>=z)
        {
            printf("LARGEST: %d\n", y);
        }
    }
    if(z>=x)
    {
        if(z>=y)
        {
            printf("LARGEST: %d\n", z);
        }
    }
}