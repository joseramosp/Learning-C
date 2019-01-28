#include <stdio.h>
int d1, d2, d3, d4, d5, num, test;
float numf = 0;

int main()
{
    puts("Enter a 5 digit number");
    scanf("%d", &num);
    
    numf = num; 
    
    //printf("%f\n", numf);
    
    
    d5 = num/10000;
    d4 = num/1000 - (d5*10);
    d3 = num/100 - (num/1000 * 10);
    d2 = num/10 - (num/100 * 10);
    d1 = num - (num/10 * 10); //Here I had to do it different because it needed to be rounded
    
    puts("Digits");
    printf("%d\n",d5);
    printf("%d\n",d4);
    printf("%d\n",d3);
    printf("%d\n",d2);
    printf("%d\n",d1);
    
    return 0;
}