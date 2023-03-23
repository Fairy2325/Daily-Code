#include<stdio.h>

int main(void)
{
    char a[100]={'\0'},ch;
    for(int i=0;(ch=getchar())!='\n';i++)
    {
        if((ch>='0'&&ch<='9')||(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        a[i]=ch;
        else
        i--;
    }
    for(int i=0;a[i]!='\0';i++)
    {
        for(int x=i;a[x]!='\0';x++)
        {
            if(a[x]<a[i])
            {
                char ex;
                ex=a[x];
                a[x]=a[i];
                a[i]=ex;
            }
        }
    }
    puts(a);
}