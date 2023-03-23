#include<stdio.h>
#include<string.h>
int is_letter(char ch)
{
    if(ch>='a'&&ch<='z')
    return 1;
    return 0;
}
int main(void)
{
    int n;
    scanf("%d\n",&n);
    while(n--)
    {
        int i;
        char a[101]={'\0'},ch;
        for(i=0;;i++)
        {
        if((ch=getchar())=='\n')
        break;
        else if(is_letter(ch))
        a[i]=ch;
        else
        i--;
        }
        for(int x=i-1;x>=0;x--)
        {
            printf("%c",a[x]);
        }
        printf("\n");

        
    }
}