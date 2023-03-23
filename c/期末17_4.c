#include<stdio.h>
#include<ctype.h>
#include<string.h>

int isequal(char a[20],char b[20])
{
	if(strcmp(a,b)==0)
	return 1;
	else
	return 0;
}

void clear(char a[20])
{
	for(int i=0;i<20;i++)
	{
		a[i]='\0';
	}
}

struct word
{
	char letter[20];
	int time;
};

int main(void)
{
	char ch,p[200],q[20];
	int count=0;
	int no=0;
	struct word arr[30],ex;
	clear(p);
	for(count=0;((ch=tolower(getchar()))!=EOF);count++)
	{
		p[count]=ch;
	} 
		
	int count2=0;
	int count3=0;
	
	for(int i=0;i<count;i++)
	{
		if(isalpha(p[i]))
		{			
			
			q[count2++]=p[i];
		}
		else if(isalpha(p[i-1])&&(isalpha(p[i])==0))
		{
			int flag=1;
			for(int x=0;x<count3;x++)
			{
				if(isequal(arr[x].letter,q))
				{
					arr[x].time++;
					flag=0;
				}
				
			}
			if(flag)
			{
				strcpy(arr[count3].letter,q);
				arr[count3].time=1;
				count3++;
			}
			
			count2=0;
			clear(q);	 
		}
	}
	
	for(int x=0;x<count3;x++)
	{
		for(int y=x;y<count3;y++)
		{
			if((arr[x].time<arr[y].time))
			{
				ex=arr[x];
				arr[x]=arr[y];
				arr[y]=ex;
			}
			if((arr[x].time==arr[y].time)&&(strcmp(arr[x].letter,arr[y].letter))>0)
			{
				ex=arr[x];
				arr[x]=arr[y];
				arr[y]=ex;
			}
		}
		
	}
	printf("%s %d\n",arr[0].letter,arr[0].time);
}
