#include<bits/stdc++.h>
#define first x
#define second y
using namespace std;
int arr[10][10],ch[10][10];
int cnt=0;

int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};

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
	int i,j,a,n;

	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	ch[1][1]=0;
	Q.push(Loc(1,1));
	while(!Q.empty())
	{
		Loc tmp=Q.front();
		Q.pop();
		for(i=0;i<4;i++)
		{
			int xx=tmp.x+dx[i];
			int yy=tmp.y+dy[i];
			if(arr[xx][yy]==0 &&xx>=1 && xx<=7 && yy>=0 && yy<=7)
			{
				Q.push(Loc(xx,yy));
				arr[xx][yy]=1;
				ch[xx][yy]=ch[tmp.x][tmp.y]+1;
			}
		}
	}
	
	if(ch[7][7]==0)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",ch[7][7]);
	}

	
	return 0;
}

