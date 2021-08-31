#include <bits/stdc++.h>
using namespace std;

int n;
int ch[11];
 
void Dfs(int x)
{
	int i;
	if(x==n+1)
	{
		for(i=1;i<=n;i++)
		{
			if(ch[i]==1)
			{
				printf("%d ",i );
			}
		}
		puts(" ");
	}
	else
	{
		ch[x]=1;
		Dfs(x+1);
		ch[x]=0;
		Dfs(x+1);
	}
}

int main(void)
{

	scanf("%d",&n);
	Dfs(1);
	
	return 0;
}

