#include <stdio.h>
void main()
{
    float x,sum=1,a=1;
    int i,n;
    printf("Enter the value of x :");
    scanf("%f",&x);
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
     a =a*x/(float)i;
      sum =-sum;
    }
    printf("\ne^%.0f : %f\n",x,sum);
}
