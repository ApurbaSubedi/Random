#include<stdio.h>
void main()
{
int a,b,c,d;
printf("input four ages=");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b&&a>c&&a>d)
{
printf("a is the oldest");
}
else if(b>c&&b>d)
{
printf("b is the oldest");
}
else if(c>d)
{
printf("c is the oldest");
}
else
{
printf("d is the oldest");
}
}