#include<stdio.h>
int main(){
	int no,fact,i,rem,sum,limit,k;  //strong number series
	printf("Enter the Number:");
	scanf("%d",&limit);
	for(k=1;k<=limit;k++){
			no=k;   //145
			sum=0;
			for(;no>0;no/=10){
				rem=no%10;   //145 5
				fact=1;
				for(i=1;i<=rem;i++){   //1<=5
					fact=fact*i;
				}
				sum=sum+fact;
			}
			if(sum==k){
				printf("%d\n",k);
			}
	}
}
