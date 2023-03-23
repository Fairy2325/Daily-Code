#include<stdio.h>

int main(void)
{
	int n,k,A[10][10],B[10][10],C[10][10];
	scanf("%d %d\n",&n,&k);
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			scanf(" %d",&A[x][y]);
			B[x][y]=A[x][y];
			if(n>1)
			C[x][y]=0;
			else
			C[x][y]=A[x][y];
		}
		getchar();
	}
	for(int i=1;i<k;i++)
	{
			for(int x=0;x<n;x++)
		{
			for(int y=0;y<n;y++)
			{
				for(int m=0;m<n;m++)
				{
					C[x][y]+=B[x][m]*A[m][y];
				}
		
			}
		}
		for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			B[x][y]=C[x][y];
		}
	}
	}
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			printf("%d ",C[x][y]);
		}
		printf("\n");
	}
}
