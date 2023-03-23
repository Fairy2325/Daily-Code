#include<stdio.h>

void clear(int a[100])
{
	for(int i=0;i<100;i++)
	a[i]=0;
}

int main(void)
{
	int m,n,number,ex;
	int a[100];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		clear(a);
		for(int i=0;i<m;i++)
		{
			scanf(" %d",&a[i]);
		}
		getchar();
		for(int x=0;x<m;x++)
		{
			for(int y=x;y<m;y++)
			{
				if(a[x]>a[y])
				{
					ex=a[x];
					a[x]=a[y];
					a[y]=ex;
				}
				
			}
			if(x>0)
			{
				if(a[x]!=a[x-1])
				printf("%d ",a[x]);
			}
			else
			printf("%d ",a[x]);
			
			
		}
		printf("\n");
		
	}
}
