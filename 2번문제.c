#include<stdio.h>
#include<string.h>

int main(void)
{
	int i,n,m,sum=0;
	scanf("%d %d",&n,&m);
	
	for(i=n;i<m;i++)
	{
		sum+=i;
		printf("%d + ",i);
	}
	printf("%d = %d\n",m,sum+m);

   return 0;

}
