#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[100];
	int i,len;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			i++;
			
		}
		printf("%c",a[i]);
	}
	
	return 0;
}
