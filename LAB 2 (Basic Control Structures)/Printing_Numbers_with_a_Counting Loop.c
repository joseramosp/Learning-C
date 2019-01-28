#include <stdio.h>

int main()
{
    int n = 1;

    while(n<11)
    {
        printf("%d", n);
        if(n<10)
        {
            printf("   ");
        }
        else
        {
            printf("\n");    
        }
        n++;
    }
    return 0;
}