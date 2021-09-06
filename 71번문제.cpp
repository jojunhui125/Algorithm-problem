#include <bits/stdc++.h>
using namespace std;


int cnt=0;
int ch[10001];
int d[3]={1,-1,5};

int main(void)
{
	int i,n,m,a,b,x,pos;
	int s,e;
	
	queue<int> Q;
	
	scanf("%d %d",&s,&e);
	
	Q.push(s);
	ch[s]=1;
	
	while(!Q.empty())
	{
		x=Q.front();
		Q.pop();
		for(i=0;i<3;i++)
		{
			pos=x+d[i];
			if(pos==e)
			{
				printf("%d\n",ch[x]);
				exit(0);
			}
			if(ch[pos]==0)
			{
				ch[pos]=ch[x]+1;
				Q.push(pos);
			}
		}
	}
	
	
	
	return 0;
}

