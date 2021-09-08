#include<bits/stdc++.h>
using namespace std;

int ncr[21][21];
int C(int a,int b)
{
	if(ncr[a][b]>0)
	{
		return ncr[a][b];
	}
	if(a==b || b==0)
	{
		return 1;
	}
	else
	{
		return ncr[a][b]=C(a-1,b)+C(a-1,b-1);
	}
}
int main(void)
{
	//ios_base::sync_with_stdio(false);
	int i,n,r,sum=0,res=0;
	
	scanf("%d %d",&n,&r);
	
	printf("%d\n",C(n,r));
	

	
	return 0;
}

