#include <stdio.h>
#define SIZE 5

void printArray(int[], int);


int main()
{
    int numArray[SIZE];
    puts("Enter 5 integers");
    
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d", &numArray[i]);
    }
    
    printArray(numArray, SIZE);
    
    return 0;
}

void printArray(int array[], int size)
{
    if(size>1)
    {
        printf("%d ", array[size - 1]);
        printArray(array, size - 1);
    }
    // I had to make the condition as it is just to avoid having a space after printing the last digit and have a \n 
    else if(size == 1)
    {
        printf("%d", array[size - 1]);
        puts("");
    }
}