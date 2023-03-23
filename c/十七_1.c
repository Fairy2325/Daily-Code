#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char *p[100];
    int i=0;
    for (i = 0;; i++)
    {
        printf("Enter word:");
        p[i]=(char*)malloc(21);
        gets(p[i]);
        if(*p[i]=='\0')
        break;
    }
    
    for(int x = 0;x < i;x++)
    {
        for(int y = x;y < i;y++)
        {
            if(strcmp(p[x],p[y])>0)
            {
                char *ex =p[x];
                p[x] = p[y];
                p[y] = ex;
            }
        }
    }

    printf("In sorted order:");

    for(int m = 0;m < i;m++)
    {
        printf("%s ",p[m]);
    }
}