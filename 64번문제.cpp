#include <bits/stdc++.h>
using namespace std;

int arr[21][21];
int cnt,i,ch[30],n;

void Dfs(int v)
{
	int i;
	if(v==n)
	{
		cnt++;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			if(arr[v][i]==1 && ch[i]==0)
			{
				ch[i]=1;
				Dfs(i);
				ch[i]=0;
			}
		}
	}
}

int main(void)
{
	int i,m,j;
	int a,b,c;
	scanf("%d %d",&n,&m);
	
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&a,&b);
		arr[a][b]=1;
	}
	ch[1]=1;
	Dfs(1);
	
	
	printf("%d\n",cnt);
	

	
	return 0;
}

