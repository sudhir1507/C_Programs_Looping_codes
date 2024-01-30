#include<stdio.h>
int  main(){
	int i,j;
	for(i=1;i<=10;i++){
	    int	flag=1;
		for(j=1;j<=10;j++){
			if(j==6-i||j==4+i&&flag){
				printf("*");
				flag=0;
			}else if(j==i-5||j==15-i&&flag){
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
