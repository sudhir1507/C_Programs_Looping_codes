#include<stdio.h>
int main(){
	int no,i,sum=0,temp;
	printf("Enter the number: ");
	scanf("%d",&no);
	temp=no;
	for(i=1;i<no;i++){
		if(no%i==0){
			sum=sum+i;
		}
	}
	if(sum==temp){
		printf("Number is Perfect");
	}else{
		printf("Number Not perfect");
	}
}
