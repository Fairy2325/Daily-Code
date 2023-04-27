#include<iostream>
using namespace std;

int max(int a,int b)
{
    for(int i=a;;i--)
    {
        if(a%i==0&&b%i==0)
        {
            return i;
        }
    }
}

int min(int a,int b)
{
    for(int i=a;;i++)
    {
        if(i%a==0&&i%b==0)
        {
            return i;
        }
    }
}


int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<max(a,b)<<" "<<min(a,b);
}