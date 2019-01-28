#include <stdio.h>
#define SIZE 5

void calculator(int[], int *sum, int *product, int);

int main()
{
    
    int list[SIZE];
    int product = 1;
    int sum = 0;
    
    puts("Enter 5 integers");
    
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d", &list[i]);
    }
    
    calculator(list, &sum, &product, SIZE);
    
    printf("Sum:%d\n", sum);
    printf("Product:%d\n", product);
    
    return 0;
}

void calculator(int array[], int *sum, int *product, int size)
{
    
    for(int i=0; i<size; i++)
    {
        *sum = *sum + array[i];
        *product = *product * array[i];
    }
}