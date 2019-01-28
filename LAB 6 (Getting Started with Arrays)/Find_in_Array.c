#include <stdio.h>
#define SIZE 5

int main()
{
    char array_char[SIZE - 1];
    char find_char;
    int found = 0;
    
    puts("Enter 5 letters");
    
    for(int i=0; i<SIZE; i++)
    {
        scanf(" %c", &array_char[i]);
    }
    
    puts("Enter a single lowercase letter");
    scanf(" %c", &find_char);
    
    for(int i; i<SIZE; i++)
    {
        if(find_char == array_char[i] || find_char == (array_char[i] + 32))
        {
            puts("FOUND");
            found = 1;
        }
        else if(i == (SIZE - 1) && found == 0)
        {
            puts("NOT FOUND");
        }
    }
    
    return 0;
}