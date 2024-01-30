#include<stdio.h>
int main(){
	int no;
	printf("Enter the value of no:");
	scanf("%d",&no);
	while(no>0){
		printf("%d\n",no);
		no--;
	}
	return 0;
}
