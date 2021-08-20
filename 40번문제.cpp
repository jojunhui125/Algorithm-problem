#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include <vector>

using namespace std;
int main(void)
{
	int s,n,m,a,i,j,pos=0;
	
	scanf("%d",&n);
	vector<int> arr(n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr.begin(),arr.end());
	
	scanf("%d",&m);
	vector<int> brr(m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&brr[i]);
	}
	sort(brr.begin(),brr.end());
	
	vector<int> sum(m);
	int left=0,right=0;
	while(left<n && right<m)
	{
		if(arr[left]==brr[right])
		{
			sum[pos++]=arr[left++];
			right++;
		}
		else if(arr[left]<brr[right])
		{
			left++;
		}
		else if(arr[left]>brr[right])
		{
			right++;
		}
	}
	
	for(i=0;i<pos;i++)
	{
		printf("%d ",sum[i]);
	}
	


	
	return 0;
}

