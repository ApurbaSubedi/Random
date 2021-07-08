#include<stdio.h>
#include<string.h>
void main() {
int i,j,a;
char temp;
char str[100];
printf("Enter a string");
scanf("%s", str);
         a=strlen(str);     //determine length of string
for (i=0;i<a; i++){       
for (j=i+1; j<a;j++){
if (str[i]>str[j]){

 temp=str[i];   //compare and swap the letters
    str[i]=str[j];
    str[j]=temp;

}
}
}
printf("The string is %s",str);
}