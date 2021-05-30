#include<stdio.h>
void main(){
    int num, count=1,sum=0;
    printf("enter a number");
    scanf("%d", &num);
while (count<=num)
{
    sum=sum+count;
    count++;
    }
printf("The sum is %d", sum);
}
