#include<stdio.h>
#include<math.h>
#include <stdlib.h> 

int arr[1001];
int main(void)
{
	int n,i,j,k,cnt=0,swap,result=1;
	
	int tmp;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		tmp=i;
		while(tmp>0)
		{
			swap=tmp%10;
			if(swap==3)
			{
				cnt++;
			}
			tmp/=10;
		}
	}
	printf("%d",cnt);

	return 0;
}

