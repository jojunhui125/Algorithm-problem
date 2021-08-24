#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include<vector>
using namespace std;

int main(void)
{
	int n,k,i,cnt=0,res=0;
	
	scanf("%d",&n);
	vector<int> a(n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		res+=a[i];
	}
	scanf("%d",&k);
	if(k>=res)
	{
		printf("-1\n");
		return 0;
	}
	
	int p=0;
	
	while(1)
	{
		p++;
		if(p>n)
		{
			p=1;
		}
		if(a[p]!=0)
		{
			a[p]--;
			cnt++;
		}
		if(cnt==k)
		{
			break;
		}
	}
	
	while(1)
	{
		p++;
		if(p>n)
		{
			p=1;
		}
		if(a[p]!=0)
		{
			break;
		}
	}
	printf("%d",p);
	
	return 0;
}


