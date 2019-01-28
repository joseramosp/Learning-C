#include <stdio.h>
int n1, n2, sum, prod, dif, quot, rem;

int main()
{
    
    
    puts("ENTER TWO INTEGERS");
    scanf("%d %d", &n1, &n2);
    
    sum = n1 + n2;
    prod = n1 * n2;
    dif = n1 - n2;
    quot = n1 / n2;
    rem = n1 % n2; 
    
    printf("SUM: %d\n", sum);
    printf("PRODUCT: %d\n", prod);
    printf("DIFFERENCE: %d\n", dif);
    printf("QUOTIENT: %d\n", quot);
    printf("REMAINDER: %d\n", rem);
    
    return 0;
}
