#include <stdio.h>

int main()
{
    int n = 0, num;
    float sum = 0;
    
    puts("Enter integers to Average. Enter 9999 to finish input.");
    scanf("%d", &num);
    
    while(num != 9999)
    {
        sum += num;
        scanf("%d", &num);
        n++;
    }
    
    printf("Average = %.2f\n", sum/n);
    
    return 0;
}