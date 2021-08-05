#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[50];
	int num[50],i,j,sum=0,cnt=0;
	scanf("%s",&a);
	int len=strlen(a);
	
	for(i=0;i<len;i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			sum=sum*10+(a[i]-48);
		}
	}
	printf("%d\n",sum);
	
	for(j=1;j<=sum;j++)
	{
		if(sum%j==0)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
