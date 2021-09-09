#include<bits/stdc++.h>
using namespace std;

int unf[1001];

struct Egde
{
	int s;
	int e;
	int val;
	
	Egde(int a,int b,int c)
	{
		s=a;
		e=b;
		val=c;
	}
	
	bool operator<(const Egde &b)const
	{
		return val<b.val;
	}
};

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
void Union(int a,int b)
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
	int i, n, m, a, b, c, cnt=0, res=0;
	cin>>n>>m;
	vector<Egde> Ed;
	
	for(i=1;i<=n;i++)
	{
		unf[i]=i;
	}
	
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		Ed.push_back(Egde(a,b,c));
	}
	sort(Ed.begin(),Ed.end());
	
	for(i=0;i<m;i++)
	{
		int fa= Find(Ed[i].s);
		int fb= Find(Ed[i].e);
		if(fa != fb)
		{
			res+=Ed[i].val;
			Union(Ed[i].s,Ed[i].e);
		}
	}
	printf("%d",res);
	return 0;
	
}
