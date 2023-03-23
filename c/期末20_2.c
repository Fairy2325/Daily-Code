#include<stdio.h>

int count2(int number)
{
	int s=1;
	for(int x=1;x<=number;x++)
	{
		s*=x;
		s%=1000000;
	}
	
	return s;
}

int count1(int number)
{
	int s=0;
	for(int i=1;i<=number;i++)
	{
		s+=count2(i);
		s%=1000000;
	}
	
	return s;
}

int main(void)
{
	int k;
	int n;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d",&n);
		printf("%d\n",count1(n));
	} 
}
