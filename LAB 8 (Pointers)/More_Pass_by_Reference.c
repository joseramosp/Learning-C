#include <stdio.h>
#define SIZE 5

int *find(int, int *array, int);
void print_array(int[], int);

int main()
{
    
    int list[SIZE];
    int target;
    
    puts("Enter 5 integers");
    
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d", &list[i]);
    }
    
    puts("Enter a number to find");
    
    scanf("%d", &target);
    
    if(find(target, &list[0], SIZE) == '\0')
    {
        puts("not found");
    }
    else
    {
        puts("found");
        *(find(target, &list[0], SIZE)) = -999;
    }
    print_array(list, SIZE);
    
    return 0;
}

int *find(int target, int *array, int size)
{
    
    for(int i=0; i<size; i++)
    {
        
        if(target == array[i])
        {
            return array + i;
        }
    }
    
    return '\0';
    
}

void print_array(int array[], int size)
{
    printf("%c ", '[');
    
    for(int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    
    puts("]");
}