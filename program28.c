#include<stdio.h>
int main(){
	int limit,j,i,count,sum=0;
	printf("Enter the number: ");
	scanf("%d",&limit);
	for(i=2;i<=limit;i++)   //10
	{   count=0;
		for(j=2;j<=i/2;j++)   //
		{
			if(i%j==0)
			{
				count++;
				break;
			}	
		}
		if(count==0)
		{
			    sum=sum+i;
				
		}
		
	}
	printf("%d\t",sum);	
	return 0;
}
