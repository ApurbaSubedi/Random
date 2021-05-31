#include <stdio.h>
#include <math.h>
void main()
{
	int i,n,term=0,sum=0, fact=1;
    printf("Enter the number");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        fact=fact*i;
        term=fact;
        sum=sum+term;
    }
    printf("The sum is %d :", sum);
}