#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,m,k,i,j,h,w,tmp,min=-2321231,cnt=0;
	stack<int> s; 
	char str[21]="0123456789ABCDEF";
	
	scanf("%d %d",&n,&k);
	
	while(n>0)
	{
		s.push(n%k);
		n/=k;
	}
	
	while(!s.empty())  //비어있으면 참이다 
	{
		printf("%c",str[s.top()]);
		s.pop();
	}

	return 0;
}

