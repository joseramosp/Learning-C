#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main()
{
    unsigned int num;

    puts("Enter an integer");
    scanf("%u", &num);
    
    printf("%lld\n",fibonacci(num));
    
    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned int result1 = 1, result2 = 1, preresult = 1;
    
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        for(int i=2; i < n; i++ )
        {
            result2 = preresult;
            preresult = result1;
            result1 += result2;
        }
        return result1;
    }
    
}