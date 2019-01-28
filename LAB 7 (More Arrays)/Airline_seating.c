#include <stdio.h>
#define SIZE 10

void printArray(int[], int);
void printSeats(int[], int[]);
int selectSeat();

int main()
{
    int flightSeats[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int seatsAvailables[SIZE] = {0};
    char quit = ' ';
    int fClass = 0;
    int eClass = 5;
    int seatClass;
    
    while(quit != 'q')
    {
        seatClass = 0;
        printSeats(flightSeats, seatsAvailables);
        selectSeat();
        
        scanf("%d", &seatClass);
        
        if(seatClass == 1)
        {
            if(fClass < 5)
            {
                seatsAvailables[fClass] = 1;
                fClass++;
                puts(".:Boarding Pass:.");
                printf("FIRST CLASS seat: %d\n", fClass);
                puts("....");
            }
            else if(fClass == 5 && eClass == 10)
            {
                puts("The flight is full");
            }
            else if(fClass == 5)
            {
                puts("All first class seats are full");
            }
            
        }
        else if(seatClass == 2)
        {
            if(eClass < 10)
            {
                seatsAvailables[eClass] = 1;
                eClass++;
                puts(".:Boarding Pass:.");
                printf("ECONOMY seat: %d\n", eClass);
                puts("....");
            }
            else if(fClass == 5 && eClass == 10)
            {
                puts("The flight is full");
            }
            else if(eClass == 10)
            {
                puts("All economy seats are full");
            }
        }
        
        puts("enter q to quit or any other character to continue");
        scanf(" %c", &quit);
    }
    
    return 0;
}

void printArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf(" %d ", array[i]);
    }
    puts("");
    
}

void printSeats(int flightSeats[], int seatsAvailables[])
{
    
    puts("SEATS");
    printArray(flightSeats,SIZE);
    printArray(seatsAvailables, SIZE);
    
}

int selectSeat()
{
    puts("Please type 1 for \"first class\"");
    puts("Please type 2 for \"economy\"");
    
}