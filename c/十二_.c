
#include<stdio.h>
void put_word(char *p,int flag)
{
    p=p-1;
    for(int i=1;i<flag;i++)
    {
        printf("%c",*p);
        p--;
    }
}

int main(void)
{
    int flag=0;
    char a[1000];
    char *p=a,*q=a;
    printf("Enter a sentence:");
    gets(a);
    for(;*p!='\0';p++)
    {
        flag++;
        if(*p==' '||*p=='!'||*p=='?'||*p=='.')
        {
            put_word(p,flag);
            printf("%c",*(p));
            flag=0;
        }
        
    }
}

