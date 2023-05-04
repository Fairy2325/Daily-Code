#include<iostream>
using namespace std;

int sort(int num[],int n)
{
    int ex;
    for(int x=0;x<n;x++)
    {
        for(int y=x;y<n;y++)
        {
            if(num[x]>num[y])
            {
                ex=num[x];
                num[x]=num[y];
                num[y]=ex;
            }
        }
        cout<<num[x]<<' ';
    }
}


int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,n);
}