#include <stdio.h>
#define PI 3.14159
float diameter, radius, circ, area;

int main()
{

    puts("ENTER AN INTEGER");
    scanf("%f", &radius);
    
    diameter = radius *2;
    circ = 2* PI * radius;
    area = PI * radius * radius;
    
    printf("DIAMETER: %.*f\n", 6, radius *2);
    printf("CIRCUMFERENCE: %.*f\n", 6, 2* PI * radius);
    printf("AREA: %.*f\n", 6, PI * radius * radius);
    
    return 0;
}