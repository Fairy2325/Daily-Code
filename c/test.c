#include<stdio.h>

int main (void)
{
	int number;
	scanf("%d",&number);
	if(number>0)
	printf("正数\n");
	if(number==0)
	printf("0\n");
	if(number<0)
	printf("负数\n");
	return 0;
}
