#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include<vector>
using namespace std;


int main(void)
{
	int n,k,i,j,cnt=0,res=0,tmp,h,w,max=0,sum=-565;
	
	scanf("%d %d",&h,&w);
	vector<vector <int> > map(h+2, vector<int>(w+2));
	
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			scanf("%d",&map[i][j]);
		}
	}
	int H,W;
	
	scanf("%d %d",&H,&W);
	
	for(i=1;i<=h-H+1;i++)
	{
		for(j=1;j<=w-W+1;j++)
		{
			sum=0;
			for(k=i;k<i+H;k++)
			{
				for(n=j;n<j+W;n++)
				{
					sum+=map[k][n];
				}
			}
			if(sum>max)
			{
				max=sum;
			}
		}
	}
	
	printf("%d",max);



	return 0;
}

// 2 0 3 1  front
// 1 1 2 3 right


