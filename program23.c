#include<stdio.h>
int main(){
	int fact=1,no,i;
	printf("Enter the number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++){
		fact=fact*i;
	}
	printf("%d",fact);
}
