#include<stdio.h>
void main(){
	int n,i,j,sum=0,term,fact,deno;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact = 1;
		deno = i;
		for(j=1;j<=i;j++){
			term = j;
			fact = fact * term;
		}
		sum = sum + fact/deno;
	}
	printf("Sum = %d",sum);
}