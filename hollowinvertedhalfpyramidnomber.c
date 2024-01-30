#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1){
				printf("%d",j);
			}else if(j==6-i){
				printf("%d",5);
			}else if(j==1){
				printf("%d",i);
			}else{
				printf(" ");
			}
			    
		}
		printf("\n");
	}
	return 0;
}
