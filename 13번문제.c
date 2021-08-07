#include<stdio.h>
#include<string.h>

int arr[10];
int main(void)
{
	char a[101];
	scanf("%s",&a);
	int len=strlen(a);
	int i,num,j,max=0,res=0;
	
	for(i=0;i<len;i++)
	{
		num=a[i]-48;
		arr[num]++;
	}
	
	for(j=0;j<10;j++)
	{
		if(arr[j]>=max)
		{
			max=arr[j];
			res=j;
		}
	}
	
	printf("%d",res);
	

	
	

	return 0;
}
