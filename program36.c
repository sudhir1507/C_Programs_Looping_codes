#include<stdio.h>
int main(){
	int f1=0,f2=1,fib,i,term;
	printf("Enter the number of term:");
	scanf("%d",&term);
	printf("%d\t%d\t",f1,f2);
	i=3;
	while(i<=term){
		fib=f1+f2;	
		f1=f2;
		f2=fib;
		printf("%d\t",fib);
		i++;
	}
	return 0;
}
