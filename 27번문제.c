#include<stdio.h>
#include<math.h>
#include <stdlib.h> 

int arr[1001];
int main(void)
{
	int n,i,j,cnt=0,swap,result=1;
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		swap=i;
		j=2;
		
		while(1)
		{
			if(swap%j==0)
			{
				swap=swap/j;
				arr[j]++;
				
				
			}
			else
			{
				j++;
			}
			
			if(swap==1)
			{
				break;
			}
		}
	}
	printf("%d! = ",n);
	for(i=0;i<1001;i++)
	{
		if(arr[i]!=0)
		{
			printf("%d ",arr[i]);
		}
		
	}


	return 0;
}


