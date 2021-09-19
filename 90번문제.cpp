//#include<bits/stdc++.h>
#include<stdio.h>
#include <queue>
#define first x
#define second y
using namespace std;

int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};
int arr[30][30];
int ch[30][30];	

struct State
{
	int x,y,dis;
	State(int a,int b, int c)
	{
		x=a;
		y=b;
		dis=c;
	}
	
	bool operator<(const State &bb)const
	{
		if(dis==bb.dis)
		{
			if(x==bb.x)
			{
				return y>bb.y;
			}
			else
			{
				return x>bb.x;
			}
		}
		else
		{
			return dis>bb.dis;
		}
	}
};

struct Lion
{
	int x, y, s, ate;
	void sizeUp()
	{
		ate=0;
		s++;
	}
};

int main() 
{
	int i,j,a,n,m,res=0;
	scanf("%d",&n);
	priority_queue<State> Q;
	Lion simba;

	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==9)
			{
				simba.x=i;
				simba.y=j;
				arr[i][j]=0;
			}
		}
	}
	
	Q.push(State(simba.x,simba.y,0));
	simba.s=2;
	simba.ate=0;
	
	while(!Q.empty())
	{
		State tmp=Q.top();
		Q.pop();
		int x=tmp.x;
		int y=tmp.y;
		int z=tmp.dis;
		if(arr[x][y]!=0 && arr[x][y]<simba.s)
		{
			simba.x=x;
			simba.y=y;
			simba.ate++;
			if(simba.ate>=simba.s)
			{
				simba.sizeUp();
			}
			arr[x][y]=0;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					ch[i][j]=0;
				}
			}
			while(!Q.empty())
			{
				Q.pop();
			}
			res=tmp.dis;
		}
		for(i=0;i<4;i++)
		{
			int xx=x+dx[i];
			int yy=y+dy[i];
			if(xx<1 || xx>n || yy<1 || y>n || arr[xx][yy]>simba.s||ch[xx][yy]>0)
			{
				continue;
			}
			Q.push(State(xx,yy,z+1));
			ch[xx][yy]=1;
		}	
	}
	
	printf("%d\n",res);
	return 0;
}

