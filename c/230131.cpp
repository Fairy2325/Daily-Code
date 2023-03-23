#include<stdio.h>
int b[76]={1,2,3,4,18,20,23,27,32,34,35,40,42,44,47,53,56,58,60,65,70,72};
int judge(int m)
{
	for(int i=0;b[i]!=0;i++)
	{
		if(m==b[i])
		return 0;	
	}
	return 1;
}

int main(void)
{
	int a[75],x,count=21;
	while(1)
	{
		
		for(int i = 1;i <= 76;i++)
	{
		if(judge(i))
		printf("%d ",i);
	}
	printf("\n");
	scanf("%d",&b[count++]);
	}
	
}

