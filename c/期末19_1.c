#include<stdio.h>

int main (void)
{
	int a[1000]={0},i=0,number;
	for(int q=0;q<10;q++)
	{
		scanf(" %d",&number);
		while(number--)
		{
			a[i++]=q;
		}
		if(getchar()=='\n')
		break;
	}
	int ex;
	
	for(int m=0;m<i;m++)
	{
		
		if(a[0]==0||(a[0]>a[m]&&a[m]!=0))
		{
			ex=a[0];
			a[0]=a[m];
			a[m]=ex;
		}
	}

	for(int x=1;x<i;x++)
	{
		for(int y=x;y<i;y++)
		{
			if(a[x]>a[y])
			{
				ex=a[x];
				a[x]=a[y];
				a[y]=ex;
			}
		}
	}
	for(int n=0;n<i;n++)
	{
		printf("%d",a[n]);
	}
}
