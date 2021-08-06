#include<stdio.h>
#include<string.h>

int cnt[50001];
int main(void)
{
	int n,i,j,k,sum=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j=j+i)
		{
			cnt[j]++;
		}
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",cnt[i]);
	}
	
	return 0;
}
