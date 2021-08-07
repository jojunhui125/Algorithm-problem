#include<stdio.h>
#include<string.h>


int main(void)
{
	int n,sum=0,c=1,d=9,res=0;
	scanf("%d",&n);
	
	while(sum+d<n)
	{
		res=res+(c*d);    //9-> 189
		sum+=d;         //9-> 99
		d*=10;            //900
		c++;             // 3
	}
	printf("%d\n",res+(n-sum)*c);

	return 0;
}
