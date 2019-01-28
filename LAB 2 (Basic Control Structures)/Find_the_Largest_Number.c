#include <stdio.h>

int main()
{
    int counter=1, number, largest=0;
    
    while(counter < 6)
    {
        puts("Enter a number:");
        scanf("%d", &number);
        
        if(number >= largest)
        {
            largest = number;
        }
        
        counter++;
    }
    
    printf("LARGEST: %d\n", largest);
    
    return 0;
}