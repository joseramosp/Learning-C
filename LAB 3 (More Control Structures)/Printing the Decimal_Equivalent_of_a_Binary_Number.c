#include <stdio.h>

int main()
{
    int binary_num = 0,  x=0, result=0, n = 1;

    puts("Enter a binary number (at most 5 digits)");
    scanf("%d", &binary_num);
    
    x = binary_num;
    
    while(x > 0)
    {
        
        if(x % 2)
        {
            result += n;
        }
        
        x = x/10;
        n = n*2;
    }
    
    printf("%d => %d\n", binary_num, result);
    
    return 0;
}