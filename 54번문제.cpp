#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,m,k,i,j,h,w,tmp,min=-2321231,cnt=0,sum=0;
	stack<char> s; 
	char a[50];
	gets(a);
	int len=strlen(a);
	int flag=1;
	
	for(i=0;i<len;i++)
	{
		if(a[i]=='(')
		{
			s.push(a[i]);
	
		}
		
		if(a[i]==')')
		{
			if(s.empty())
			{
				printf("NO\n");
				flag=0;
				return 0;
			}
			else
			{
				s.pop();

			}
		}
	}
	if(flag==1)
	{
		if(s.empty())
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}

	return 0;
}

