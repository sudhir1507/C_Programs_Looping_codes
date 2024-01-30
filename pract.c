#include<stdio.h>
int main(){
	int i,j,a,b;
	for(i=1;i<=5;i++){
		a=i;
		for(j=1;j<=9;j++){
			if(j>=6-i&&j<=5){
				printf("%d",a);
                a++;
				b=a-2;	
			}else if(j>=6&&j<=4+i){
				printf("%d",b--);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
