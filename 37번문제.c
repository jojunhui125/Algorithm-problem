#include<stdio.h>
#include<math.h>
#include <stdlib.h> 

int cache[30];
int main(void)
{
	int s,n,a,i,j,pos;
	scanf("%d %d",&s,&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		pos=-1;
		
		for(j=0;j<s;j++)
		{
			if(cache[j]==a)
			{
				pos=j;
			}
		}
		if(pos==-1)
		{
			for(j=s-1;j>=1;j--)
			{
				cache[j]=cache[j-1];
			}
		}
		else
		{
			for(j=pos;j>=1;j--)
			{
				cache[j]=cache[j-1];
			}
		}
		cache[j]=a;
	}
	
	for(i=0;i<s;i++)
	{
		printf("%d ",cache[i]);
	}
	
	

	return 0;
}

