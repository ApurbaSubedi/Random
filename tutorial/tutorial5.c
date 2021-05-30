#include<stdio.h>
void main(){
    int n, i, fact=1;
    printf("Enter a number");
    scanf("%d", &n);
    if (n<0)
    {
        printf("The factorial does not exist");
    }
    else
    {
for (i=1; i<=n; i++)
{
    fact=fact*i;
}
printf("The factorial is %d", fact);

    }
}
