#include<stdio.h>

int a[10];
int b[10];
int main(void)
{
	int i,score=0;
	int as=0,bs=0,last=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>b[i])
		{
			as+=3;
			last=1;
		}
		else if(a[i]<b[i])
		{
			bs+=3;
			last=2;
		}
		else
		{
			as++;
			bs++;
		}

	}
	printf("%d %d\n",as,bs);
	if(last==0)
	{
		printf("D");
	}
	else if(as>bs)
	{
		printf("A");
	}
	else if(as<bs)
	{
		printf("B");
	}
	else if(as==bs)
	{
		if(last==2)
		{
			printf("B");
		}
		else if(last==1)
		{
			printf("A");
		}
	}
	
	return 0;
}


