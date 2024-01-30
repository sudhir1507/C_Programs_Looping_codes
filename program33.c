#include<stdio.h>
int main(){				//perfect number series
	int no,i,rem,sum=0,temp,k,limit;
	printf("Enter the number: ");
	scanf("%d",&limit);
	for(k=1;k<=limit;k++){
			no=k;
			sum=0;
			for(i=1;i<(no-1);i++){
				if(no%i==0){
					sum=sum+i;
				}
			}
			if(sum==k){
				printf("%d\n",k);
			}
			}
	}

