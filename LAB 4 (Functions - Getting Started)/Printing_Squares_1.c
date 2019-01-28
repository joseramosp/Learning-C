#include <stdio.h>

void squares(int);

int main()
{
    int n;
    
    puts("Enter a value for the side");
    scanf("%d", &n);
    
    squares(n);
    
    return 0;
}

void squares(int sides)
{
    for(int n = 0; n< sides; n++)
    {
        for(int n = 0; n < sides; n++)
        {
            printf("%c", '*');
        }
    printf("%c", '\n');
    }
}