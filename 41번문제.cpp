#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include <vector>

using namespace std;
int main(void)
{
	int s,n,m,a,i,j,pos=0;
	int b=1,cnt=0,tmp;
	
	scanf("%d",&n);
	tmp=n;
	n--;
	
	while(n>0)
	{
		b++;
		n=n-b;
		if(n%b==0)
		{
			for(i=1;i<b;i++)
			{
				printf("%d + ",(n/b)+i);
			}
			printf("%d = %d\n",(n/b)+i,tmp);
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

