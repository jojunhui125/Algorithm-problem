#include<stdio.h>

int arr[100001];
int main(void)
{
	int n,i,cnt=1,res,result=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>=res)
		{
			cnt++;
			res=arr[i];
			if(cnt>=result)
			{
				result=cnt;
			}
		}
		else
		{
			res=arr[i];
			cnt=1;
		}
	}
	printf("%d",result);
	return 0;
}


