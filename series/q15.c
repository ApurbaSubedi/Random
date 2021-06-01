 #include<stdio.h>
 float exponential(int n, float x)
 
 {float sum = 1;

    for (int i = n - 1; i > 0; --i )
        sum = 1 + x * sum / i;

    return sum;
}


int main()
{
    int n;
   printf(" enter a number");
   scanf("%d", &n);
    float x = 1;
    printf("e^x = %f", exponential(n, x));
    return 0;
}
