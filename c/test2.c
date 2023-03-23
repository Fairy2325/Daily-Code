#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define size 5

int main(void)
{
	char *name[20];
	name[0]=(char *)malloc(80);
	gets(name[0]);
	char named[20]={"nihao"};
	printf("%d",strcmp(named,name[0]));
	return 0;
}
