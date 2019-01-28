#include <stdio.h>

int rounded(float);

int main()
{
    int result;
    float n;
    
    puts("Enter a float");
    scanf("%f", &n);
    
    result = rounded(n);
    printf("ROUNDED: %d\n", result);
    
    return 0;
}

int rounded(float num)
{
    int whole;
    
    whole = num;
    num -= whole;
    
    if(num < 0.5)
    {
        return whole;
    }
    else
    {
        return ++whole;
    }
    
}