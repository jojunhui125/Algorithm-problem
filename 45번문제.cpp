#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include<vector>
using namespace std;

int main(void)
{
	int n,k,i;
	
	scanf("%d %d",&n,&k);
	vector<int> arr(n+1);
	
	int pos=0,cnt=0,res=0;
	
	while(1)
	{
		pos++;
		
		if(pos>n)
		{
			pos=1;
		}
		
		if(arr[pos]==0)
		{
			
			cnt++;
			if(cnt==k)
			{
				arr[pos]=1;
				cnt=0;
				res++;
				
			}
		}
		if(res==n-1)
		{
			break;
		}
	} 
	for(i=1;i<=n;i++)
	{
		if(arr[i]==0)
		{
			printf("%d\n",i);
			break;
		}
	}
	
	return 0;
}


// 1 2 4 8 9
