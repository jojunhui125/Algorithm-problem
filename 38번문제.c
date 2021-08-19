#include<stdio.h>
#include<math.h>
#include <stdlib.h> 

int main(void)
{
	int s,n,a,i,j,pos;
	scanf("%d",&n);
	
	int *is=(int*)calloc(n+1,sizeof(int));
	int *os=(int*)calloc(n+1,sizeof(int));
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&is[i]);
	}
	

	for(i=n;i>=1;i--)
	{
		pos=i;
		for(j=1;j<=is[i];j++)
		{
			os[pos]=os[pos+1];
			pos++;
		}
		os[pos]=i;
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",os[i]);
	}
	
	free(is);
	free(os);
	

	

	return 0;
}

