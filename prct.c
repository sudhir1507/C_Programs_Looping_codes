#include<stdio.h>
int  main(){
	int i,j;
	for(i=1;i<=10;i++){
	    
		for(j=1;j<=11;j++){
			if((j<=6-i||j>=4+i)){
				printf("*");
			}
		printf("\n");
	}
}
}
