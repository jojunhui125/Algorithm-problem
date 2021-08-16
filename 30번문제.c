#include<stdio.h>
#include<math.h>
#include <stdlib.h> 


int main(void)
{
	int n,i,lt=1,cur=1,rt=1,k=1,res=0;

	scanf("%d",&n);
	
	while(lt!=0)
	{
		lt=n/(k*10);
		rt=n%k;
		cur=(n/k)%10;
		
		if(cur>3)
		{
			res=res+(lt+1)*k;
		}
		else if(cur==3)
		{
			res=res+((lt*k)+(rt+1));
		}
		else
		{
			res=res+(lt*k);
		}
		k*=10;
	}
	printf("%d",res);
	
	return 0;
}

