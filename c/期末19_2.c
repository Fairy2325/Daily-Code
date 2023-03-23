#include<stdio.h>

int main(void)
{
	int n,a[30],number=0;
	scanf("%d",&n);
	int m=n;
	while(n)
	{
		int flag=1;
		scanf(" %d",&a[n]);
		for(int i=m;i>n;i--)
		{
			if(a[n]==a[i])
			flag=0;
		}
		if(flag)
		number++;
		n--;
	}
	printf("%d",number);
}
