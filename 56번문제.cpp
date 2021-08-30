#include <bits/stdc++.h>
using namespace std;

stack<int> s;
void recursive(int n)
{

	if(n==0)
	{
		return ;
	}
	else
	{
		recursive(n-1);
		printf("%d ",n);
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	
	recursive(n);
	
	return 0;
}

