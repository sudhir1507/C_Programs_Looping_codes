#include<stdio.h>
int  main(){
	int i,j,count,k=0;
	for(i=1;i<=5;i++){
	    
	    count=1;
		for(j=1;j<=9;j++){
			if(j<=9-k){
				printf("%d",count);
				j<6-i?count++:--count;
			}
		}
		k=k+2;
		printf("\n");
	}
}
