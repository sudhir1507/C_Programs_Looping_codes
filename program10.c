#include<stdio.h>
int main(){
	int count=0,no;
	printf("Enter the number :");
	scanf("%d",&no);
	while(no!=0){
		no/=10;
		count++;
	}
	printf("%d",count);
	return 0;
}
