#include<stdio.h>
int main(){
	int no,fact,i,rem,sum=0;
	printf("Enter the Number:");
	scanf("%d",&no);
	int temp=no;   //145
	for(;no>0;no/=10){
		rem=no%10;   //145 5
		fact=1;
		for(i=1;i<=rem;i++){   //1<=5
			fact=fact*i;
		}
		sum=sum+fact;
	}
	if(sum==temp){
		printf("Strong number");
	}else{
		printf("Not Strong number");
	}
}
