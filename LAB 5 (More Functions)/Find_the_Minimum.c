#include <stdio.h>

float minimumOfThreeNum(float, float, float);
float minimunOfTwoNum(float,float);

int main()
{
    float number1, number2, number3, smallestNumber;
    
    puts("Enter 3 floats");
    scanf("%f %f %f", &number1, &number2, &number3);
    
    printf("%.2f\n", minimumOfThreeNum(number1, number2, number3));
    return 0;
}

float minimumOfThreeNum(float num1, float num2, float num3)
{
    
    return minimunOfTwoNum( minimunOfTwoNum(num1,num2), num3);
    
}

float minimunOfTwoNum(float num1, float num2)
{
    
    float minimun = num1;
    
    if(num1>num2)
    {
        minimun = num2;
    }
    
    return minimun;
}