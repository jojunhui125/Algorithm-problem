#include <bits/stdc++.h>
using namespace std;


void two(int n)
{
	if(n==0)
	{
		return ;
	}
	else
	{
		two(n/2);
		printf("%d",n%2);
	}


}
int main(void)
{
	int n;
	scanf("%d",&n);
	
	two(n);
	
	return 0;
}

