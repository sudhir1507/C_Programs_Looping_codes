#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		int flag=1;
		for(j=1;j<=17;j++){
			if(j>=10-i&&j<9+i&&flag){
				printf("%d",i);
				flag=0;
			}else{
				printf("*");
				flag=1;
			}
		}
		printf("\n");
	}
}
