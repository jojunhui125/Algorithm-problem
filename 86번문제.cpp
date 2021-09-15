#include<bits/stdc++.h>
using namespace std;

int n,m,cnt=0,res,dis;
vector<pair<int, int> > piza;
vector<pair<int, int> > home;
int maxi=2147000000;
int ch[100];

void Dfs(int L,int s)
{
	if(L==m)
	{
		int sum=0;
		for(int i=0;i<home.size();i++)
		{
			int x1=home[i].first;
			int y1=home[i].second;
			int dis=247000;
			for(int j=0;j<m;j++)
			{
				int x2=piza[ch[j]].first;
				int y2=piza[ch[j]].second;
				dis=min(dis,abs(x1-x2)+abs(y1-y2));
			}
			sum+=dis;
			
		}
		if(sum<maxi)
		{
			maxi=sum;
		}
		
	}
	else
	{
		for(int i=s;i<piza.size();i++)
		{
			ch[L]=i;
			Dfs(L+1,i+1);
		}
	}


}

int main() 
{
	int i,j,a;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a;
			if(a==1)
			{
				home.push_back(make_pair(i,j));
			}
			else if(a==2)
			{
				piza.push_back(make_pair(i,j));
			}
		}
	}
	
	Dfs(0,0);
	cout<<maxi;

	
	
	return 0;
}

