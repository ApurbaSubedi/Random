#include<stdio.h>
int main(){
   int num, rem, rev, a, start, end;
   printf("Input starting number of the given range: ");
   scanf("%d",&start);
  printf("Input ending number of the given range: ");
   scanf("%d",&end);
   printf("Palindrome numbers between %d and %d are: ",start,end);
   for(num=start;num<=end;num++){
      a=num;
      rev=0;
      while(a){
         rem=a%10;
         a=a/10;
         rev=rev*10+rem;
      }
      if(num==rev)
         printf("%d ",num);
   }
   return 0;
}