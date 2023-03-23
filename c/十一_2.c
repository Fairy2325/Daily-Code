#include<stdio.h>
void pay_amount(int dollars, int *twentiesp, int *tensp, int *fivesp, int *onesp);
int main(void)
{
    int dollars,twenties,tens,fives,ones;
    int *twentiesp=&twenties,*tensp=&tens,*fivesp=&fives,*onesp=&ones;
    printf("Enter a dollar amount:");
    scanf("%d",&dollars);
    pay_amount(dollars,twentiesp,tensp,fivesp,onesp);
    printf("$20 bills: %d\n",twenties);
    printf("$q0 bills: %d\n",tens);
    printf("$5 bills: %d\n",fives);
    printf("$1 bills: %d\n",ones);
}
void pay_amount(int dollars, int *twentiesp, int *tensp, int *fivesp, int *onesp)
{
    *twentiesp = dollars/20;
    *tensp = dollars%20/10;
    *fivesp = dollars%10/5;
    *onesp = dollars%5;
}