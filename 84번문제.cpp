#include<bits/stdc++.h>
using namespace std;

int n;
int t[30],p[30];
int max,res;

void Dfs(int L,int sum)
{

	if(L==n+1)
	{
		if(sum>res)
		{
			res=sum;
		}
	}
	else
	{
		if(L+t[L]<=n+1)
		{
			Dfs(L+t[L],sum+p[L]);
		}
		Dfs(L+1,sum);
	}
}

int main() 
{
	int i,j;
	scanf("%d",&n);

	
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&t[i],&p[i]);   
	}
	Dfs(1,0);
	printf("%d",res);
	
	return 0;
	
	
	
	return 0;
}
