#include<stdio.h>
#include<math.h>
#include <stdlib.h> 
int arr[101];
int brr[101];
int sum[301];
int main(void)
{
	int s,n,a,i,j,pos=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&s);
	
	for(i=1;i<=s;i++)
	{
		scanf("%d",&brr[i]);
	}
	
	
	i=1,j=1,a=1;
	while(i<=n && j<=s)
	{
		if(arr[i]<brr[j])
		{
			sum[a]=arr[i];
			a++;
			i++;
		
		}
		else
		{
			sum[a]=brr[j];
			a++;
			j++;
			
		}
	}
	while(i<=n)
	{
		sum[a]=arr[i];
		a++;
		i++;
	
	}
	
	while(j<=s)
	{
		sum[a]=brr[j];
		a++;
		j++;
	
	}
	for(i=1;i<=n+s;i++)
	{
		printf("%d ",sum[i]);
	}

	return 0;
}

