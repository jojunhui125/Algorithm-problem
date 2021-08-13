#include<stdio.h>

int arr[101];
int sum[51];
int main(void)
{
	int n,i,j,cnt=0,swap,result=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		sum[i]=arr[i]-arr[i+1];
		if(sum[i]<0)
		{
			sum[i]=sum[i]-(2*sum[i]);
		}
	}
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==sum[j])
			{
				cnt++;
				break;
			}
		}
	}
	if(cnt==n-1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

//5 6 9 12 15 20  6 ->
// 1 3 3 3 5

	return 0;
}


