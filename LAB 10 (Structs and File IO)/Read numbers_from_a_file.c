#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 10

void printArray(int[], int);
int intConvert(char*);
int highNumArray(int[], int);
int lowNumArray(int[], int);

int main()
{
    int number[10] = {0};
    
    FILE* text_file;
    char* file_name = "nums.txt";
    int size = 0;
    text_file = fopen(file_name, "r");
    fseek(text_file,0,SEEK_END);
    size = ftell(text_file);
    rewind(text_file);
    char* str;
    str = malloc(size+1);
    fread(str,size,1,text_file);
    fclose(text_file);
    
    char* token;
    
    token = strtok(str,"\n");
    
    for(int i= 0; token != '\0'; i++)
    {
        number[i] = intConvert(token);
        token = strtok(NULL,"\n");
    }
    
    printf("low: %d\n", lowNumArray(number,SIZE));
    printf("high: %d\n",highNumArray(number, SIZE));
    printArray(number,SIZE);

    return 0;
}

void printArray(int array[],int size)
{
    
    printf("%c ", '[');
    
    for(int i= 0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    
    puts("]");
}

int intConvert(char* str)
{
    int size=0, num=0, n=1;
    
    if(str[0]=='-')
    {
        for(int i=1; (str[i] >47 && str[i] <59); i++)
        {
            size++;
            //printf("%c", str[i]);
            n = n*10;
        }
    }
    else
    {
        for(int i=0; (str[i] >47 && str[i] <59); i++)
        {
            size++;
            //printf("%c", str[i]);
            n = n*10;
        }
    }
    
    n=n/10;
    
    if(str[0]==45)
    {
        for(int i= size, n= 1; i>0; i--, n=n*10)
        {
            num = num + ((str[i] - 48) * n);
        }
    }
    else
    {
        for(int i= size - 1, n= 1; i>=0; i--, n=n*10)
        {
            num = num + ((str[i] - 48) * n);
        }
    }
    
    if(str[0] == '-')
    {
        num *=-1;
    }
    return num;
}

int highNumArray(int array[], int size)
{
    int num=0;
    
    for(int i=0; i<size; i++)
    {
        if(num<array[i])
        {
            num = array[i];
        }
    }
    
    return num;
}

int lowNumArray(int array[], int size)
{
    
   int num = array[0];
    
    for(int i=1; i<size; i++)
    {
        if(num>array[i])
        {
            num = array[i];
        }
    }
    
    return num;
}