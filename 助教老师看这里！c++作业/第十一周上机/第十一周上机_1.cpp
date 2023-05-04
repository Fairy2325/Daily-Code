#include<iostream>
using namespace std;

int IsCancel(int a[1000],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            k--;
        }
    }
    return k>=0;

}

int main()
{
    int n,k,a[1000];
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(IsCancel(a,n,k))
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

}