//#include <bits/stdc++.h>
#include <stdio.h> 
#include <vector>
#include <algorithm>
using namespace std;
int n;
int ch[25];
vector<int> map[30];
int cnt=0;

void Dfs(int v)
{
	int i;
	if(v==n)
	{
		cnt++;
	}
	else
	{
		for(i=0;i<map[v].size();i++)
		{
			if(ch[map[v][i]]==0)
			{
				ch[map[v][i]]=1;
				Dfs(map[v][i]);
				ch[map[v][i]]=0;
			}
		}
	}
}

int main(void)
{
	int i,m,j;
	int a,b;
	scanf("%d %d",&n,&m);
	
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&a,&b);
		map[a].push_back(b);
		
	}
	ch[1]=1;
	Dfs(1);
	
	printf("%d",cnt);
	
	return 0;
}

