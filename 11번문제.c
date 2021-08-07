#include<stdio.h>
#include<string.h>


int main(void)
{
	int n,i,j,k,max=0;
	int num,sum;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		j=i;
		while(j>0)
		{
			j=j/10;
			max++;
		}
	}

	printf("%d",max);

	return 0;
}
