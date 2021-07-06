#include<stdio.h>
void main() {
int a,b,c,n;
printf("enter a number");
scanf("%d",&n);

a=n/100;
b=(n%100)/10;
c=n%10;
int rev=c*100+b*10+a;
printf("The reversed number is %d", rev);


}
