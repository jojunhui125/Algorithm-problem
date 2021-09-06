#include <bits/stdc++.h>
using namespace std;

int arr[1001];

int main(void)
{
	int i,n,m,k,a,b,x,pos;
	int s,e;
	
	queue<int> Q;
	
	scanf("%d %d",&n,&k);
	
	for(i=1;i<=n;i++)
	{
		Q.push(i);
	}
	
	while(!Q.empty())
	{
		for(i=1;i<k;i++)
		{
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop();
		
		if(Q.size()==1)
		{
			printf("%d",Q.front());
			exit(0);
		}
	}
	
	return 0;
}

