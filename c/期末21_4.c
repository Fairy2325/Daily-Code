#include<stdio.h>
#include<malloc.h>
#include<string.h>
char *team_name[20];
int score_win[20]={0};
int score_lose[20]={0};
int rank[20]={0};
char team1[20];
char team2[20];

void clear(char team[20])
{
	for(int i=0;i<20;i++)
	{
		team[i]='\0';
	}
}

int find(char team[20])
{
	for(int i=0;i<20;i++)
	{
		if(strcmp(team,team_name[i])==0)
		return i;
	}
}

int ranking(int x,int y)
{
	if(score_win[x]>score_win[y])
	return 2;
	if(score_win[x]<score_win[y])
	return 0;
	if(score_lose[x]>score_lose[y])
	return 0;
	if(score_lose[x]<score_lose[y])
	return 2;
	return (strcmp(team_name[y],team_name[x]));
}

int main(void)
{
	int n;
	int score1,score2;
	
	char ch;
	
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		team_name[i]=(char *)malloc(80);
		gets(team_name[i]);
	}
	for(int i=0;i<n*(n-1)/2;i++)
	{
		int i1=0;
		int i2=0;
		clear(team1);
		clear(team2);
		while((ch=getchar())!='-')
		{
			if(ch!=' ')
			team1[i1++]=ch;
		}
		while((ch=getchar())!=':')
		{
			if(ch!=' ')
			team2[i2++]=ch;
		}
		
		scanf(" %d - %d",&score1,&score2);
		/* printf(" %d - %d\n",score1,score2); */
		getchar();
		if(score1>score2)
		{
			score_win[find(team1)]+=3;
			score_lose[find(team2)]+=3;
		}
		if(score1<score2)
		{
			score_win[find(team2)]+=3;
			score_lose[find(team1)]+=3;
		}
		if(score1==score2)
		{
			score_win[find(team1)]+=1;
			score_win[find(team2)]+=1;
			score_lose[find(team1)]+=1;
			score_lose[find(team2)]+=1;
		}
	} 
	
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(x==y)
			continue;
			if(ranking(x,y)==0)
			{
			rank[x]+=1;
			}
		}	
	}
	
	for(int x=0;x<n/2;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(rank[y]==x)
			{
			puts(team_name[y]);
			}
		}
	}
	
}
/*
6
Team 1
Team 2
Team 3
Team 4
Team 5
Team 6
Team 1-Team 2: 1 - 0
Team 1-Team 3: 1 - 0
Team 1-Team 4: 1 - 0
Team 1-Team 5: 1 - 0
Team 1-Team 6: 1 - 0
Team 2-Team 3: 1 - 0
Team 2-Team 4: 1 - 0
Team 2-Team 5: 1 - 0
Team 2-Team 6: 1 - 0
Team 3-Team 4: 1 - 0
Team 3-Team 5: 1 - 0
Team 3-Team 6: 0 - 1
Team 4-Team 5: 1 - 0
Team 4-Team 6: 1 - 0
Team 5-Team 6: 1 - 0
*/
