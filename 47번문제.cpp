#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include<vector>
using namespace std;

int arr[51][51];
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
			if(arr[i][j] > arr[i+1][j] && arr[i][j] >arr[i][j+1])
			{
				if(arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i][j-1])
				{
					cnt++;
				}
			}
		}
	}
	printf("%d",cnt);

	return 0;
}


