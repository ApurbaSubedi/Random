#include <stdio.h>
#include <math.h>
void main()
{
	int i, n, term, sum=0;
	printf("Enter the number of terms ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		term=i;
		sum=sum+term;
	}
	printf("%d", sum);
}