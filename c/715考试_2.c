#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void Exchange(char **str,int n);
int main()
{
    int n;
    char *p[100];
    char **q=p;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        p[i]=(char*)malloc(80);
        scanf("%s",p[i]);
    }
    Exchange(q,n);
    for(int i=0;i<n;i++)
    {
        puts(p[i]);
        free(p[i]);
    }
    //puts(*p);
    return 0; 
}
void Exchange(char **str, int n)

{
    for (int x = 0; x < n; x++)
    {
        for(int y = x; y < n; y++)
        {
            if(strcmp(*(str+x),*(str+y))>0)
            {
                char *ex=*(str+x);
                *(str+x)=*(str+y);
                *(str+y)=ex;
            }

        }
    }
    
}

