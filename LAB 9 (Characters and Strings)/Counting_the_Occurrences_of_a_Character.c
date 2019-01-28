#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char str1[101]; //= {"Hello world. How are you today? Lovely day we are having."};
    char* str_ptr;
    
    str_ptr = str1;
    
    char letter; // = 'o';
    int count = 0;
    
    puts("Enter a few lines of text");
    
    fgets(str1, 100, stdin);
    
    //puts(str1);
    
    puts("Enter a character to search");

    scanf(" %c", &letter);
    
    //printf("%c\n", letter);
    
    //if(strchr(str1, letter) != NULL)
    
    //str2 = strchr(str1, letter);
    
    //printf("%s\n", str2 + 1);

    
    for(int i = 0; strchr(str_ptr, letter) != '\0'; i++)
    {
        ++count;
        str_ptr = strchr(str_ptr, letter) + 1;
    }
    
    if(letter < 98)
    {
        letter += 32;
    }
    else
    {
        letter -= 32;
    }
    
    str_ptr = str1;
    for(int i = 0; strchr(str_ptr, letter) != '\0'; i++)
    {
        ++count;
        str_ptr = strchr(str_ptr, letter) + 1;
    }
    
    printf("%d\n", count);
    
    return 0;
}