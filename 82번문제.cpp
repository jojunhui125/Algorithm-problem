#include<bits/stdc++.h>
using namespace std;

int arr[20],ch[20],res[20];
int n,r,cnt=0;


void Dfs(int L)
{

	if(L==r)
	{
		for(int j=0;j<L;j++)
		{
			printf("%d ",res[j]);
		}
		cnt++;
		puts("");
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(ch[i]==0)
			{
				res[L]=arr[i];
				ch[i]=1;
				Dfs(L+1);
				ch[i]=0;
			}
		}
	}
}

int main(void)
{

	scanf("%d %d",&n,&r);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	Dfs(0);
	
	printf("%d\n",cnt);
	

	
	return 0;
	
}
