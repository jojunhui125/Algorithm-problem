#include<stdio.h>
#include<math.h>
#include <stdlib.h> 

int arr[1001];
int main(void)
{
	int n,i,j,k,cnt=0,swap,result=1;
	int two=0,five=0;
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		swap=i;
		j=2;
		k=5;
		while(1)
		{
			if(swap%j==0)
			{
				two++;
				swap/=j;
			}
			else if(swap%k==0)
			{
				five++;
				swap/=k;
			}
			else
			{
				break;
			}
		}
		
	}
	
	if(two>five)
	{
		printf("%d",five);
	}
	else
	{
		printf("%d",two);
	}

	return 0;
}


