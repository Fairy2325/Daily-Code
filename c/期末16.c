#include<stdio.h>
int main(void)
{
    int m;
    int num;
    int squ;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&num);
        if(num<0)
        {
            printf("ERROR\n");
            continue;
        }
        for ( squ = 0; (squ*squ)<=(num*1000000); squ++)
        {
        }
        printf("%.2f %f\n",((float)squ-1.0)/1000.0,((float)squ-1.0)/1000.0);
        /* if (squ%10<=5)
        {
            printf("%.2f\n",squ/1000.0);
        }else{
            printf("%.3f\n",(squ+10)/1000.0);
        } */
        
        
    }
}