#include <bits/stdc++.h>
using namespace std;

int ch[30],dis[30];

int main(void)
{
	int i,n,m,a,b,x;
	vector<int> arr[30];
	queue<int> Q;
	
	scanf("%d %d",&n,&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&a,&b);
		arr[a].push_back(b);
	}
	Q.push(1);
	ch[1]=1;
	
	while(!Q.empty())
	{
		x=Q.front();
		Q.pop();
		for(i=0;i<arr[x].size();i++)
		{
			if(ch[arr[x][i]]==0)
			{
				ch[arr[x][i]]=1;
				Q.push(arr[x][i]);
				dis[arr[x][i]]=dis[x]+1;
			}
		}
	}
	
	for(i=2;i<=n;i++)
	{
		printf("%d : %d\n",i,dis[i]);
	}
	
	return 0;
}

