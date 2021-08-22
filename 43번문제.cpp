#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include <vector>
using namespace std;

int arr[1001],n;

int Count(int num)
{
	int cnt=1,sum=0,i;
	
	for(i=0;i<n;i++)
	{
		if(sum+arr[i]>num)
		{
			cnt++;
			sum=arr[i];
		}
		else
		{
			sum+=arr[i];
		}
	}
	return cnt;
}





int main(void)
{
	int s,m,i,j,tmp,pos=0,res;
	int first=1,last=0,max=-232356;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		last+=arr[i];
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
	}
	
	while(first<=last)
	{
		int mid=(first+last)/2;
		
		if(Count(mid)<=m && mid>=max)
		{
			res=mid;
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
	}
	
	printf("%d",res);
	
	return 0;
}

