#include<stdio.h>
int  main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=5;j++){
			if(j<=i&&i<=4){
				printf("%d",i+2);
				
			}else if(j<=8-i&&i>4){
				printf("%d",10-i);
				
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
