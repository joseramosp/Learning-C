#include <stdio.h>

int main()
{
    int array3x3[3][3];
    
    puts("Enter 3 integers");
    for(int i=0; i<3; i++)
    {
        scanf("%d", &array3x3[0][i]);
    }
    
    puts("Enter 3 integers");
    for(int i=0; i<3; i++)
    {
        scanf("%d", &array3x3[1][i]);
    }
    
    puts("Enter 3 integers");
    for(int i=0; i<3; i++)
    {
        scanf("%d", &array3x3[2][i]);
    }
    
    //printArray(array3x3);
    
    printf("\n{ [ %d, %d, %d ], [ %d, %d, %d ], [ %d, %d, %d ] }\n\n", array3x3[0][0], array3x3[0][1], array3x3[0][2], array3x3[1][0], array3x3[1][1], array3x3[1][2], array3x3[2][0], array3x3[2][1], array3x3[2][2]);
    
    for(int i = 0; i<3; i++)
    {
        printf("row %d sum = %d\n", i, (array3x3[i][0] + array3x3[i][1] + array3x3[i][2]));
    }
    
    puts("");
    
    for(int i = 0; i<3; i++)
    {
        printf("col %d sum = %d\n", i, (array3x3[0][i] + array3x3[1][i] + array3x3[2][i]));
    }
    
    return 0;
}