#include <stdio.h>

int main()
{
    int n, num=0, sum=0;
    
    puts("Enter the number of items to be summed followed by the values to sum");
    scanf("%d", &n);
    
    while(n > 0)
    {
        
        scanf("%d", &num);
        
        sum += num;
        
        n--;
    }
    
    printf("SUM: %d\n", sum);
    
    return 0;
}