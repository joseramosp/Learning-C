#include <stdio.h>
#include <string.h>

int main()
{
    
    char str[50];
    
    puts("Enter a number in the form (xxx) xxx-xxxx");
    
    fgets(str, 15, stdin);
    
    printf("AREA CODE: %s\n", strtok(str, " ()-"));
    printf("PREFIX: %s\n", strtok(NULL, " ()-"));
    printf("LINE NUMBER: %s\n", strtok(NULL, " ()-"));
    
    return 0;
}