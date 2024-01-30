#include<stdio.h>
int main(){         //prime factors;
	int n,i=2,j,count;
	printf("Enter the number: ");
	scanf("%d",&n); //10
	while(i<n){
	     if(n%i==0){
	     	count=0;
	     	for(j=2;j<i;j++){
	     		if(i%j==0){
	     			count++;
				 }
			 }
			 if(count==0){
			 	printf("%d\n",i);
			 }
		 }
		 i++;
	}
	return 0;
}
