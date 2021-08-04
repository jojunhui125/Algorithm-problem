#include<stdio.h>
#include<string.h>

int main(void)
{
	int i,n,sum=0,min=100,max=0;
	int arr[100]={0};
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d",max-min);

   return 0;

}
