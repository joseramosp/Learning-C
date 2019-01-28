#include <stdio.h>
#define SIZE 10

void print_array(int[], int);
int sum_array(int[], int);

int main()
{
    int array_num[9] = {};
    
    puts("Enter 10 integers");
    
    for(int i = 0; i<SIZE; i++)
    {
        scanf("%d", &array_num[i]);
    }
    
    print_array(array_num, SIZE);
    
    for(int i = 0; i<SIZE; i++)
    {
        array_num[i] = ++array_num[i];
    }
    
    print_array(array_num, SIZE);
    
    printf("SUM = %d\n", sum_array(array_num, SIZE));
    
    return 0;
}

void print_array(int array[], int size)
{
    
    printf("%c", '[');
    for(int i=0; i< size; i++)
    {
        printf(" %d ", array[i]);
        if(i != size - 1)
        {
            printf("%c", '|');
        }
    }
    printf("%c\n", ']');
}

int sum_array(int array[], int size)
{
    int num = 0;
    
    for(int i=0; i<size; i++)
    {
        num = num + array[i];
    }
    
    return num;
}