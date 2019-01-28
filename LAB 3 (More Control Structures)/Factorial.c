#include <stdio.h>

int main()
{
    int number, n, result;

    puts("Enter an integer");
    scanf("%d", &number);
    
    n = number; 
    result = n;

    while(n > 1)
    {
        result = result * (n-1);
        n--;
        //printf("%d\n", result);

    }
    
    if(result == 0)
    {
        printf("%d! = %d\n", number, 1);
    }
    else{
           
        printf("%d! = %d\n", number, result);

    }
    
    return 0;
}