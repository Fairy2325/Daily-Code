#include<stdio.h>
int main(void)
{
    char ch[100];
    char f;
    int i;
    while(1)
    {
        int flag = 1;
        int FLAG = 0;
        i=0;
        for(i=0;(f=getchar())!='\n';i++)
        {
            ch[i]=f;
        }
        if(ch[0]=='e'&&ch[1]=='x'&&ch[2]=='i'&&ch[3]=='t')
        break;
        for(int m=0;m<i;m++)
        {
            if((ch[m]<'0'||ch[m]>'9')&&(ch[m]<'a'||ch[m]>'z')&&(ch[m]<'A'||ch[m]>'Z'))
            FLAG=1;
        }
        char *p=ch;
        char *q=&ch[i-1];
        while(p<=q)
        {
            if(*p++!=*q--)
            flag=0;
        }
        if(FLAG==1)
        {
            printf("Input Error\n");
            continue;
        }
        if(flag==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }
    printf("End Of Input\n");
}