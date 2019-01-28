#include <stdio.h>
#include <stdlib.h>
#define SIZE 101

int main()
{
    
    char string[SIZE];

    puts("Enter a input_text of text");
    
    fgets(string, SIZE,  stdin);
    
    puts("You entered:");
    
    printf("%s", string);
    
    for(int i=0; string[i] != '\0'; i++)
    {
        if(string[i] > 96 && string[i] < 123 )
        {
            printf("%c", string[i] - 32);
        }
        else
        {
            printf("%c", string[i]);
        }
    }
    
    for(int i=0; string[i] != '\0'; i++)
    {
        if(string[i] > 64 && string[i] < 91 )
        {
            printf("%c", string[i] + 32);
        }
        else
        {
            printf("%c", string[i]);
        }
    }
    
    return 0;
}