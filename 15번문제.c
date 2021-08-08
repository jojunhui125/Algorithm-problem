#include<stdio.h>

int main(void)
{
	int n,num,i,j,res,cnt=0;
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		res=1;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				res=0;
				break;
			}
		}
		
		if(res==1)
		{
			cnt++;
		}
	}
	
	printf("%d",cnt);
	return 0;
}
