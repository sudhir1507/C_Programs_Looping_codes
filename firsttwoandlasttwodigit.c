#include<stdio.h>
#include<math.h>
int main(){
	int no,temp,f,l,p,p1,count=0;
	printf("Enter the no");
	scanf("%d",&no);
    temp=no;
	while(no!=0){   // for counting digits 
		no/=10;
		count++;
	}
	no=temp;     //123456
	l=no%100;    //56
	--count;       //5
	p=pow(10,--count);    //10000
	f=no/p;             //12
	no/=100;
//	printf("NO1 = %d\n",no);         //1234
	--count;    
	          //3
	p1=pow(10,--count);      //2=100
//	printf("count=%d\n",count); 
	no=no%p1;    
//	printf("NO = %d",no);            //34
	no=l*p+no*100+f;
	printf("\nAfter swap %d",no);
	
	return 0;
}
