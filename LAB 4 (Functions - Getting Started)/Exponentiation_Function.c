#include <stdio.h>

int integerPower(int, int);

int main()
{
    int base, exponent = -1;
    
    while (exponent < 0)
    {
        puts("Enter a base followed by the exponent");
        scanf("%d %d", &base, &exponent);
        
        if (exponent < 0)
        {
            puts("\nThe exponet has to be equal o grater than 0\n");
        }
        
    }
    
    printf("%d\n", integerPower(base,exponent));

}

int integerPower(int base, int exponent) 
{
    int result = base;
    
    if (exponent == 0)
    {
        return 1;
    }
    else if (exponent == 1)
    {
        return base;
    }
    else
    {
        for(int n = 2; n <= exponent; n++)
        {
            result = result * base;
        }
        return result;
    }
    return base;
}