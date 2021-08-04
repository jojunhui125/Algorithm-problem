#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[15];
	int age=0;
	scanf("%s",&a);
	
	if(a[7]=='1')
	{
		age=120-((a[0]-48)*10+(a[1]-48));
		printf("%d M",age);
	}
	if(a[7]=='2')
	{
		age=120-((a[0]-48)*10+(a[1]-48));
		printf("%d W",age);
	}
	if(a[7]=='3')
	{
		age=2020-(2000+((a[0]-48)*10+(a[1]-48)));
		printf("%d M",age);
	}
	if(a[7]=='4')
	{
		age=2020-(2000+((a[0]-48)*10+(a[1]-48)));
		printf("%d W",age);
	}
   return 0;

}
