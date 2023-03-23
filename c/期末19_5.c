#include<stdio.h>

int  isrun(int y)
{
	y+=2000;
	if(y%400==0||(y%4==0&&y%100!=0))
	return 1;
	else
	return 0;
}

int main(void)
{
	int a,b,c;
	int ping[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int ping_sum=365;
	int run[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int run_sum=366;
	char *month_name[12]={
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int flag;
	scanf("%d/%d/%d",&a,&b,&c);
	if(a!=0&&c!=0)
	if((a<=12&&(isrun(c)&&b<=run[a]||b<=ping[a]))&&(b<=12&&(isrun(a)&&c<=run[b]||c<=ping[b])))
	{
		int s=0;
		if(a<c)
		{
			for(int i=a+1;i<c;i++)
		{
			s+=isrun(i)?366:365;
		}
		for(int i=b;i<=12;i++)
		{
			s+=isrun(a)?run[i]:ping[i];
		}
		s-=c;
		for(int i=1;i<a;i++)
		{
			s+=isrun(c)?run[i]:ping[i];
		}
		s+=b;
		}else if(a>c)
		{
			for(int i=c+1;i<a;i++)
		{
			s+=isrun(i)?366:365;
		}
		
		for(int i=a;i<=12;i++)
		{
			s+=isrun(c)?run[i]:ping[i];
		}
		s-=b;
		for(int i=1;i<b;i++)
		{
			s+=isrun(a)?run[i]:ping[i];
		}
		s+=c;
		}else{
			if(a>b)
			{
				for(int i=b;i<a;i++)
				{
					s+=isrun(a)?run[i]:ping[i];
				}
				s+=isrun(a)?run[b]:ping[b];
				s-=isrun(a)?run[a]:ping[a];
			}
				for(int i=a;i<b;i++)
				{
					s+=isrun(a)?run[i]:ping[i];
				}
				s+=isrun(a)?run[a]:ping[a];
				s-=isrun(a)?run[b]:ping[b];
		}
		printf("%d\n",s);
		
		
		return 0;
	}
	
	if((a<=12&&(isrun(c)&&b<=run[a]||b<=ping[a]))||(c==0))
	{
		fputs(month_name[a-1],stdout);
		printf(" %d, 20%02d\n",b,c);
		return 0;
	}
	
	if((b<=12&&(isrun(a)&&c<=run[b]||c<=ping[b]))||(a==0))
	{
		fputs(month_name[b-1],stdout);
		printf(" %d, 20%02d\n",c,a);
		return 0;
	}	
	
} 
