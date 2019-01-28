#include <stdio.h>
#include <string.h>
#define SIZE 50

int main()
{

    puts("Enter two words");
    
    char str1[50], str2[50];
    
    scanf(" %s", str1);
    scanf(" %s", str2);

    int rate = strcmp(str1,str2);
    
    if(rate < 0)
    {
        printf("%s is less than %s\n", str1, str2);
    }
    else if(rate > 0)
    {
        printf("%s is greater than %s\n", str1, str2);
    }
    else
    {
        puts("These words are equal");
    }

    return 0;
}