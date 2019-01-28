#include <stdio.h>

int reverse(int);

int main()
{
    int number;
    
    puts("Enter an integer");
    scanf("%d", &number);
    
    printf("%d\n", reverse(number));
    
    return 0;
}

int reverse(int num)
{
    int result = 0;
    
    while(num > 0)
    {
        result *= 10;
        result = result + num %10; 
        num /= 10;
    }
    return result;
}