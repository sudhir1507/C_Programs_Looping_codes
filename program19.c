#include<stdio.h>
int main(){
	int no,count,rev=0,rem;
	printf("Enter the Number:");
	scanf("%d",&no);
	while(no!=0){
		rem=no%10;
		rev=rev*10 + rem;
		no/=10;
	}
	
	while(rev!=0){
         switch(rev%10){
         	case 0:
         		printf("Zero ");
         		break;
         	case 1:
         		printf("One ");
         		break;
         	case 2:
         		printf("Two ");
         		break;
         	case 3:
         		printf("Three ");
         		break;
         	case 4:
         		printf("Four ");
         		break;
         	case 5:
         		printf("Five ");
         		break;
         	case 6:
         		printf("Six ");
         		break;
         	case 7:
         		printf("Seven ");
         		break;
         	case 8:
         		printf("Eight ");
         		break;
         	case 9:
         		printf("Nine ");
         		break;
		 }
		 rev/=10;
	}
}
