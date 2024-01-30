#include<stdio.h>
int  main(){
	int i,j;
	for(i=1;i<=9;i++){
	  
		for(j=1;j<=5;j++){
			if(j<=i&&i<=5){
				printf("*");
				
			}else if(j<=10-i&&i>5){
				printf("*");
				
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
