#include<stdio.h>
#include<math.h>
void clear(char a[100][100])
{
	for(int x=0;x<100;x++)
	{
		for(int y=0;y<100;y++)
		{
			a[x][y]=' ';
		}
	}
}

int main()
{
	int m,max=0,max2=0,number;
	char ch;
	char a[100][100],b[100][100];
	for(int x=0;x<100;x++)
	{
		for(int y=0;y<100;y++)
		{
			a[x][y]=' ';
		}
	}
	for(int x=0;x<100;x++)
	{
		for(int y=0;y<100;y++)
		{
			b[x][y]=' ';
		}
	}
		
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf(" %2d",&number);
		if(number>15)
		{
			ch=number%10+'0';
			number=number/10;
		}else if(number<0)
		{
			ch=getchar();
			if(number==-1&&ch>='0'&&ch<='5')
			{
				number=number*10-(ch-'0');
				ch=getchar();
			}
			
		}else 
		ch=getchar();
		
		if(max<number)
		max=number;
		if(max2>number)
		max2=(number);
		
	
		if(ch==' '||ch=='\n')
		ch='+';
	
		if(number>0)
		for(int x=0;x<number;x++)
		a[i][x]=ch;
	
		if(number<0)
		for(int x=0;x<abs(number);x++)
		b[i][x]=ch;
		
	}

	for(int x=max-1;x>=0;x--)
	{
		for(int i=0;i<m;i++)
		{
			printf("%c ",a[i][x]);
		}
		printf("\n");
	}
	for(int i=0;i<2*m-1;i++)
	printf("-");
	printf("\n");
	for(int x=0;x<abs(max2);x++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%c ",b[i][x]);
		}
		printf("\n");
	}
	
}
