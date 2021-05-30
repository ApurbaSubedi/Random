#include<stdio.h>
void main () {
    int num, count=0;
    printf("enter a number");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        count++;

}
if (count==2) {
    printf("The number is prime");
}    
else{
    printf("the number is not prime");
    
}
}




