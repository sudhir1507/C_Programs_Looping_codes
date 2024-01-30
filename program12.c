#include<stdio.h>
int main(){
	int no,count=0,p,rem,last;
	printf("Enter the number:");
	scanf("%d",&no);
	int temp=no;
	last=no%10;
	while(no!=0){
		no/=10;
		count++;
	}
	p=pow(10,--count);
	no=temp;
	no=no/p;
	printf("%d ",no+last);
}
