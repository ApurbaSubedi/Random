#include <stdio.h>
#include <math.h>
void main()
{
	int i,n,term=0,sum=0;
    printf("Enter the number");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        term=i+term;
        sum=sum+term;
    }
    printf("The sum is %d :", sum);
}