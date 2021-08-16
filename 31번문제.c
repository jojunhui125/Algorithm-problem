#include<stdio.h>
#include<math.h>
#include <stdlib.h> 


int main(void)
{
	int n,i,sum=0,res;
	char a[10];
	int j=0,k=0;
	scanf("%s",&a);
	
	//C10H5
	if(a[1]=='H')
	{
		j=1;
	}
	else
	{
		for(i=1;a[i]!='H';i++)
	    {
		   j=j*10+(a[i]-48);
	    }

	    res=i;
	}
	
	if(a[res+1]=='\0')
	{
		k=1;
	}
	else
	{
		for(i=res+1;a[i]!='\0';i++)
	    {
		   k=k*10+(a[i]-48);
	    }
	}
	
	
	printf("%d",12*j+k);
	

	return 0;
}

