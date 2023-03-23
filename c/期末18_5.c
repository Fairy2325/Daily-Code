#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int hui[100];
int count=0;

int ishui(int number)
{
	int n=number;
	int m=0;
	while(n)
	{
		m*=10;
		m+=n%10;
		n/=10;
	}
	if(m==number&&m>=10)
	return 1;
	else
	return 0;
}

void readnumber(char ch)
{
	int head=ch-'0';
	for(int i=0;isdigit(ch=getchar());i++)
	{
		head=head*10+ch-'0';
	}
	if(ishui(head))
	hui[count++]=head;
}

int main()
{
	
	char ch;
	for(int i=0;(ch=getchar())!=EOF;i++)
	{
		if(ch>='0'&&ch<='9')
		readnumber(ch);
	}
	int time;
	int time_max=0;
	for(int x=0;x<count;x++)
	{
		time=0;
		for(int y=0;y<count;y++)
		if(hui[x]==hui[y])
		time++; 
		if(time>time_max)
		time_max=time;
	}
	
	int a[100];
	int m=0;
	for(int x=0;x<count;x++)
	{
		time=0;
		for(int y=x;y<count;y++)
		if(hui[x]==hui[y])
		time++; 
		if(time==time_max)
		a[m++]=hui[x];

	}
	for(int x=0;x<m;x++)
	{
		for(int y=x;y<m;y++)
		{
			if(a[x]>a[y])
			{
				int ex=a[x];
				a[x]=a[y];
				a[y]=ex;
			}
			
		}
	}	
	for(int i=0;i<m;i++)
	{
		printf("%d %d\n",a[i],time_max);
	}
	if(m==0)
	printf("None\n");
}
