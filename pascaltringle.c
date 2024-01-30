#include<stdio.h>
int main(){
	int i,k,j;
	for(i=1;i<=7;i++){
		int k=1;
		for(j=1;j<=7;j++){
			if(j<=i){
				printf("%3d",k);
				k=k*(i-j)/j;
			}else{
				printf(" ");
			}
		}
		
			printf("\n");
		}
	}

