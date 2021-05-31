#include <stdio.h>
#include <math.h>
void main()
{
	int i,n,term,sum=0;
    printf("Enter the number");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        term=i*i;
        sum=sum+term;
    }
    printf("The sum is %d :", sum);
}