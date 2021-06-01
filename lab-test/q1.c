#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter all the angles");
    scanf("%d%d%d", &a,&b,&c);
if (a+b+c==180)
{
    if (a==90 && b!=90 && c!=90)
    {
        printf("The triangle is right angled");
    }
    else if (a!=90 && b==90 && c!=90)
    {
        printf("The triangle is right angled");
    }
else if (a!=90 && b!=90 && c==90)
{
     printf("The triangle is right angled");
}
    else if(a!=90 && b!=90 && c!=90){
        printf("Error");
    }
}
    else{
        printf("Invalid");
    }
}
