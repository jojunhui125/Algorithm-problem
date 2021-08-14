#include<stdio.h>
#include<math.h>

int arr[101];
int a[101];
int main(void)
{
	int n,i,j,cnt=0,swap,result=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		a[i]=1;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
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


