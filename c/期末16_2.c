#include<stdio.h>
int main()
{
    int m,a[100];
    scanf("%d",&m);
    while (m--)
    {
        int N,min=10000,times=0,flag1=1,flag;
        scanf("%d",&N);
        for (int i = 0; i < N; i++)
        {
            scanf(" %d",&a[i]);
            if(a[i]<min)
            min=a[i];
        }
        for (int i = 0; i < N; i++)
        {
            if(min==a[i])
            times++;
        }
        
        for (int n = 0; n < N; n++)
        {
            flag=0;
            for (int x = 0; x < N; x++)
        {
            if(a[n]>a[x])
            flag++;
        }
        if(flag==times)
        {
            printf("%d\n",a[n]);
            flag1=0;
            break;
        }
        }
        if(flag1)
        {
            printf("ERROR\n");
        }
        
        

    }
    
}