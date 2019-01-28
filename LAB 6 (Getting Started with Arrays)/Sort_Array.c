#include <stdio.h>
#define SIZE 5

void print_array(float[], int);
void array_sorted(float array[], int size);

int main()
{
    float array_num[SIZE - 1] = {};
    
    puts("Enter 5 floats");
    
    for(int i = 0; i<SIZE; i++)
    {
        scanf("%f", &array_num[i]);
    }
    
    print_array(array_num, SIZE);
    
    array_sorted(array_num, SIZE);
    
    return 0;
}

void print_array(float array[], int size)
{
    
    printf("%c", '[');
    for(int i=0; i< size; i++)
    {
        printf(" %.1f ", array[i]);
        if(i != size - 1)
        {
            printf("%c", '|');
        }
    }
    printf("%c\n", ']');
}

void array_sorted(float array[], int size)
{
    float element; 
    
    for(int i = 0; i<size; i++)
    {
        for(int i = 0; i<(size - 1); i++)
        {
            if(array[i + 1] < array[i])
            {
                //puts("Hola");
                element = array[i];
                //printf("%.1f\n", element);
                array[i] = array[i + 1];
                array[i + 1] = element;
            }
        }
    }
    //print_array(array,SIZE);
    print_array(array,size);
    
}