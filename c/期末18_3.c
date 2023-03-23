#include<stdio.h>


int isji(int i)
{
	for(int x=2;x<i;x++)
	{
		if(i%x==0)
		return 0;
	}
	return 1;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	if(n>6&&n%2==0)
	{
		for(int i=3;i<n;i+=2)
		{
			if(isji(i)&&isji(n-i))
			printf("%d %d\n",i,n-i);
		}
	}
	else
	{
		printf("ERROR");
	}
}
