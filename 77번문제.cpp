#include<bits/stdc++.h>
using namespace std;

int unf[1001];

int Find(int v)
{
	if(v==unf[v])
	{
		return v;
	}
	else
	{
		return unf[v]=Find(unf[v]);
	}
}

void Union(int a, int b)
{
	a=Find(a);
	b=Find(b);
	if(a!=b)
	{
		unf[a]=b;
	}
}
int main(void)
{
	//ios_base::sync_with_stdio(false);
	int i,n,m,a,b;
	
	cin>>n>>m;
	
	for(i=1;i<=n;i++)
	{
		unf[i]=i;
	}
	for(i=1;i<=m;i++)
	{
		cin>>a>>b;
		Union(a,b);
	}
	
	cin>>a>>b;
	a=Find(a);
	b=Find(b);
	if(a==b)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

	
	return 0;
}

