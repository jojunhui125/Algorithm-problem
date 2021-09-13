#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > arr[101];
int ch[101];
int dis[201];

struct edge
{
	int s;
	int e;
	int val;
	
	edge(int a,int b, int c)
	{
		s=a;
		e=b;
		val=c;
	}
};

int main(void)
{
	int i,j, n, m, a, b, c, cnt=0, res=0,min,k,l;
	cin>>n>>m;
	vector<edge> ed;

	
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		ed.push_back(edge(a,b,c));
	}
	
	for(i=1;i<=n;i++)
	{
		dis[i]=2147000000;
	}
	
	scanf("%d %d",&k,&l);
	dis[k]=0;
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<ed.size();j++)
		{
			int k=ed[j].s;
			int l=ed[j].e;
			int w=ed[j].val;
			
			if(dis[k]!=2147000000 && dis[k]+w<dis[l])
			{
				dis[l]=dis[k]+w;
			}
		}
	}
	
	for(i=0;i<ed.size();i++)
	{
		int u=ed[i].s;
		int v=ed[i].e;
		int z=ed[i].val;
		if(dis[i]!=2147000000 && dis[u]+z<dis[v])
		{
			printf("-1\n");
			exit(0);
		}
			
	}
	
	printf("%d",dis[l]);
	
	

	
	return 0;
	
}
