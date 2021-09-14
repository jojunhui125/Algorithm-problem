#include<bits/stdc++.h>
using namespace std;

int arr[20],n,res=0;
int si[8];
int mini=2470000;
int maxi=-247000;
void Dfs(int L,int sum)
{
	if(L==n)
	{
		if(sum<mini)
		{
			mini=sum;
		}
		if(sum>maxi)
		{
			maxi=sum;
		}
	}
	else
	{
		if(si[0]>0)
		{
			si[0]--;
			Dfs(L+1,sum+arr[L]);
			si[0]++;
		}
		if(si[1]>0)
		{
			si[1]--;
			Dfs(L+1,sum-arr[L]);
			si[1]++;
		}
		if(si[2]>0)
		{
			si[2]--;
			Dfs(L+1,sum*arr[L]);
			si[2]++;
		}
		if(si[3]>0)
		{
			si[3]--;
			Dfs(L+1,sum/arr[L]);
			si[3]++;
		}
	}

}

int main() 
{
	int i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		scanf("%d",&si[i]);
	}
	Dfs(1,arr[0]);
	
	printf("%d\n%d",maxi,mini);
	
	
	return 0;
}
