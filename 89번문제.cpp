//#include<bits/stdc++.h>
#include<stdio.h>
#include <queue>
#define first x
#define second y
using namespace std;

int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};
int arr[1010][1010];
int cnt[1010][1010];	
int maxi=-24170000;

struct Loc
{
	int x;
	int y;
	Loc(int a, int b)
	{
		x=a;
		y=b;
	}
};

queue<Loc> Q;

int main() 
{
	int i,j,a,n,m;
	scanf("%d %d",&n,&m);

	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==1)
			{
				Q.push(Loc(i,j));
			}
		}
	}
	
	while(!Q.empty())
	{
		Loc tmp=Q.front();
		Q.pop();
		for(i=0;i<4;i++)
		{
			int xx=tmp.x+dx[i];
			int yy=tmp.y+dy[i];
			if(arr[xx][yy]==0)
			{
				if(xx>=1 && xx<= n && yy>=1 && yy<= m)
				{
					Q.push(Loc(xx,yy));
					arr[xx][yy]=1;
					cnt[xx][yy]=cnt[tmp.x][tmp.y]+1;
				}
			}
			
		}
	}
	int f = 1;
	for(int i = 1; i <= n; i++) 
	{
		for(int j = 1; j <= m; j++) 
		{
			if(arr[i][j] == 0) f = 0;
		}
	}
	
	if(f==1)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(maxi<cnt[i][j])
				{
					maxi=cnt[i][j];
				}
			}
		}
		printf("%d",maxi);
	}
	else
	{
		printf("-1\n");
	}

	
	
	return 0;
}

