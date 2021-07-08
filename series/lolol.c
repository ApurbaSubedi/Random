#include<stdio.h>
void fibonacciSeries(int range)
{
   int a=1, b=1, c;
   printf("%d\t%d\t",a,b);
   for (int i=1; i<=range-2; i++)
   {

     c = a+b;
    printf("%d\t", c);
     a = b;
     b = c;
   }
}
int main()
{
   int range;

   printf("Enter range: ");
   scanf("%d", &range);

   printf("The fibonacci series is: \n");

   fibonacciSeries(range);

   return 0;
}