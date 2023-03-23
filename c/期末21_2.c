#include<stdio.h>

int main(void)
{
	int n;
	scanf("%d\n",&n);
	while(n--)
	{
		int data,i,m;
		int copy[100]={0};
		int flag=0;
		for(i=0;(copy[i]=getchar())!='\n';i++)
		{
		}
		for(m=0;m<=i;m++)
		{
			i--;
			if(copy[i]!=copy[m])
			{
				flag++;
			}
		}
		if(flag==1)
		printf("yes\n");
		else
		printf("no\n");
	}
}

