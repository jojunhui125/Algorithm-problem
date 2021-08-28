#include <bits/stdc++.h>
using namespace std;
int top=-1;
int arr[100];

void push(int num)
{
	arr[++top]=num;
}

int pop()
{
	return arr[top--];
}
int main(void)
{
	int n,m,k,i,j,h,w,tmp,min=-2321231,cnt=0;
	char str[21]="0123456789ABCDEF";
	
	scanf("%d %d",&n,&k);
	
	while(n>0)
	{
		push(n%k);
		n/=k;
	}
	
	while(top!=-1)
	{
		printf("%c",str[pop()]);
	}

	return 0;
}

