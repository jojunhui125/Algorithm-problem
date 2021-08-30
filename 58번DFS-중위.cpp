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
		
		DFS(v*2);
		DFS(v*2+1);
		printf("%d ",v);
	}
	


}
int main(void)
{
	DFS(1);
	
	return 0;
}

