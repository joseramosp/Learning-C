#include <stdio.h>

int main()
{
    int num;

    puts("Enter an integer from 1 to 10");
    
    scanf("%d", &num);
    
    while(num < 1 || num > 10)
    {
        if(1 > num)
        {
            puts("Too Low"); 
        }
        
        if(num > 10)
        {
            puts("Too High");  
        }
        puts("Enter an integer from 1 to 10");
        scanf("%d", &num);
    }
    
    puts("OK");
    
    return 0;
}