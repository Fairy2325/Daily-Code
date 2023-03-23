#include<stdio.h>

int main(void)
{
	int N,in,out=0;
	scanf("%d",&N);
	while(N--)
	{
		
		scanf("%d",&in);
		if(in%3==0&&(in<out||out==0))
		{
			out=in;
		}
	}
	if(out)
	printf("%d",out);
	else
	printf("Null");

} 
