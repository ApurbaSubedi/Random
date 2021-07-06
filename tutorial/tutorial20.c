#include<stdio.h>
void main() {
int i,n,sum=0;
printf("enter a number");
scanf("%d",&n);

for(i=1;i<=n;i++){
printf("The square of number is %d\n", i*i);
printf("Yhe cube of number is %d\n",i*i*i);
}
}