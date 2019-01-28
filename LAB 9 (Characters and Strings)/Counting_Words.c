#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    puts("Enter some text");
    
    char str[300];
    //char* str = "Mary had a little lamb, little lamb, little lamb. Mary had a little lamb, whose fleece was white as snow.";
    char* str_ptr;
    str_ptr = str;
    char find_char = ' ';
    char word[20][10]= {'\0'};
    char words2[20][10] = {'\0'};
    
    int flag=0;
    int size = 0;
    int size2 = 0;
    int count = 0;

    fgets(str, 200, stdin);
    
    puts("");
    
    for(int n=0; *str_ptr != '\0' ;n++)
    {
        for(int i=0 ; *str_ptr != find_char && *str_ptr != '\0' ; i++)
        {
             if(*str_ptr != ',' && *str_ptr != '.')
             {
                word[n][i] = *str_ptr;
                //words2[n][i] = *str_ptr;
             }
             str_ptr++;
        }
        str_ptr++;
        size++;
    }
    
    // This code is passing all unique values to a new array of arrays
    for(int n=0; n<size; n++)
    {
        for(int i=0; i<size; i++)
        {
            if(strcmp(words2[i], word[n]) == 0)   
            {
                flag = 1;
            }
        }
        
        if(flag == 0)
        {
            for(int i=0; word[n][i] != '\0'; i++)
            {
                words2[size2][i] = word[n][i];
            }
            size2++;
        }

        flag = 0;
    }
    
    for(int n=0; n<size2; n++)
    {
        //printf("%s %d\n", words2[n], wordsInArray(word, words2[n], size));
        printf("%s ", words2[n]);
        //printf("%d\n", wordsInArray(word, words2[n], size));
        for(int i=0; i<size; i++)
        {
            //puts(words);
            if(strcmp(words2[n], word[i]) == 0)
            {
            count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}