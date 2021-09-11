#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > arr[30];
int ch[30];
int dis[30];
int main(void)
{
	int i,j, n, m, a, b, c, cnt=0, res=0,min;
	cin>>n>>m;

	
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		arr[a].push_back(make_pair(b,c));
	}
	
	for(i=0;i<=n;i++)
	{
		dis[i]=2147000000;
	}
	dis[1]=0;
	
	for(i=1;i<=n;i++)
	{
		min=0;
		for(j=1;j<=n;j++)
		{
			if(ch[j]==0 && dis[j]<dis[min])
			{
				min=j;
			}
		}
		ch[min]=1;
		for(j=0;j<arr[min].size();j++)
		{
			int v=arr[min][j].first;
			int cost=arr[min][j].second;
			if(dis[v]>dis[min]+cost)
			{
				dis[v]=dis[min]+cost;
			}
		}
	}
	
	for(i=2;i<=n;i++)
	{
		
		if(dis[i]!=2147000000)
		{
			
			printf("%d : %d\n",i,dis[i]);
		}
		else
		{
			printf("%d : impossible\n",i);
		}
	}

	
	

	
	return 0;
	
}
