#include<stdio.h>
#include<stdbool.h>

int reverse(int x)
{
	int sum=0,tmp;
	while(x>0)
	{
		tmp=x%10;
		sum=sum*10+tmp;
		x=x/10;
	}
	return sum;
}

bool isPrime(int x)
{
	bool TRUE=true;
	int i;
	if(x==1)
	{
		return false;
	}
	else
	{
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				TRUE=false;
				break;
			}
		}
	}
	return TRUE;
}

int main(void)
{
	int n,num,i,res;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		res=reverse(num);
		if(isPrime(res))
		{
			printf("%d ",res);
		}
	}
	return 0;
}
