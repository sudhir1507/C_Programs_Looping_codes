#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
	    int count=1;
		for(j=1;j<=10;j++){
			if(j<=i&&j<=5){
				printf("%d",count);
				count++;
			}else if(j>=11-i&&j>=5){
				printf("%d",--count);
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
}
