#include <bits/stdc++.h>
using namespace std;


void DFS(int v)
{
	if(v>7)
	{
		return ;
	}
	else
	{
		printf("%d ",v);
		DFS(v*2);
		DFS(v*2+1);
	}
	


}
int main(void)
{
	DFS(1);
	
	return 0;
}

