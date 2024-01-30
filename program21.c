#include<stdio.h>
int main(){
	int p=1,i=1,base,index;
	printf("Enter the base and index: ");
	scanf("%d %d",&base,&index);
	while(i<=index){
		p=p*base;
		i++;
	}
	printf("%d",p);
}
