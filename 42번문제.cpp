#include<stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include <vector>

using namespace std;
int main(void)
{
	int s,n,m,i,j,pos=0;
	scanf("%d %d",&n,&m);
	vector<int> arr;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&s);
		arr.push_back(s);
	}
	sort(arr.begin(),arr.end());
	
	int first=0,last=n-1;
	
	while(first<=last)
	{
		int middle=(first+last)/2;
		
		if(arr[middle]==m)
		{
			printf("%d\n",middle+1);
			return 0;
		}
		else if(arr[middle]>m)
		{
			last=middle-1;
		}
		else
		{
			first=middle+1;
		}
	}
	
	
	return 0;
}

