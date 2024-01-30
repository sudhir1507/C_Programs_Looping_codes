#include<stdio.h>
#include<math.h>        //armstrong number series
int main(){
	int limit,no,i,sum,rem,count;
	printf("Enter the number : ");
	scanf("%d",&limit);
	for(i=1;i<limit;i++){
			no=i;
			count=0;
			while(no!=0){
				count++;
				no/=10;
			}
			no=i;
			sum=0;
			for(;no>0;no/=10){
				rem=no%10;
				sum=sum+pow(rem,count);
			}
			if(i==sum){
				printf("%d\n",i);
			}
	}

}
