#include <bits/stdc++.h>
using namespace std;

int a[35];
char str[35];
int main(void)
{
	int n,m,k,i,j=1,h,w,tmp=0,min=-2321231,cnt=1,sum=0;
	stack<char> s; 
	scanf("%d",&n);
	vector<char> str;
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		s.push(m);
		str.push_back('P');
		
		while(1)
		{
			if(s.empty())
			{
				break;
			}
			if(j==s.top())
			{
				s.pop();
				j++;
				str.push_back('O');
			}
			else
			{
				break;
			}
		}
	}
	
	if(!s.empty())
	{
		printf("impossible\n");
	}
	else
	{
		for(i=0;i<str.size();i++)
		{
			printf("%c",str[i]);
		}
	}
	return 0;
}

