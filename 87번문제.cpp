#include<bits/stdc++.h>
using namespace std;
int arr[30][30];
int cnt=0;

int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}; 
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

struct Loc
{
	int x;
	int y;
	Loc(int a,int b)
	{
		x=a;
		y=b;
	}
	
};
queue<Loc> Q;

int main() 
{
	int i,j,a,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(arr[i][j]==1)
			{
				Q.push(Loc(i,j));
				arr[i][j]=0;
				while(!Q.empty())
				{
					Loc tmp=Q.front();
					Q.pop();
					
					for(int k=0;k<8;k++)
					{
						int xx=tmp.x+dx[k];
						int yy=tmp.y+dy[k];
						if(arr[xx][yy]==1)
						{
							Q.push(Loc(xx,yy));
							arr[xx][yy]=0;
						}
					}
				}
				cnt++;
			
			}
		}
	}
	

	printf("%d\n",cnt);
	
	return 0;
}

