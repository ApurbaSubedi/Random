// for hcf
#include <stdio.h>
void main(){
int a,b,c,H;
printf("Enter three integer : ");
scanf("%d %d %d",&a,&b,&c);
if(a<b){
for(H=(a<c)?a:c;H>=1;H--){
if(a%H==0 && c%H==0)
break;}
printf("%d",H);
}
if(b<a) {
for(H=(b<c)?b:c;H>=1;H--){
if(b%H==0 && c%H==0)
break;}
printf("%d",H);
}
}

//for lcm 
#include<stdio.h>
void main()
{
int a,b,c,L;
printf("Enter three integer: ");
scanf("%d %d %d",&a,&b,&c);
for(L=1;L<=a*b*c;L++)
if(L%a==0 && L%b==0 && L%c==0)
break;
printf("LCM is %d",L);
}