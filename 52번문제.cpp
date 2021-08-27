#include <bits/stdc++.h>
using namespace std;

int ug[1501];

int main(void)
{
	int n,m,k,i,j,h,w,tmp,min=-2321231,cnt=0;
	int p1,p2,p3,p5;
	
	scanf("%d",&n);
	ug[1]=1;
	p2=p3=p5=1;
	
	for(i=2;i<=n;i++)
	{
		if(ug[p2]*2<ug[p3]*3)
		{
			min=ug[p2]*2;
		}
		else
		{
			min=ug[p3]*3;
		}
		
		if(ug[p5]*5<min)
		{
			min=ug[p5]*5;
		}
		
		if(min==ug[p2]*2)
		{
			p2++;
		}
		if(min==ug[p3]*3)
		{
			p3++;
		}
		if(min==ug[p5]*5)
		{
			p5++;
		}
		ug[i]=min;
	}
	
	printf("%d\n",ug[n]);
	


	return 0;
}

