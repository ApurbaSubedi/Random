#include <stdio.h>
void main(){
    int num,r,sum,a;
    int start,end;
    printf("Input starting number of the given range: ");
    scanf("%d",&start);
    printf("Input ending number of the given range : ");
    scanf("%d",&end);
    printf("Armstrong numbers in given range are: ");
    for(num=start;num<=end;num++){
         a=num;
         sum = 0;
            while(a!=0){
             r=a % 10;
             a=a/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
}
