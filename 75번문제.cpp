#include<bits/stdc++.h>
using namespace std;

struct Data
{
	int money;
	int when;
	Data(int a,int b)
	{
		money=a;
		when=b;
	}
	bool operator<(const Data &b)const
	{
		return when>b.when;
	}
};
int main(void)
{
	ios_base::sync_with_stdio(false);
	int n,m,i,j,a,b,d,max=-565486;
	
	priority_queue<int> pQ;
	vector<Data> T;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		T.push_back(Data(a,b));
		if(max<b)
		{
			max=b;
		}
	}
	sort(T.begin(),T.end());
	int res=0;
	j=0;
	for(i=max;i>=1;i--)
	{
		for( ;j<n;j++)
		{
			if(T[j].when<i)
			{
				break;
			}
			pQ.push(T[j].money);
		}
		if(!pQ.empty())
		{
			res+=pQ.top();
			pQ.pop();
		}
	}
	printf("%d\n",res);
	
	return 0;
}

