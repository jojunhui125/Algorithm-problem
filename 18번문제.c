#include<stdio.h>

int main(void)
{
	int n,m,i,num,max=-123;
	scanf("%d %d",&n,&m);
	int cnt=0;

	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num>m)
		{
			cnt++;
		
			if(max<cnt)
			{
				max=cnt;
			}
		}
		else
		{
			cnt=0;
		}
	}

	if(max==0)
	{
		printf("-1");
	}
	else
	{
		printf("%d",max);
	}
	
	return 0;
}


