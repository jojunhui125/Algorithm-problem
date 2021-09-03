#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> > arr[30];
int cost=239999,n;
int ch[30];

void Dfs(int v, int sum)
{
	int i;
	if(v==n)
	{
		if(sum<cost)
		{
			cost=sum;
		}
	}
	else
	{
		for(i=0;i<arr[v].size();i++)
		{
			if(ch[arr[v][i].first]==0)
			{
				ch[arr[v][i].first]=1;
				Dfs(arr[v][i].first,sum+arr[v][i].second);
				ch[arr[v][i].first]=0;
				
			}
		}
	}
}

int main(void)
{
	int m,i,a,b,c;
	scanf("%d %d",&n,&m);
	
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		arr[a].push_back(make_pair(b,c));
	}
	ch[1]=1;
	Dfs(1,0);
	
	printf("%d",cost);
	
	
	
	

	
	return 0;
}

