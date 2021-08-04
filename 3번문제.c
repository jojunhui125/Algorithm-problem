#include<stdio.h>
#include<string.h>

int main(void)
{
	int i,n,sum=0;
	scanf("%d",&n);
	
	printf("1 ");
	for(i=2;i<n;i++)
	{
		
		if(n%i==0)
		{
			sum+=i;
			printf("+ %d ",i);
		}
	}
	printf("= %d\n",sum+1);

   return 0;

}
