#include<stdio.h>
void main() {
int a=0, b=1,n,c;
printf("enter a range");
scanf("%d",&n);

printf("%d %d\t",a,b);
for(int i=0; i<n-2;i++){
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}


}
