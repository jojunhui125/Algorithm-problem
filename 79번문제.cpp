#include<bits/stdc++.h>
using namespace std;

int ch[30];

struct Edge
{
	int e;
	int val;
	
	Edge(int a,int b)
	{
		e=a;
		val=b;
	}
	
	bool operator<(const Edge &b)const
	{
		return val>b.val;
	}
};

int main(void)
{
	int i, n, m, a, b, c, cnt=0, res=0;
	cin>>n>>m;
	priority_queue<Edge> pQ;
	
	vector<pair<int, int> > arr[30];

	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		arr[a].push_back(make_pair(b,c));
		arr[b].push_back(make_pair(a,c));

	}
	pQ.push(Edge(1,0));
	
	while(!pQ.empty())
	{
		Edge tmp=pQ.top();
		pQ.pop();
		int f=tmp.e;
		int s=tmp.val;
		
		if(ch[f]==0)
		{
			ch[f]=1;
			cnt+=s;
			for(i=0;i<arr[f].size();i++)
			{
				if(ch[arr[f][i].first]==0)
				{
					pQ.push(Edge(arr[f][i].first,arr[f][i].second));
				}
			}
		}
	}
	cout<<cnt<<endl;
	
	return 0;
	
}
