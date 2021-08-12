#include<stdio.h>

int main(void)
{
	int n,j,i,num[101]={0};
	scanf("%d",&n);
	int cnt=0,max=0;

	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	max=num[n];
	for(i=n-1;i>0;i--)
	{
		if(max<num[i])
		{
			max=num[i];
			cnt++;
		}
	}
	printf("%d",cnt);

	
	return 0;
}


