#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 5

int main()
{
    
    FILE* text_file;
    int size = 0;
    char* str;
    int nums[SIZE] = {0};
    text_file = fopen("usernums.txt", "w+");
    
    puts("Enter 5 integers");
    
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    fseek(text_file,0, SEEK_SET);
    
    for(int i=0; i<SIZE; i++)
    {
        fprintf(text_file,"%d\n",nums[i]);
    }
    
    fclose(text_file);
}