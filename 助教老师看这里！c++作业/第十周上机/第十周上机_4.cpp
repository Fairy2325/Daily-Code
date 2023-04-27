#include<iostream>
using namespace std;

int main()
{
    int a[100]={0};
    int m;
    int n;
    for(int i=2;i>0;)
    {
        cin>>m;
        cin>>n;
        a[m]+=n;
        if(m==0)
        i--;
    }
    int flag=1;
    for(int i=100;i>1;i--)
    {
        if(a[i]!=0&&flag)
        {
            cout<<a[i]<<'x'<<i;
            flag--;
            continue;
        } 
        if(a[i]>0)
        {
            cout<<'+'<<a[i]<<'x'<<i;
        }
        if(a[i]<0)
        {
            cout<<a[i]<<'x'<<i;
        }
    }

    if(a[1]<0)
    cout<<'-'<<a[1]<<'x';
    else
    cout<<'+'<<a[1]<<'x';
    if(a[0]<0)
    cout<<'-'<<a[0];
    else
    cout<<'+'<<a[0];
}