#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include<vector>
using namespace std;

int front[11];
int r[11];
int sum[11][11];

int main(void)
{
	int n,k,i,j,cnt=0,res=0,tmp;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&front[i]);
	}
	
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++)
		{
			sum[j][i]=front[i];
		
		}

	}
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&r[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sum[i][j]>r[i])
			{
				sum[i][j]=r[i];
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			res+=sum[i][j];
		
		}

	}
	
	printf("\n%d",res);


	return 0;
}

// 2 0 3 1  front
// 1 1 2 3 right


