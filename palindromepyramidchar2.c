#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		char count='A';
		for(j=1;j<=9;j++){
			if(j>=6-i&&j<=4+i){
				printf("%c",count);
				j>4?count--:count++;
			}
		}
		printf("\n");
	}
}
