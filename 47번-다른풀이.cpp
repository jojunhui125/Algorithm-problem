#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include<vector>
using namespace std;

int arr[51][51];
int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};

int main(void)
{
	int n,k,i,j,cnt=0,res=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			res=0;
			for(k=0;k<4;k++)
			{
				if(arr[i+dx[k]][j+dy[k]] >= arr[i][j])
				{
					res=1;
					break;
				}
			}
			if(res==0)
			{
				cnt++;
			}
		}
	} 

	printf("%d",cnt);

	return 0;
}


