#include<stdio.h>

int main(){
    int a,b,i=0,sum;
    while(i == 0){
        printf("Enter two numbers; ");
        scanf("%d %d",&a,&b);
        sum = a + b;
        printf("sum = %d \n",sum);
        int ch;
        printf("Press 1 to repeat and 2 to exit: ");
        scanf("%d",&ch);
        if(ch == 1){
            i = 0;
        }else{
            i=1;
        }
    }
    
    return 0;
}