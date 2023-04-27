#include<iostream>
using namespace std;

bool even(int n)
{
    if(n%2==0)
    return true;
    else
    return false;
}

int main()
{
    int a;
    int s=0;
    for(int i=0;;i++)
    {
        cin>>a;
        if(a<=0)
        break;
        if(even(a)==0)
        s+=a;
        
    }
    cout<<s;
}


