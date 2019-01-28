#include <stdio.h>

int main()
{
    int num, result;
    
    puts("Enter a whole number");
    scanf("%d", &num);
    
    result = num%2;
    
    if(result == 0){
        
        printf("It is even\n");
        
    }
    
    else {
        printf("It is odd\n");
    }
}