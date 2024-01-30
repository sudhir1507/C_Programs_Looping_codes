#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=11;j++){
			if((j<7-i||j>5+i)&&i<=5){
				printf("*");
			}else if((j<=i-5||j>16-i)&&i>=5){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
