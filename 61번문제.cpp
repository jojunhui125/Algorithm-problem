#include <bits/stdc++.h>
using namespace std;

int a[15];
int n,m;
int cnt;

 
void Dfs(int L, int sum)
{
	if(L==n+1)
	{
		if(sum==m)
		{
			cnt++;
		}
	}
	else
	{
		Dfs(L+1,sum+a[L]);
		Dfs(L+1,sum);
		Dfs(L+1,sum-a[L]);
	}

}

int main(void)
{
	int i;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}

	Dfs(1,0);
	
	if(cnt==0)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n",cnt);
	}
	
	
	
	return 0;
}

