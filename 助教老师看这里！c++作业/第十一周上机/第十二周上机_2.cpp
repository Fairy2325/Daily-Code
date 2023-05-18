#include<iostream>
using namespace std;

int pow(int x,int n)
{
    int s=1;
    for(int i=0;i<n;i++)
    {
        s*=x;
    }
    return s;
}


int main()
{
    int x,n;
    cin>>x;
    getchar();
    cin>>n;
    cout<<pow(x,n);
}