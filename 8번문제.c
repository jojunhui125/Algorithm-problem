#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[30];
	int i,len,cnt=0;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]=='(')
		{
			cnt++;
		}
		else if(a[i]==')')
		{
			cnt--;
		}
		if(cnt<0)
		break;
	}

	if(cnt==0)
	{
	
	
		printf("YES");
	    
		
	}
	else
	{
		printf("NO");
	}
	
	
	return 0;
}
