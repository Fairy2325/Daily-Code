#include<stdio.h>
void reduce(int numerator, int denominator,int *reduced_numerator,int *reduced_denominator)
{
    int c;
    if(numerator<denominator)
    {
        c=numerator;
        numerator=denominator;
        denominator=c;        
    }
    while(denominator!=0)
    {
        c=denominator;
        denominator=numerator%denominator;
        numerator=c;
    }
    *reduced_denominator/=numerator;
    *reduced_numerator/=numerator;
}  
int main(void)
{
    int numerator,denominator,*reduced_numerator = &numerator,*reduce_denominator = &denominator;
    printf("Enter a fraction:");
    scanf("%d/%d",&numerator,&denominator);
    reduce(numerator,denominator,reduce_denominator,reduced_numerator);
    printf("In lowest terms:%d/%d",numerator,denominator);
}