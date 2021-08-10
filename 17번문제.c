#include<stdio.h>
#include<string.h>

struct class
{
	int num;
	int sum;
};

int main()
{
	
	int n, i,j,result=0;
	struct class data[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		result=0;
		scanf("%d %d",&data[i].num,&data[i].sum);
		for(j=1;j<=data[i].num;j++)
		{
			result+=j;
		}
		if(result==data[i].sum)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	return 0;
}
