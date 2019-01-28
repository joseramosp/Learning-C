#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#define SIZE 5

int main()
{
    
    int size=0;
    FILE *text_file_in, *text_file_out;
    char* str1;
    text_file_in = fopen("hamlet.txt","r");
    fseek(text_file_in,0, SEEK_END);
    size = ftell(text_file_in);
    rewind(text_file_in);
    str1 = malloc(size + 1);
    fread(str1,size,1,text_file_in);
    fclose(text_file_in);
    
    text_file_out = fopen("output.txt","w+");
    fseek(text_file_out,0, SEEK_SET);
    
    for(int i=0; i<53; i++)
    {
        fprintf(text_file_out,"%c", str1[i]);
    }
    fclose(text_file_out);
    
    return 0;    
}