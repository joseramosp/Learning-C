#include <stdio.h>
#define SIZE 10

void print_array(int[], int);
int array_elements_size(int[], int);
void array_elements(int[], int);

int main()
{
    int num_val; 
    int array_num[9] = {};
    int new_size = 0;
    
    puts("Enter 10 numbers between 1 and 20 inclusively");
    
    for(int i = 0; i<SIZE; i++)
    {
        scanf("%d", &num_val);
        
        while(num_val < 1 || num_val > 20)
        {
            scanf("%d", &num_val);
        }
        
        array_num[i] = num_val; 
    }
    
    new_size = array_elements_size( array_num, SIZE);
    
    array_elements(array_num, new_size);
    
    printf("%d\n", new_size);
    
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

int array_elements_size(int array[], int size)
{
    int new_size = 0;
    int elements[21]= {}; 
    
    for(int i=0; i<size; i++)
    {
        ++elements[array[i]];
    }
    
    for(int i=1; i<21; i++)
    {
        if(elements[i] > 0)
        {
            ++new_size;
        }
    }
    
    return new_size;
}

void array_elements(int array[], int size)
{
    int elements[21]= {}; 
    int new_array[size - 1];
    int num = 0;
    
    for(int i=0; i<SIZE; i++)
    {
        if(array[i] != 0)
        {
            ++elements[array[i]];
        }
    }
    
    //print_array(elements,21);

    for(int i=0; i<10; i++)
    {
        if(elements[array[i]] > 0)
        {
            new_array[num] = array[i];
            elements[array[i]] = 0;
            num++;
        }
    }
    
    //print_array(array,SIZE);
    print_array(new_array,size);
    
}