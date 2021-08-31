#include <bits/stdc++.h>
using namespace std;

int arr[15];
int n,result=0;
bool flag=false;
 
void Dfs(int L,int sum)
{
	if(sum>(result/2))
	{
		return ;
	}
	if(flag==true)
	{
		return ;
	}
	if(L==n+1)
	{
		if(sum==(result-sum))
		{
			flag=true;
		}
	}
	else
	{
		Dfs(L+1,sum+arr[L]);
		Dfs(L+1,sum);
	}
}

int main(void)
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		result+=arr[i];
	}
	Dfs(1,0);
	
	if(flag==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
	return 0;
}

