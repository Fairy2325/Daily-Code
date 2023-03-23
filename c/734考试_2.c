#include<stdio.h>

int is_prime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}

int main(void)
{
    int time,num,x,y;
    scanf("%d",&time);
    while(time--)
    {
        x=0;
        y=1;
        int a[1000]={0};
        scanf("%d",&num);
        for(int i=2;i<=num;i++)
        {
            if(num%i==0&&is_prime(i))
            {
                num/=i;
                a[x++]=i;
                i--;
            }
        }
        printf("%d",a[0]);
        while(a[y]!=0)
        printf("*%d",a[y++]);
        printf("\n");
    }
}