#include<stdio.h>
#include<math.h>
#include <stdlib.h> 


int main(void)
{
	int n,i,j,sum=0,swap,tmp;
	scanf("%d",&n);
	int *a=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		tmp=a[i];
		
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>tmp)
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1]=tmp;
	} 
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	free(a);
	
	
	
	

	return 0;
}

