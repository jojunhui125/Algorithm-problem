#include<stdio.h>

int arr[100001];
int main(void)
{
	int n,k,i,j;
	int sum=0,max=-100000,res;
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<k;i++)
	{
		sum+=arr[i];
	}
	res=sum;
	for(i=k;i<n;i++)
	{
		sum=sum+(arr[i]-arr[i-k]);
		if(sum>res)
		{
			res=sum;
		}
	}
	printf("%d",res);
	
	return 0;
}


