#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=10;j++){
			if((j<=i)&&(j<=5)){
				if(j%2==1){
					printf("0");
				}else{
					printf("1");
				}		
			}else if((j>=11-i)&&(j>5)){
				if(j%2==0){
					printf("0");
				}else{
					printf("1");
				}
			}
			else{
				printf(" ");		
			}
		}
		printf("\n");
	}
}
