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
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>0 && arr[j+1]<0)
			{
				swap=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
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

