#include<stdio.h>
#include<string.h>
int is(char a[100])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='A')
        continue;
        else if(a[i]=='S'&&a[i+1]=='C'&&a[i+2]=='U')
        break;
        else
        return 0;
    }
    for(i+=3;a[i]!='\0';i++)
    {
        if(a[i]!='A')
        return 0;
    }
    return 1;
}

int main(void)
{
    int n;
    scanf("%d\n",&n);
    while(n--)
    {
        char a[100]={'\0'};
        gets(a);
        if(is(a))
        printf("YES\n");
        else
        printf("NO\n");
    }
}