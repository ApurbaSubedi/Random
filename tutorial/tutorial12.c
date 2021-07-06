#include<stdio.h>
void main() {
char a;
printf("enter a letter");
scanf("%c",&a);
if (a>=65 && a<=90)
{a=a+32;}
else if (a>=97 &&a<=122)
{a=a-32;
}

printf("%c",a);


}
