#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include<vector>
using namespace std;

int a[701][701];
int dy[701][701];
int main(void)
{
	int n,m,k,i,j,h,w,tmp,max=-2321231;
	
	scanf("%d %d",&h,&w);
	
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			scanf("%d",&a[i][j]);
			dy[i][j]=dy[i-1][j]+dy[i][j-1]-dy[i-1][j-1]+a[i][j];
		}
	}
	scanf("%d %d",&n,&m);
	for(i=n;i<=h;i++)
	{
		for(j=m;j<=w;j++)
		{
			tmp=dy[i][j]-dy[i-n][j]-dy[i][j-m]+dy[i-n][j-m];
			if(tmp>max)
			{
				max=tmp;
			}
		}
	}
	printf("%d\n",max);

	return 0;
}

