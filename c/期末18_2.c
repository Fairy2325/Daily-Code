#include<stdio.h>
#include<math.h>

int main(void)
{
	int a[100]={0},b[100]={0};
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		b[i]=abs(a[i]);
	}
	int max=0;
	for(int i=0;i<m;i++)
	{
		if(b[max]<b[i])
		max=i;
	}
	printf("%d",a[max]);
}
