#include<stdio.h>
#include<ctype.h>
int read(void)
{
    char a[1000],ch;
    char *p=a;
    char *q=a;
    int flag=0;
    while((ch=getchar())!='\n')
    {
        ch=tolower(ch);
        if(ch<='z'&&ch>='a')
        {
            *p++=ch;
        }
    }
    while(p>q)
    {
        if(*q++!=*--p)
        flag=1;
    }
    if(flag)
    return 0;
    else
    return 1;
}



int main(void)
{
    printf("Enter a message:");
    if(read())
    printf("Palindrome");
    else
    printf("Not palindrome");
}