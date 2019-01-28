#include <stdio.h>

int even(int);

int main()
{
    int n, end = 1, result;
    char quit;
    
    while(end)
    {
        puts("Enter a number to test");
        scanf("%d", &n);
        
        result = even(n);
        
        if(result == 0)
        {
            puts("ODD");
        }
        else
        {
            puts("EVEN");
        }
        
        puts("Enter q to quit or any other letter to test a new number");
        scanf(" %c", &quit);
        
        if(quit == 'q')
        {
            end = 0;   
            puts("BYE");
        }
    }
    return 0;
}

int even(int num)
{
    int result;
    
    result = num%2;
    
    if(result == 0){
        return 1;
    }
    else
    {
        return 0;
    }
}