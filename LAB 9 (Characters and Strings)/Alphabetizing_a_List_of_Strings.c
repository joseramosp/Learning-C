#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

int main()
{
    char string1[SIZE], string2[SIZE], string3[SIZE], string4[SIZE], string5[SIZE];
    
    //char string1[] = {"Lawrence"}, string2[] = {"Lowell"}, string3[] = {"Haverhill"}, string4[] = {"Andover"}, string5[] = {"Boston"};
    //char string1[] = {"Waltham"}, string2[] = {"Belmont"}, string3[] = {"Cambridge"}, string4[] = {"Newton"}, string5[] = {"Lexington"};
    
    char* ptr[5] = {string1, string2, string3, string4, string5};
    
    char* ptr2;
    
    puts("Enter 5 strings\n");
    
    for(int i= 0; i<5; i++)
    {
        scanf(" %s", ptr[i]);
    }
    
    for(int i=0; i<4; i++)
    {
        for(int n=0; n<4; n++)
        {
                if (strcmp(ptr[n], ptr[n + 1]) > 0)
                {
                    ptr2 = ptr[n];
                    ptr[n] = ptr[n + 1];
                    ptr[n + 1] = ptr2;
                }
        }
    }
    
    for(int i=0; i<5; i++)
    {
        printf("%s\n", ptr[i]);
    }

    return 0;
}