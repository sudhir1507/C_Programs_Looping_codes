#include<stdio.h>
int  main(){
	int i,j;
	for(i=1;i<=6;i++){
	    int	flag=1;
		for(j=1;j<=11;j++){
			if(j>=7-i&&j<=5+i&&flag){
				printf("*");
				flag=0;
			}else{
				printf(" ");
				flag=1;
			}
		}
		printf("\n");
	}
}
