#include<stdio.h>
void main() {
    int n,sum,a;
    printf("enter a range upto where the sum is to be found");
    scanf("%d", &n);
    a=n*n;
    sum=a*((2*a)-1);   //nth term of sum of odd number =n^2(2n^2-1)
    printf("The sum is %d", sum);
}
