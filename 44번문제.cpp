#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include<vector>
using namespace std;

int n;

int check(int mid,int arr[])
{
	int pos=arr[0],i,cnt=1;
	for(i=1;i<n;i++)
	{
		if(arr[i]-pos>=mid)
		{
			pos=arr[i];
			cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int i,c,res;
	
	scanf("%d %d",&n,&c);
	int *arr=new int[n+1];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	} 
	sort(arr,arr+n);
	
	int first=1,last=arr[n-1],mid;
	
	while(first<=last)
	{
		mid=(first+last)/2;
		
		if(check(mid,arr)>=c)
		{
			res=mid;
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}
	}
	printf("%d",res);
	delete[] arr;
	
	return 0;
}


// 1 2 4 8 9
