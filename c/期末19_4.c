#include<stdio.h>
#include<ctype.h>

int count(int a[100],int i,int w)
{
	int b[100]={0};
	for(int x=0;x<w;x++)
	{
		b[x]=a[i+x];
	}
	for(int x=0;x<w;x++)
	{
		for(int y=x;y<w;y++)
		{
			if(b[x]>b[y])
			{
				int ex=b[x];
				b[x]=b[y];
				b[y]=ex;
			}
		}
	
	}
	
	return b[(w-1)/2];
}

int main(void)
{
	char ch;
	while((ch=getchar())!=EOF)
	{
		int w,n,a[100]={ 0 },c[100]={ 0 };
		w=ch-'0';
		scanf(" %d\n",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			c[i]=a[i];
		}
		getchar();
		
		if(w%2==0)
		{
			printf("ERROR");
			continue;
		}
		
		for(int i=0;i<=n-w;i++)
		{
			c[(w-1)/2+i]=count(a,i,w);
		}
		for(int i=0;i<n;i++)
		{
			printf("%d ",c[i]);
		}
		printf("\n");
		
	}
}
