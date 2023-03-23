#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    char ch,a[100][1000]={'\0'};
    int x=0,y=0,max=0;
    int flag[100]={0};
    while((ch=tolower(getchar()))!=EOF)
    {
        if(ch>='a'&&ch<='z')
        {
            y=0;
            do
            {
                a[x][y++]=ch;
                ch=tolower(getchar());
            }while(ch>='a'&&ch<='z');
            x++;
        }
    }
    for(int m=0;m<x;m++)
    {
        for(int n=0;n<x;n++)
        if(strcmp(a[m],a[n]))
        {}
        else
        flag[m]++;
    }
    for(int m=0;flag[m]!=0;m++)
    {
        if(   (flag[max]==flag[m]&&strcmp(a[m],a[max])>0)   ||   (flag[max]<flag[m])    )
        max=m;
    }
    printf("%s %d\n",a[max],flag[max]);
    
}