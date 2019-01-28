#include <stdio.h>
#define SIZE 8

int main()
{
    int arr[] = {1, 3, 5, 6, 2, 9, 7, 0};
    
    int *ptr;
    
    ptr = arr;
    
    printf("%c ", '[');
    for(int i=0; i<SIZE; i++)
    {
        printf("%d ", *ptr + 2);
        ptr++;
    }
    puts("]");
    
    return 0;
}