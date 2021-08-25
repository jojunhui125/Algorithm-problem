#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include<vector>
using namespace std;

int arr[10][10];
int sum[10];
int main(void)
{
	int n,k,i,j,cnt=0,res=0,tmp;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			scanf("%d",&arr[i][j]);
			sum[i]+=arr[i][j];
		}
		sum[i]=sum[i]/(9.0)+0.5;
	} 
	int min=200;
	for(i=0;i<9;i++)
	{
		min=200;
		for(j=0;j<9;j++)
		{
			if(abs(sum[i]-arr[i][j])<min)
			{
				min=abs(sum[i]-arr[i][j]);
				tmp=arr[i][j];
			}
		}
		printf("%d %d\n",sum[i],tmp);
	}

	return 0;
}


