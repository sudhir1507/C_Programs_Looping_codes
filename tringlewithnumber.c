#include<stdio.h>
int main(){
	int i,j;
	int count=1;
	for(i=1;i<=4;i++){
		int flag=1;
		for(j=1;j<=8;j++){
			if((j>=6-i&&j<=4+i)&&flag){
				printf("%d",count++);
				flag=0;
			}else{
				printf(" ");
				flag=1;
			}
		}
		printf("\n");
	}
}
