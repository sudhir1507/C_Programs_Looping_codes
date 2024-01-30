#include<stdio.h>
int main(){
	int no,rem,product=1;
	printf("Enter the Number:");
	scanf("%d",&no);
	while(no!=0){
		rem=no%10;
		product=product*rem;
		no/=10;
	}
	printf("%d",product);
	return 0;
}
