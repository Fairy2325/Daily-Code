#include<stdio.h>

int if_prime(int num)
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
    int k,x,count;
    scanf("%d",&k);
    while(k--)
    {
        int prime_factor[100]={0};
        count = 0;
        scanf("%d",&x);
        for(int i = 2;i<=x;i++)
        {
            if(if_prime(i)&&x%i==0)
            {
                x/=i;
                prime_factor[count++]=i;
                i--;
            }
        }
        printf("%d",prime_factor[0]);
        for(int i=1;prime_factor[i]!=0;i++)
        {
            printf("*%d",prime_factor[i]);
        }
        printf("\n");
    }
}