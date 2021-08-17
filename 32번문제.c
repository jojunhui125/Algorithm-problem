#include<stdio.h>
#include<math.h>
#include <stdlib.h> 


int main(void)
{
	int n,i,j,sum=0,swap;
	scanf("%d",&n);
	int *arr=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				swap=arr[i];
				arr[i]=arr[j];
				arr[j]=swap;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
	
	

	return 0;
}

