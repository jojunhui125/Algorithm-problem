#include <bits/stdc++.h>
using namespace std;

int arr[1001];

int main(void)
{
	int i,n,m,k,a,b,x,pos;

	
	priority_queue<int> pQ;
	
	while(1)
	{
		scanf("%d",&a);
		if(a==-1)
		{
			break;
		}
		if(a==0)
		{
			if(pQ.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",pQ.top());
				pQ.pop();
			}
			
		}
		else
		{
			pQ.push(a);
		}
	}

	
	return 0;
}

