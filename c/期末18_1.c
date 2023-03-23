#include<stdio.h>

int main(void)
{
	int n,a,b,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(((a*a==b*b+c*c)||(a*a+b*b==c*c)||(a*a+c*c==b*b))&&a>0&&b>0&&c>0)
		printf("Yes\n");
		else
		printf("No\n");
	}
}
