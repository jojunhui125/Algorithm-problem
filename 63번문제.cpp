#include <bits/stdc++.h>
using namespace std;

int arr[21][21];

int main(void)
{
	int n,i,m,j;
	int a,b,c;
	scanf("%d %d",&n,&m);
	
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		arr[a][b]=c;
	}
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");	
	}
	
	

	
	return 0;
}

