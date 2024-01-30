#include<stdio.h>
int main(){            //prime numbre series
	int limit,j,i,count;
	printf("Enter the limit: ");
	scanf("%d",&limit);
	for(i=2;i<=limit;i++)   //10
	{   count=0;
		for(j=2;j<=i/2;j++)   //  6  3
		{
			if(i%j==0)
			{
				count++;
				break;
			}	
		}
		if(count==0)
		{
				printf("%d\t",i);
		}
	}	
	return 0;
}
