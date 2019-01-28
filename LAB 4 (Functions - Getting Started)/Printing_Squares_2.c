#include <stdio.h>

void squares(int, char);

int main()
{
    int n;
    char c;
    
    puts("Enter a number of sides and a character for printing");
    scanf("%d %c", &n, &c);
    
    squares(n,c);
    
    return 0;
}

void squares(int sides, char character)
{
    for(int n = 0; n< sides; n++)
    {
        for(int n = 0; n < sides; n++)
        {
            printf("%c", character);
        }
    printf("%c", '\n');
    }
}