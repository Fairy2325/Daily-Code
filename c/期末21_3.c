#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (void)
{
	char target[100];
	fgets(target,100,stdin);
	char root[100];
	fgets(root,100,stdin);
	int length_root=strlen(root)-1;
	int length_target=strlen(target)-1;
	for(int i=0;i<length_target;i++)
	{
		int flag=1;
		for(int m=0;m<length_root;m++)
		{
			if(tolower(target[i+m])!=tolower(root[m]))
			flag=0;
		}
		if(flag)
		{
			printf("/*");
			for(int x=0;x<length_root;x++)
			{
				printf("%c",target[i+x]);
			}
			i+=length_root-1;
			printf("*/");
		}else{
			printf("%c",target[i]);
		}
		
	}
	
} 
