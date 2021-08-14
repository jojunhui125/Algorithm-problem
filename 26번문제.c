#include<stdio.h>
#include<math.h>
#include <stdlib.h> 

int main(void)
{
	int n,i,j,cnt=0,swap,result=0;
	int *arr,*a;

	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*n);
	a=(int*)malloc(sizeof(int)*n);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		a[i]=1;
	}
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]<=arr[j])
			{
				a[i]++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}


	return 0;
}


