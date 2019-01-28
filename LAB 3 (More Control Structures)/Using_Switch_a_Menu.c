#include <stdio.h>

int main()
{
    int num, num2, result= 0, n = 1;
    char select;

    puts("Make a selection:\n1. Even/Odd Test on an Integer\n2. Greater of 2 Integers\n3. Absolute Value of an Integer");
    while(n)
    {
        scanf("%c", &select);
        
        switch(select) {
            
            case '1':
                puts("Enter an Integer to test");
                scanf("%d", &num);
    
                result = num%2;
    
                if(result == 0){
                    puts("Even");
                }
                else {
                    puts("Odd");
                }
                n = 0;
                break;
            
            case '2':
                
                puts("Enter two Integers to compare");
                scanf("%d %d", &num, &num2);
                
                if(num > num2)
                {
                    printf("%d is greater\n", num); 
                }
                else
                {
                    printf("%d is greater\n", num2);
                }
                n = 0;
                break;
            
            case '3':
                
                puts("Enter an Integer");
                scanf("%d", &num);
                
                if(num < 0)
                {
                    num = num * -1;
                }
                
                printf("abs value is %d\n", num);
                
                n = 0;
                break;
            
            default:
                puts("That number is not an option. Try again");
                scanf("%c", &select);
        }
                
    }        
}