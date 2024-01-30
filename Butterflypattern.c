#include<stdio.h>
int  main(){
	int i,j;
	for(i=1;i<=10;i++){
	  
		for(j=1;j<=10;j++){
			if((j<=i||j>10-i)&&i<=5){
				printf("*");		
			}else if((j<=11-i||j>=i)&&i>5) {
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
