#include<stdio.h>
int main (void)
{
    int m,n,L,ex,a[1000];
    scanf("%d%d",&m,&n);
    L=m+n;
    for(int i=0;i<L;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int x=0;x<L;x++)
    {
        for (int y=x;y<L;y++)
        {
            if(a[x]>a[y])
            {
                ex=a[x];
                a[x]=a[y];
                a[y]=ex;
            }
        }
        
    }
    for(int i=0;i<L;i++)
    printf("%d ",a[i]);
}