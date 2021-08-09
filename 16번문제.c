#include<stdio.h>
#include<string.h>

int a[60], b[60];
int main(){
	
	int n, i;
	char str[100];
	scanf("%s", &str);
	int len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			a[str[i]-64]++;
		}
			
		else 
		{
			a[str[i]-70]++;
		}
		
	}
	
	scanf("%s", &str);
	int len2=strlen(str);
	for(i=0; i<len2; i++)
	{
		if(str[i]>=65 && str[i]<=90)
			b[str[i]-64]++;
		else b[str[i]-70]++;
	}
	
	for(i=1; i<=52; i++)
	{
		if(a[i]!=b[i])
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");	
	return 0;
}
