#include<stdio.h>
#include<string.h>

int digit_sum(int x)
{
	int cnt=0;
	
	while(x>0)
	{
		cnt+=x%10;
		x=x/10;
	}
	return cnt;
}
int main(void)
{
	int n,i,j,k,max=0;
	int num,sum;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		sum=digit_sum(num);
		if(sum>max)
		{
			max=sum;
			k=num;
		}
		else if(sum==max)
		{
			if(num>k)
			{
				k=num;
			}
		}
		
	}
	
	printf("%d",k);

	

	return 0;
}
